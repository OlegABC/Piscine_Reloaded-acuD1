NAME = libft.a

SRCS_PATH = ./srcs/
H_PATH = ./includes/

SRC += $(SRCS_PATH)ft_putchar.c
SRC += $(SRCS_PATH)ft_putstr.c
SRC += $(SRCS_PATH)ft_strcmp.c
SRC += $(SRCS_PATH)ft_strlen.c
SRC += $(SRCS_PATH)ft_swap.c
OBJ += ft_putchar.o
OBJ += ft_putstr.o
OBJ += ft_strcmp.o
OBJ += ft_strlen.o
OBJ += ft_swap.o
H += -I $(H_PATH)

CC = gcc
CFLAGS = -c -Wall -Wextra -Werror
GCSUCCES = @echo "\033[33;32m===> Compilation\tSUCCESS"
CLSUCCES = @echo "\033[33;31m===> Cleanup\t\tSUCCESS"
FCLSUCCES = @echo "\033[33;31m===> Force Cleanup\tSUCCESS"
NORME = @echo "\033[33;35m===> Norminette\t\tRUNNING"
NORMEDONE = @echo "\033[33;32m===> Norminette\t\tDONE"

all: $(NAME)

gc:
	@$(CC) -c $(SRC) $(H)
	@$(CC) $(OBJ) -o $(NAME)
	$(GCSUCCES)

norme:
	$(NORME)
	@norminette $(SRC) ./includes/libft.h
	$(NORMEDONE)

$(NAME):
	@$(CC) $(CFLAGS) $(SRC) $(H)
	@$(CC) $(OBJ) -o $(NAME)
	$(GCSUCCES)

clean:
	@/bin/rm -rf $(OBJ)
	$(CLSUCCES)

fclean:
	@/bin/rm -rf $(OBJ) $(NAME)
	$(FCLSUCCES)

re: fclean norme all clean
