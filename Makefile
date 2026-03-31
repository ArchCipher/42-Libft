# 			Library Name
NAME		= libft.a

#			Compiler & Flags
CC			= cc
FLAGS		= -Wall -Werror -Wextra

#			Headers
HEADER		= libft.h

#			Sources
MSRCS		= \
			atoi atol bzero calloc \
			isalnum isalpha isascii isdigit isprint isspace \
			memccpy memchr memcmp memcpy memmove memset \
			strchr strcspn strdup strlcat strlcpy \
			strlen strncmp strnstr strrchr strspn strtok_r \
			tolower toupper

ASRCS		= \
			itoa putchar_fd putendl_fd putnbr_fd putstr_fd \
			split striteri strjoin strmapi strtrim substr

BSRCS		= \
			lstnew lstadd_front lstadd_back lstsize lstlast \
			lstdelone lstclear lstiter lstmap

SRCS		= $(MSRCS) $(ASRCS)
MAN_SRCS	= $(addprefix ft_, $(addsuffix .c, $(SRCS)))
BONUS_SRCS	= $(addprefix ft_, $(addsuffix .c, $(BSRCS)))

#			Objects
MAN_OBJS	= $(MAN_SRCS:.c=.o)
BONUS_OBJS	= $(BONUS_SRCS:.c=.o)

#			Rules
%.o: %.c
			$(CC) $(FLAGS) -c $< -o $@

all:		$(NAME)

$(NAME):	$(MAN_OBJS)
			ar rcs $@ $^

#			Bonus with datestamp
bonus:		bonus.stamp
bonus.stamp:$(MAN_OBJS) $(BONUS_OBJS)
			ar rcs $(NAME) $^
			touch $@

clean:
			rm -f $(MAN_OBJS) $(BONUS_OBJS) bonus.stamp

fclean:		clean
			rm -f $(NAME) 

re:			fclean all bonus

.PHONY:		all bonus clean fclean re

#			$@	target name (left side of :)
#			$<	first prerequisite (right side of :)
#			$^	all prerequisites (right side of : (space separated))
#			$?	newer prerequisites (updated ones)
