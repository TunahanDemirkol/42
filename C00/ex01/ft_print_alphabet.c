/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdemirko <tdemirko@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 10:45:27 by tdemirko          #+#    #+#             */
/*   Updated: 2022/02/13 15:10:24 by tdemirko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void)
	{
	char	alph;

		alph = 'a';
	while (alph <= 'z')
	{
		write(1, &alph, 1);
	alph++;
	}
}
