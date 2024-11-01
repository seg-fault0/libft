SRC =	ft_atoi.c		ft_putstr_fd.c \
		ft_bzero.c		ft_split.c \
		ft_calloc.c		ft_strchr.c \
		ft_isalnum.c	ft_strdup.c \
		ft_isalpha.c	ft_striteri.c \
		ft_isascii.c	ft_strjoin.c \
		ft_isdigit.c	ft_strlcat.c \
		ft_isprint.c	ft_strlcpy.c \
		ft_itoa.c		ft_strlen.c \
		ft_memchr.c		ft_strmapi.c \
		ft_memcmp.c		ft_strncmp.c \
		ft_memcpy.c		ft_strnstr.c \
		ft_memmove.c	ft_strrchr.c \
		ft_memset.c		ft_strtrim.c \
		ft_putchar_fd.c	ft_substr.c \
		ft_putendl_fd.c	ft_tolower.c \
		ft_putnbr_fd.c	ft_toupper.c

OBG = $(SRC:.c=.o)
LIB = libft.a
CC = cc
FLAGS = -Wall -Wextra -Werror
AR = ar

all: $(LIB)

$(LIB):$(OBG) libft.h
	$(AR) -rc $@ $^

%.o:%.c
	$(CC) -c $(FLAGS) $< -o $@

clean:
	rm -f *.o

fclean: clean
	rm -f $(LIB)

re: fclean all
