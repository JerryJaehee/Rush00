/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewokim <jaewokim@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 08:34:09 by jaewokim          #+#    #+#             */
/*   Updated: 2021/09/12 18:16:19 by jaehelee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_fx(int row, int column, int last_row, int last_column);
void	ft_putchar(char c);

void	rush(x, y)
{
	int	row;
	int	column;

	if (!(x > 0 && y > 0))
		return ;
	row = 0;
	while (row < y)
	{
		column = 0;
		while (column < x)
		{
			print_fx(row, column, y - 1, x - 1);
			column++;
		}
		ft_putchar('\n');
		row++;
	}
}

void	print_fx(int row, int column, int last_row, int last_column)
{
	if (row == 0)
	{
		if (column == 0 || column == last_column)
			ft_putchar('A');
		else
			ft_putchar('B');
	}
	else if (row == last_row)
	{
		if (column == 0 || column == last_column)
			ft_putchar('C');
		else
			ft_putchar('B');
	}
	else
	{
		if (column == 0 || column == last_column)
			ft_putchar('B');
		else
			ft_putchar(' ');
	}
}
