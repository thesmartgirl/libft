SRC     = main.c
OBJ     = $(SRC:.c=.o)
NAME    = simple_example

all: $(OBJ)

$(OBJ): $(NAME)
        echo $@
