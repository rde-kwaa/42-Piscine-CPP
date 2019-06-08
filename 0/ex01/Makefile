# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rde-kwaa <rde-kwaa@student.wethinkcode.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/03 17:51:09 by rde-kwaa          #+#    #+#              #
#    Updated: 2019/06/04 16:19:28 by rde-kwaa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#色 (Iro = Colour)
C = \033[0;36m
R = \033[0;31m
E = \033[0m

#名前 (Namae = Name)
PROG := brulebook

#源 (Minamoto = Sources)
SRCS :=	main.cpp Contact.class.cpp newContact.cpp searchBook.cpp

#物 (Mono = Object)
OBJS :=	$(SRCS:.cpp=.o)

#宣言 (Sengen = Declarations) Headers
DECA := Contact.hpp

#旗 (Hata = Flag)
CXXFLAGS :=	-Wall -Werror -Wextra -pedantic -std=c++98

#編者 (Henja = Compiler) C++ Compiler
CXX := clang++

#作る (Tsukuru = Build)
$(PROG): $(OBJS)
	@$(CXX) $(OBJS) -o $@

%.o:%.c
	$(CXX) $(CXXFLAGS) -o $@ -c $<

#全 (Zen = All)
all: $(PROG)

#粛党 (Shukutō = Cleaning up)
clean:
			@rm -f $(OBJS)
			@echo "$(R)Cleaned!$(E)"
fclean:     clean
			@rm -f $(PROG)
			@echo "$(R)Cleaned Everything!$(E)"

#作り直す (Tsukurinaosu = Rebuild)
re:			fclean all

#重複 (Jūfuku = Redundency) | GNU still runs if files with names below exist
.PHONY:
			all clean fclean re
