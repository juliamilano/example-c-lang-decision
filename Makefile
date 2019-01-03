.PHONY:		all clean fclean re mclean mfclean mre

NAME :=		example

SRC_PATH :=	src/
INC_PATH :=	includes/
LIB_PATH :=	libft/
OBJ_PATH :=	.obj/

CC :=		clang
CFLAGS :=	-g -Wall -Werror -Wextra
IFLAGS :=	-I $(INC_PATH) -I $(LIB_PATH)
LFLAGS :=	-L $(LIB_PATH) -lft

HFILES :=	h
FILES :=	main moment
LIB :=		$(LIB_PATH)libft.a

HDRS :=		$(addprefix $(INC_PATH), $(addsuffix .h, $(HFILES)))
SRCS :=		$(addprefix $(SRC_PATH), $(addsuffix .c, $(FILES)))
OBJS :=		$(addprefix $(OBJ_PATH), $(SRCS:%.c=%.o))


all: $(NAME)

$(NAME): $(LIB) $(OBJ_PATH) $(OBJS)
	$(CC) $(CFLAGS) $(IFLAGS) $(LFLAGS) $(OBJS) -o $(NAME) -fsanitize=address
$(LIB):
	make -C $(LIB_PATH)

$(OBJ_PATH):
	mkdir -p $(OBJ_PATH)$(SRC_PATH)
$(OBJ_PATH)%.o: %.c $(HDRS)
	$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@

clean: mclean
	make clean -C $(LIB_PATH)
fclean: mfclean
	make fclean -C $(LIB_PATH)
re: fclean all

mclean:
	rm -f $(OBJS) $(DEPS)
mfclean:
	rm -f $(NAME)
	rm -rf $(OBJ_PATH)
mre: mfclean all