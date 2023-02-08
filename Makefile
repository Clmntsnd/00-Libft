# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: csenand <csenand@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/18 15:11:55 by csenand           #+#    #+#              #
#    Updated: 2023/02/08 10:47:37 by csenand          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#			***			GENERAL SYNTAX				***
# 
#	The general syntax of a Makefile rule is as follows:
#
#		target : dependency1 dependency2 ...
#			[TAB] action1
#			[TAB] action2
#			...
#
#			***			SPECIAL CHARACTERS			***
#
#	Inside actions we can use:
# 		$@ to represent the full target name of the current target
# 		$? returns the dependencies that are newer than the current target
# 		$* returns the text that corresponds to % in the target
# 		$< returns the name of the first dependency
# 		$^ returns the names of all the dependencies with space as the delimiter
#
#	** SOURCE : https://github.com/amjadmajid/Makefile	**

CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror -I.
NAME		=	libft.a

SRC			= 	ft_atof.c ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c \
				ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c \
				ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
				ft_putchar_fd.c ft_putstr_fd.c ft_split.c ft_strdup.c \
				ft_putendl_fd.c ft_putnbr_fd.c ft_strchr.c ft_striteri.c \
				ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c \
				ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c \
				ft_tolower.c ft_toupper.c \

SRC_BONUS	=	ft_lstadd_front.c ft_lstadd_back.c ft_lstclear.c ft_lstdelone.c \
				ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c \

OBJ			= $(SRC:.c=.o)

OBJ_BONUS	= $(SRC_BONUS:.c=.o)

RM			= rm -rf

AR			= ar rcs 

# -- Colors -- #
BLACK = \033[0;30m
RED = \033[0;31m
GREEN = \033[0;32m
YELLOW = \033[0;33m
BLUE = \033[0;34m
PURPLE = \033[0;35m
CYAN = \033[0;36m
WHITE = \033[0;37m

# compile library
$(NAME): $(OBJ)
	$(AR) $@ $^
	@echo "Libft Done !"

# create all files .o (object) from files .c (source code)
%.o : %.c
	$(CC) $(CFLAGS) -c $^ -o $@

# BONUS
bonus : $(OBJ_BONUS)
	$(AR) $(NAME) $^
	@echo "Libft with bonuses Done !"

# creer "l'executable" 
all : $(NAME)

# Removes objects
clean :
	@echo "$(RED)💥 Removing $(NAME)'s objects... 💥"
	$(RM) $(OBJ) $(OBJ_BONUS)
	@echo "$(NAME) objects successfully deleted."

# Removes objects (with clean) and executable
fclean : clean
	@echo "Removing $(NAME) program..."
	$(RM) $(NAME)
	@echo "🎉$(GREEN)Executable(s) and archive(s) successfully deleted.$(WHITE)🎉"

# Removes objects and executable then remakes all
re : fclean all

# Avoid file-target name conflicts
.PHONY: all bonus clean fclean re