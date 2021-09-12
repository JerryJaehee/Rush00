/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewokim <jaewokim@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 06:54:18 by jaewokim          #+#    #+#             */
/*   Updated: 2021/09/11 07:31:59 by jaewokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	g_input_x;
int	g_input_y;
int	g_current_x;
int	g_current_y;

void	write_a(void)
{
	if (g_current_x == 1)
	{
		if (g_current_y == 1 || g_current_y == g_input_y)
		{
			ft_putchar('A');
		}
	}
}

void	write_b(void)
{
	if (g_current_x == 1 || g_current_y == 1
		|| g_current_x == g_input_x || g_current_y == g_input_y)
	{
		if (!(g_current_x == 1 && g_current_y == 1)
			&& !(g_current_x == g_input_x && g_current_y == g_input_y)
			&& ! (g_current_x == g_input_x && g_current_y == 1)
			&& !(g_current_x == 1 && g_current_y == g_input_y))
		{
			ft_putchar('B');
		}
	}
}

void	write_c(void)
{
	if (g_input_x != 1)
	{
		if (g_current_x == g_input_x)
		{
			if (g_current_y == 1 || g_current_y == g_input_y)
			{
				ft_putchar('C');
			}
		}
	}
}

void	write_blank(void)
{
	if (g_current_x != 1 && g_current_y != 1
		&& g_current_x != g_input_x && g_current_y != g_input_y)
	{
		ft_putchar(' ');
	}
}

void	rush(int input_x, int input_y)
{
	int	i;

	g_input_x = input_x;
	g_input_y = input_y;
	i = g_input_x * g_input_y;
	g_current_x = 1;
	g_current_y = 1;
	while (i)
	{
		write_a();
		write_b();
		write_c();
		write_blank();
		g_current_x++;
		if (g_current_x > g_input_x)
		{
			ft_putchar('\n');
			g_current_y++;
			g_current_x = 1;
		}
		i--;
	}
}
