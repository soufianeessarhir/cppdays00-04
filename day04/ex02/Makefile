NAME =a.out

SOURCES =  main.cpp Cat.cpp Dog.cpp Animal.cpp Brain.cpp WrongAnimal.cpp WrongCat.cpp\

OBJECTS = $(SOURCES:.cpp=.o)

CC = g++-11
CFLAGS = -Wall -Wextra -Werror -std=c++98 #-g #-fsanitize=address
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