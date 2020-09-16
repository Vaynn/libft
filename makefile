# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: yvmartor <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/10/05 14:10:17 by yvmartor     #+#   ##    ##    #+#        #
#    Updated: 2018/10/12 14:48:49 by yvmartor    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME=libft.a

HDR=includes

SRC= ft_strncat.c\
	 	ft_print_tab.c\
	 	ft_putchar.c\
		ft_putstr.c\
	 	ft_strstr.c\
	 	ft_strrchr.c\
		ft_memset.c\
		ft_strcpy.c\
		ft_strncpy.c\
		ft_bzero.c\
		ft_strdup.c\
		ft_strlcat.c\
		ft_strcat.c\
		ft_strlen.c\
		ft_strchr.c\
		ft_atoi.c\
		ft_isalpha.c\
		ft_isalnum.c\
		ft_isascii.c\
		ft_isdigit.c\
		ft_isprint.c\
		ft_toupper.c\
		ft_tolower.c\
		ft_strcmp.c\
		ft_strncmp.c\
		ft_strnstr.c\
		ft_memcpy.c\
		ft_memccpy.c\
		ft_memmove.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_memalloc.c\
		ft_memdel.c\
		ft_strnew.c\
		ft_strdel.c\
		ft_strclr.c\
		ft_striter.c\
		ft_striteri.c\
		ft_strmap.c\
		ft_strmapi.c\
		ft_strjoin.c\
		ft_strequ.c\
		ft_strnequ.c\
		ft_strsub.c\
		ft_strtrim.c\
		ft_strsplit.c\
		ft_itoa.c\
		ft_putendl.c\
		ft_putnbr.c\
		ft_putchar_fd.c\
		ft_putstr_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c\
		ft_lstnew.c\
		ft_lstdelone.c\
		ft_lstdel.c\
		ft_lstadd.c\
		ft_lstiter.c\
		ft_lstmap.c\
		ft_print_tab_fd.c\
		ft_strrev.c\

OBJ=$(SRC:.c=.o)

CC=-Wall -Werror -Wextra

all : $(NAME)

$(NAME) :
	gcc -c $(CC) -I$(HDR) $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

