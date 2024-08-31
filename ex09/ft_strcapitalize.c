/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 16:37:50 by jarao-de          #+#    #+#             */
/*   Updated: 2024/08/31 16:36:15 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(char str)
{
	if ((str < 'A' || str > 'Z') && (str < 'a' || str > 'z'))
		return (0);
	return (1);
}

int	ft_islowercase(char str)
{
	if (str < 'a' || str > 'z')
		return (0);
	return (1);
}

int	ft_isuppercase(char str)
{
	if (str < 'A' || str > 'Z')
		return (0);
	return (1);
}

int	ft_isnumeric(char str)
{
	if (str < '0' || str > '9')
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	unsigned int	index;
	unsigned int	capitalize;

	index = 0;
	capitalize = 1;
	while (str[index] != '\0')
	{
		if (ft_isalpha(str[index]) == 1 || ft_isnumeric(str[index]) == 1)
		{
			if (ft_islowercase(str[index]) == 1 && capitalize == 1)
				str[index] = str[index] - 32;
			else if (ft_isuppercase(str[index]) == 1 && capitalize == 0)
				str[index] = str[index] + 32;
			capitalize = 0;
		}
		else
		{
			capitalize = 1;
		}
		index = index + 1;
	}
	return (str);
}
