NAME		=	init

SRC 		=	$(shell ls *cpp)
OBJS_DIR 	= 	./objects/
OBJ			= 	$(addprefix $(OBJS_DIR), $(SRC:.cpp=.o))
PATH_HEADER		=	./


CC			=	c++ -std=c++98
CFLAGS		=	-Wall -Wextra -Werror



all 				: $(NAME)

$(NAME) 			: $(OBJ)
					$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJS_DIR)%.o		:	%.cpp
					@mkdir -p $(dir $@)
					$(CC) $(CFLAGS) -c $< -o $@

clean				:
					rm -rf $(OBJS_DIR)

fclean				:	clean
					rm -rf $(NAME)
re : clean all