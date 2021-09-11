/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewokim <jaewokim@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 05:12:08 by jaewokim          #+#    #+#             */
/*   Updated: 2021/09/11 05:12:19 by jaewokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y);

int	main(void)
{
	rush(4, 1);
	ft_putchar('\n');
	rush(1, 4);
	ft_putchar('\n');
	rush(7, 3);
	ft_putchar('\n');
	rush(3, 6);
	ft_putchar('\n');
	rush(1, 1);
}
