/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pcode.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 08:01:37 by tomarque          #+#    #+#             */
/*   Updated: 2023/08/14 08:01:41 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	func_main(int size_y, int size_x)
{
	char	map[size_y][size_x];
	char	map2[5][5] = {{., o, ., ., .},
				{., ., ., ., .},
				{., ., o, ., .},
				{., ., ., ., .},
				{., ., ., ., .},

	test_cube(map2, size_y, size_x);
}

int	ft_try_cube(char *map, int y, int x)
{



}

void	ft_loop_pos(char *map, int size_y, int size_x)
{
	int	x;
	int	y;

	while (y < size_y)
	{
		while (x < size_x)
		{
			if (map[y][x] == "o")
				write(1, "o", 1);
			else if (ft_try_cube(map, y, x) == 1);
				// recursive
			else
				write(1, ".", 1);
			x++;
		}
		x = 0;
		y++;
	}
	return (1);
}
