/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewokim <jaewokim@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 06:54:18 by jaewokim          #+#    #+#             */
/*   Updated: 2021/09/11 06:54:20 by jaewokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	is_a(int a, int b, int x, int y)
{
	char	c;

	c = 'A';
	if (x == 1)
	{
		if (y == 1 || y == b)
		{
			ft_putchar(c);
		}
	}
}

void	is_b(int a, int b, int x, int y)
{
	char	c;

	c = 'B';
	if (x == 1 || y == 1 || x == a || y == b)
	{
		if (!(x == 1 && y == 1) && !(x == a && y == b)
			&& ! (x == a && y == 1) && !(x == 1 && y == b))
		{
			ft_putchar(c);
		}
	}
}

void	is_blank(int a, int b, int x, int y)
{
	char	c;

	c = ' ';
	if (x != 1 && y != 1 && x != a && y != b)
	{
		ft_putchar(c);
	}
}

void	is_c(int a, int b, int x, int y)
{
	char	c;

	c = 'C';
	if (a != 1)
	{
		if (x == a)
		{
			if (y == 1 || y == b)
			{
				ft_putchar(c);
			}
		}
	}
}

void	rush(int input_x, int input_y)
{
	 int	i;
	 int	x;
	 int	y;
	char	c;

	i = input_x * input_y;
	x = 1;
	y = 1;
	while (i)
	{
		is_blank(input_x, input_y, x, y);
		is_a(input_x, input_y, x, y);
		is_b(input_x, input_y, x, y);
		is_c(input_x, input_y, x, y);
		x++;
		if (x > input_x)
		{
			ft_putchar(c);
			y++;
			x = 1;
		}
		i--;
	}
}
