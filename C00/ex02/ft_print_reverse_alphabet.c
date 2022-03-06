/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdemirko <tdemirko@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:59:38 by tdemirko          #+#    #+#             */
/*   Updated: 2022/02/13 15:16:28 by tdemirko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
	{
	char	alph;

		alph = 'z';
	while (alph >= 'a')
	{
		write(1, &alph, 1);
	alph--;
	}
}
