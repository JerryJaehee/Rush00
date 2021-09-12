/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewokim <jaewokim@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 08:34:52 by jaewokim          #+#    #+#             */
/*   Updated: 2021/09/12 18:14:09 by jaehelee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	g_input_x;
int	g_input_y;
int	g_current_x;
int	g_current_y;

void	write_fs(void)
{
	if (g_current_x == 1 && g_current_y == 1)
	{
		ft_putchar('/');
	}
	else if (g_current_x == g_input_x && g_current_y == g_input_y
		&& g_input_y != 1 && g_input_x != 1)
	{
		ft_putchar('/');
	}
}

void	write_star(void)
{
	if (g_current_x == 1 || g_current_y == 1
		|| g_current_x == g_input_x || g_current_y == g_input_y)
	{
		if (!(g_current_x == 1 && g_current_y == 1)
			&& !(g_current_x == g_input_x && g_current_y == g_input_y)
			&& ! (g_current_x == g_input_x && g_current_y == 1)
			&& !(g_current_x == 1 && g_current_y == g_input_y))
		{
			ft_putchar('*');
		}
	}
}

void	write_bs(void)
{
	if (g_current_x == g_input_x && g_current_y == 1 && g_current_x != 1)
	{
		ft_putchar('\\');
	}
	else if (g_current_x == 1 && g_current_y == g_input_y && g_current_y != 1)
	{
		ft_putchar('\\');
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

	if (!(input_x > 0 && input_y > 0))
		return ;
	g_input_x = input_x;
	g_input_y = input_y;
	i = g_input_x * g_input_y;
	g_current_x = 1;
	g_current_y = 1;
	while (i)
	{
		write_fs();
		write_star();
		write_bs();
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
