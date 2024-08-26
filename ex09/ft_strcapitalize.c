/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 16:37:50 by jarao-de          #+#    #+#             */
/*   Updated: 2024/08/26 17:45:39 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_alpha(char str)
{
	if ((str < 'A' || str > 'Z') && (str < 'a' || str > 'z'))
		return (0);
	return (1);
}

int	ft_char_is_lowercase(char str)
{
	if (str < 'a' || str > 'z')
		return (0);
	return (1);
}

int	ft_char_is_uppercase(char str)
{
	if (str < 'A' || str > 'Z')
		return (0);
	return (1);
}

int	ft_char_is_numeric(char str)
{
	if (str < '0' || str > '9')
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	unsigned int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (ft_char_is_lowercase(str[index]) == 1
			&& (index == 0 || (ft_char_is_alpha(str[index - 1]) == 0
					&& ft_char_is_numeric(str[index - 1]) == 0)))
			str[index] = str[index] - 32;
		else if (ft_char_is_uppercase(str[index]) == 1)
			str[index] = str[index] + 32;
		index = index + 1;
	}
	return (str);
}
