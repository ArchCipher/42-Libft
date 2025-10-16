# library and project names
NAME		= libft.a
TEST		= test.out
LEAKTEST	= leak.out

# compiler and flags
CC			= cc
FLAGS		= -Wall -Werror -Wextra
SFLAGS		= -fsanitize=address

# headers
ALL_HEADERS	= -I. -I./my_tests

# source files
MSRCS = \
	   isalpha isdigit isalnum isascii isprint toupper tolower\
	   strlen strlcpy strlcat strchr strrchr strnstr strncmp\
	   memset memcpy bzero memccpy memmove memchr memcmp\
	   atoi strdup calloc
ASRCS = \
		substr strjoin strtrim split itoa strmapi striteri\
		putchar_fd putstr_fd putendl_fd putnbr_fd 
ESRCS = \
		isspace numlen
BSRCS = \
		lstnew lstadd_front lstsize lstlast lstadd_back\
		lstdelone lstclear lstiter lstmap

SRCS	= $(MSRCS) $(ASRCS) $(ESRCS)
MAN_SRCS = $(addprefix ft_, $(addsuffix .c, $(SRCS)))
BONUS_SRCS = $(addprefix ft_, $(addsuffix .c, $(BSRCS)))
TEST_SRCS	= $(wildcard my_tests/*.c)

# objects
MAN_OBJS	= $(MAN_SRCS:.c=.o)
BONUS_OBJS	= $(BONUS_SRCS:.c=.o)
TEST_OBJS	= $(patsubst my_tests/%.c, my_tests/%.o, $(TEST_SRCS))

all: $(NAME)

$(NAME): $(MAN_OBJS)
	ar rcs $@ $?

bonus: bonus.stamp
bonus.stamp: $(MAN_OBJS) $(BONUS_OBJS)
	ar rcs $(NAME) $?
	touch $@

$(TEST): $(NAME) $(TEST_OBJS) $(MAN_OBJS) $(BONUS_OBJS)
	$(CC) -g $(FLAGS) $(SFLAGS) $(ALL_HEADERS) $? -L. -lft -o $@

test: $(TEST) 
	./$<

$(LEAKTEST): $(NAME) $(TEST_OBJS) $(MAN_OBJS) $(BONUS_OBJS)
	$(CC) -g $(FLAGS) $(ALL_HEADERS) $? -L. -lft -o $@

leak: $(LEAKTEST)
	leaks --atExit -- ./$<

my_tests/%.o: my_tests/%.c
	$(CC) $(FLAGS) $(ALL_HEADERS) -c $< -o $@

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(MAN_OBJS) $(BONUS_OBJS) $(TEST_OBJS)

fclean: clean
	rm -f $(NAME) $(TEST) $(LEAKTEST)

re: fclean all bonus

.PHONY: all bonus test leaktest clean fclean re

#	$@	target name (left side of :)
#	$<	first prerequisite (right side of :)
#	$^	all prerequisites (right side of : (space separated))
#	$?	newer prerequisites (updated ones)
#	-c	compile only, do not link

#	-L.		add current directory to library search path
#	-lft	link with libft.a

