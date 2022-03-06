/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdemirko <tdemirko@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 20:11:36 by tdemirko          #+#    #+#             */
/*   Updated: 2022/02/16 20:17:18 by tdemirko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	c;

	i = 0;
	while (i < size / 2)
	{
		c = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = c;
		i++;
	}
}
