/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdemirko <tdemirko@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 21:30:37 by tdemirko          #+#    #+#             */
/*   Updated: 2022/02/22 21:40:16 by tdemirko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	i;
	long	num;

	num = nb;
	i = 2;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	if (num >= 2)
	{
		while (i * i <= num)
		{
			if (i * i == num)
				return (i);
			i++;
		}
	}
	return (0);
}
/*#include <stdio.h>
int	main(void)
{
	printf("%d", ft_sqrt(16));
	return (0);
}*/
