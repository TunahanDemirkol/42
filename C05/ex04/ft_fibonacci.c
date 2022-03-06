/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdemirko <tdemirko@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 21:28:55 by tdemirko          #+#    #+#             */
/*   Updated: 2022/02/22 21:30:03 by tdemirko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (0 == index)
		return (0);
	if (1 == index)
		return (1);
	if (0 > index)
		return (-1);
	else
		return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}
//#include <stdio.h>
/*int	main(void)
{
	printf("%d ", ft_fibonacci(0));
	printf("%d ", ft_fibonacci(1));
	printf("%d ", ft_fibonacci(2));
	printf("%d ", ft_fibonacci(3));
	printf("%d ", ft_fibonacci(4));
	printf("%d ", ft_fibonacci(5));
	printf("%d ", ft_fibonacci(6));
	printf("%d ", ft_fibonacci(7));
}*/
