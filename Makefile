# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aperron <aperron@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/11 11:01:58 by aperron           #+#    #+#              #
#    Updated: 2024/02/18 00:49:30 by aperron          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

########################### VARIABLES ############################

NAME		= pipex

SRC_FOLDER	= ./src/

SRCS_BLANK	= main error input commands init

SRCS		= $(addsuffix .c, $(addprefix $(SRC_FOLDER), $(SRCS_BLANK)))

FLAGS		= -g -Wall -Wextra -Werror

CC			= gcc

RM			= rm -f
RM_ALL		= rm -drf

TO_CLEAN	= *.dSYM *.o

########################## TARGETS ###############################

all: $(NAME) run

$(NAME): $(SRCS)
	$(CC) $(FLAGS) $(SRCS) -L./libft -lft -o $@

run:
	@./$(NAME)

clean:
	@$(RM_ALL) $(TO_CLEAN)

fclean: clean
	@$(RM) $(NAME)
	
re: fclean all

.PHONY: all run clean fclean re test libft

###################################################################