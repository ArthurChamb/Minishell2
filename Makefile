##
## Makefile for Makefile in /home/XXXXXX/Rendu/Unix_System/PSU_2015_my_popup
## 
## Made by Arthur XXXXXX
## Login   <XXXXXX@epitech.net>
## 
## Started on  Tue Dec  1 11:13:23 2015 Arthur XXXXXX
## Last update Thu Apr 14 23:39:25 2016 Arthur XXXXXX
##

NAME		= mysh

CC		= gcc -Wall -Wextra

RM		= rm -rf

CFLAGS		+= -I./include/

SRC		= main.c\
		  env.c\
		  shell.c\

OBJ		= $(SRC:.c=.o)

LIB		= -L./include -lmy

all:	$(NAME)

$(NAME):$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(LIB)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
