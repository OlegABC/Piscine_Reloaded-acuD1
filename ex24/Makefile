NAME = libft.a

S_PATH = ./srcs/
H_PATH = ./includes/

SRC += $(S_PATH)ft_putchar.c
SRC += $(S_PATH)ft_putstr.c
SRC += $(S_PATH)ft_strcmp.c
SRC += $(S_PATH)ft_strlen.c
SRC += $(S_PATH)ft_swap.c
OBJ += ft_putchar.o
OBJ += ft_putstr.o
OBJ += ft_strcmp.o
OBJ += ft_strlen.o
OBJ += ft_swap.o
H += -I $(H_PATH)

C_GCC = gcc
COMPL = $(C_GCC) -c
AR_RC = ar rc
RANLI = ranlib
CFLAG = -Wall -Wextra -Werror
GCSUCCES = @echo "\033[33;32m===> Compilation\tSUCCESS"
CLSUCCES = @echo "\033[33;31m===> Cleanup\t\tSUCCESS"
FCLSUCCES = @echo "\033[33;31m===> Force Cleanup\tSUCCESS"

all: $(NAME)

$(NAME):
	@$(COMPL) $(CFLAG) $(SRC) $(H)
	@$(AR_RC) $(NAME) $(OBJ)
	@$(RANLI) $(NAME)
	$(GCSUCCES)

clean:
	@/bin/rm -rf $(OBJ)
	$(CLSUCCES)

fclean:
	@/bin/rm -rf $(OBJ) $(NAME)
	$(FCLSUCCES)

re: fclean norme all clean
