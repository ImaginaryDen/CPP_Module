NAME		=	init

SRC 		=	$(shell ls *cpp) $(shell ls sources/*cpp)
OBJS_DIR 	= 	./objects/
OBJS 		= 	$(addprefix $(OBJS_DIR), $(SRC:.cpp=.o))

PATH_HEADER		=	./headers/


CC			=	c++ -std=c++98
CFLAGS		=	-Wall -Wextra -Werror -I ./headers/



all 				: $(NAME)

$(NAME) 			: $(OBJS)
					$(CC) $(CFLAGS) $(SRC) -o $(NAME)

$(OBJS_DIR)%.o		:	%.cpp $(PATH_HEADER)*.hpp
					mkdir -p $(dir $@)
					c++ $(CFLAGS) -c $< -o $@

clean				:
					rm -rf $(OBJS_DIR)

fclean				:	clean
					rm -rf $(NAME)
re : clean all