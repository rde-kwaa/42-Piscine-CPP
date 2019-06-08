# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rde-kwaa <rde-kwaa@student.wethinkcode.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/03 17:51:09 by rde-kwaa          #+#    #+#              #
#    Updated: 2019/06/06 14:59:41 by rde-kwaa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#色 (Iro = Colour)
C = \033[0;36m
R = \033[0;91m
P = \033[1;95m
G = \033[4;32m
E = \033[0m

# I have started using expanded variables for good practice. This is gives you
# the freedom to assign values in whatever order I need. Variables will be
# assigned there values at the time of definition. Almost like const, but not.

#名前 (Namae = Name)
PROG :=	megaphone

#源 (Minamoto = Sources)
SRCS :=	megaphone.cpp

#物 (Mono = Object)
OBJS :=	$(SRCS:.cpp=.o)

#旗 (Hata = Flag)
CXXFLAGS :=	-Wall -Werror -Wextra -pedantic -std=c++98

#全 (Zen = All)
all: $(PROG)

#編者 (Henja = Compiler) C++ Compiler
CXX := clang++

#作る (Tsukuru = Build)
$(PROG): $(OBJS)
	@$(C)$(CXX)$(E) $(P)$(OBJS)$(E) -o $@
	@echo "$(G)Done!$(E)"

%.o:%.c
	$(CXX) $(CXXFLAGS) -o $@ -c $<

#粛党 (Shukutō = Cleaning up)
clean:
			@rm -f $(OBJS)
			@echo "$(R)Cleaned!$(E)"
fclean:     clean
			@rm -f $(PROG)
			@echo "$(P)Cleaned Everything!$(E)"

#作り直す (Tsukurinaosu = Rebuild)
re:			fclean all

#重複 (Jūfuku = Redundency) | GNU still runs if files with names below exist
.PHONY:
			all clean fclean re
