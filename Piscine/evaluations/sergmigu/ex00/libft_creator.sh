# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sergmigu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/16 11:41:06 by sergmigu          #+#    #+#              #
#    Updated: 2023/08/16 11:41:09 by sergmigu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #!/bin/bash                                                                     

# Compile into .o                                                               

cc -Wall -Wextra -Werror -c *.c

# Create lib                                                                    

ar rcs libft.a *.o

# Clean temp .o                                                                 

rm *.o



