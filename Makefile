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



all:	$(SERVER) $(CLIENT) $(LIBFT)

$(SERVER): $(OBJ_SERVER) 
			$(CC) $(CFLAGS) -Iinc $(OBJ_SERVER) $(LIBFT) -o $(SERVER)

$(CLIENT): $(OBJ_CLIENT)
			$(CC) $(CFLAGS) -Iinc $(OBJ_CLIENT) $(LIBFT) -o $(CLIENT)

$(LIBFT):
		$(MAKE) -C ./libft

clean:
	$(MAKE) clean -C libft
	$(RM) $(OBJ_SERVER) $(OBJ_CLIENT)
	$(CLEANED)

fclean: clean
		$(RM) server client
		$(FCLEANED)

re: fclean all

.PHONY: all server client clean fclean re libft


