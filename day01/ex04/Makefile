NAME =ex04

SOURCES =  main.cpp  \

OBJECTS = $(SOURCES:.cpp=.o)

CC = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -fno-implicit-templates -D_GLIBCXX_USE_CXX11_ABI=0 
RM = rm -f

all: $(NAME)

$(NAME): $(OBJECTS) 
	$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)

%.o: %.cpp  
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re