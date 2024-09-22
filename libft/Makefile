SRC_DIR	= src/

INC_DIR = inc/

OBJ_DIR	= obj/

FT_ALL	= $(SRC_DIR)ft_all/ft_isalnum.c \
		$(SRC_DIR)ft_all/ft_isprint.c \
		$(SRC_DIR)ft_all/ft_memcmp.c \
		$(SRC_DIR)ft_all/ft_putchar_fd.c \
		$(SRC_DIR)ft_all/ft_split.c \
		$(SRC_DIR)ft_all/ft_strlcat.c \
		$(SRC_DIR)ft_all/ft_strncmp.c \
		$(SRC_DIR)ft_all/ft_substr.c \
		$(SRC_DIR)ft_all/ft_atoi.c \
		$(SRC_DIR)ft_all/ft_isalpha.c \
		$(SRC_DIR)ft_all/ft_itoa.c \
		$(SRC_DIR)ft_all/ft_putendl_fd.c \
		$(SRC_DIR)ft_all/ft_strchr.c \
		$(SRC_DIR)ft_all/ft_strlcpy.c \
		$(SRC_DIR)ft_all/ft_striteri.c\
		$(SRC_DIR)ft_all/ft_strnstr.c \
		$(SRC_DIR)ft_all/ft_tolower.c \
		$(SRC_DIR)ft_all/ft_bzero.c \
		$(SRC_DIR)ft_all/ft_isascii.c \
		$(SRC_DIR)ft_all/ft_memcpy.c \
		$(SRC_DIR)ft_all/ft_memmove.c \
		$(SRC_DIR)ft_all/ft_putnbr_fd.c \
		$(SRC_DIR)ft_all/ft_strdup.c \
		$(SRC_DIR)ft_all/ft_strlen.c \
		$(SRC_DIR)ft_all/ft_strrchr.c \
		$(SRC_DIR)ft_all/ft_toupper.c \
		$(SRC_DIR)ft_all/ft_calloc.c \
		$(SRC_DIR)ft_all/ft_isdigit.c \
		$(SRC_DIR)ft_all/ft_memchr.c  \
		$(SRC_DIR)ft_all/ft_memset.c  \
		$(SRC_DIR)ft_all/ft_putstr_fd.c \
		$(SRC_DIR)ft_all/ft_strjoin.c \
		$(SRC_DIR)ft_all/ft_strmapi.c \
		$(SRC_DIR)ft_all/ft_strtrim.c

FT_PF	= $(SRC_DIR)ft_printf/ft_putchar.c \
	 	$(SRC_DIR)ft_printf/ft_putstr.c \
	  	$(SRC_DIR)ft_printf/ft_putnbr.c \
		$(SRC_DIR)ft_printf/ft_putunbr.c \
		$(SRC_DIR)ft_printf/ft_putptr.c \
		$(SRC_DIR)ft_printf/ft_printf.c \
		$(SRC_DIR)ft_printf/ft_puthex.c 

GNL	= $(SRC_DIR)get_next_line/get_next_line.c 

SRC	= $(FT_ALL) $(FT_PF) $(GNL)

OBJS	= $(patsubst $(SRC_DIR)%.c,$(OBJ_DIR)%.o,$(SRC))

CC		= cc

CFlags	= -Wall -Wextra -Werror

RM		= rm -f

NAME	= libft.a

AR	= ar rcs

all: 			$(NAME)

$(NAME): 		$(OBJS)
				@$(AR) $(NAME) $(OBJS)

$(OBJ_DIR)%.o:	$(SRC_DIR)%.c
				@mkdir -p $(@D)
				@$(CC) $(CFLAGS) $(INC) -c $< -o $@

clean:
				$(RM) -r $(OBJ_DIR)
				$(RM) .cache_exists

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
