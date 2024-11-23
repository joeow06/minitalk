LIBFT = libft/libft.a
SRC_SERVER = server.c
SRC_CLIENT = client.c
OBJ_SERVER = $(SRC_SERVER:.c=.o)
OBJ_CLIENT = $(SRC_CLIENT:.c=.o)

CC = cc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f

SERVER = server
CLIENT = client

all: $(LIBFT) $(SERVER) $(CLIENT)

$(SERVER): $(OBJ_SERVER) $(LIBFT)
			$(CC) $(CFLAGS) -Iinc $(OBJ_SERVER) $(LIBFT) -o $(SERVER)

$(CLIENT): $(OBJ_CLIENT) $(LIBFT)
			$(CC) $(CFLAGS) -Iinc $(OBJ_CLIENT) $(LIBFT) -o $(CLIENT)

$(LIBFT):
			$(MAKE) -C libft

clean:
			$(MAKE) clean -C libft
			$(RM) $(OBJ_SERVER) $(OBJ_CLIENT)

fclean: clean
			$(MAKE) fclean -C libft
			$(RM) $(SERVER) $(CLIENT)

re: fclean all

.PHONY: all server client clean fclean re libft
