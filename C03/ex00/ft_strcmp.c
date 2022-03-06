/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdemirko <tdemirko@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 13:14:34 by tdemirko          #+#    #+#             */
/*   Updated: 2022/02/20 15:33:06 by tdemirko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;	

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] || s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*int main ()
{
	printf("%d",ft_strcmp("Tuna","Tuna"));	
}*/
