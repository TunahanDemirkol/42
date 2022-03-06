/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdemirko <tdemirko@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 20:07:19 by tdemirko          #+#    #+#             */
/*   Updated: 2022/02/17 21:31:57 by tdemirko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
char	*ft_strcapitalize(char *str)
{
	int	i;
	int	x;

	x = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (x == 1 && str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
		else if (x == 0 && str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		if (str[i] < 48 || (str[i] < 65 && str[i] > 57))
			x = 1;
		else if ((str[i] > 90 && str[i] < 97) || str[i] > 122)
			x = 1;
		else
			x = 0;
		i++;
	}
	return (str);
}
int		main(void)
{
	char str1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	char str2[] = " sALuT, ComMenT tu VAS ? 42Mots QUarante-deUX; cinQuantE+ET+un";

	char empty[] = "";

	printf("\n-----\nBEF = %s", str1);
	printf("\nAFT = %s\n", ft_strcapitalize(str1));
	printf("\nBEF = %s", str2);
	printf("\nAFt = %s\n", ft_strcapitalize(str2));
	printf("\nEmpty = %s\n-----\n", ft_strcapitalize(empty));

}
