NAME = ft_display_file

SRCS_PATH = ./srcs/
H_PATH = ./includes/

SRC += $(SRCS_PATH)ft_display_file.c
OBJ += ft_display_file.o
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
	@norminette $(SRC) ./includes/ft_display_file.h
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
