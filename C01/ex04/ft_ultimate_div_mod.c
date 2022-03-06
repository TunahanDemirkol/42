/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdemirko <tdemirko@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 16:53:27 by tdemirko          #+#    #+#             */
/*   Updated: 2022/02/14 17:07:00 by tdemirko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	bol;
	int	kal;

	bol = *a / *b;
	kal = *a % *b;
	*a = bol;
	*b = kal;
}
