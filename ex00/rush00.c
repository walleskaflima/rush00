/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfelix-p <wfelix-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 18:01:50 by wfelix-p          #+#    #+#             */
/*   Updated: 2023/05/29 10:59:22 by wfelix-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	i;
	int	j;

	j = 0;
	i = 0;

	if (x <= 1 ) {write (1, "", 1);}
	else
	{ 
		ft_putchar('o');
	if (x > 1)
	{
		while (i < x - 2)
		{
			ft_putchar('-');
			i++;
		}
		ft_putchar('o');
	}
	}
	ft_putchar('\n');
	if (y > 1)
	{
		while (j < y - 2)
		{
			i = 0;
			ft_putchar('|');
			if (x > 1)
			{
				while (i < x - 2)
				{
					ft_putchar(' ');
					i++;
				}
				ft_putchar('|');
			}
			ft_putchar('\n');
			j++;
		}
		i = 0;
		if (x <= 1 ) {write (1, "", 1);}
		else{
			ft_putchar('o');
		if (x > 1)
		{
			while (i < x - 2)
			{
				ft_putchar('-');
				i++;
			}
			ft_putchar('o');
		}
		ft_putchar('\n');
		}
	}
}
