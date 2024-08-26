/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 12:26:15 by jarao-de          #+#    #+#             */
/*   Updated: 2024/08/26 12:27:06 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	index;

	index = 0;
	if (str[index] == -1 || str[index] == '\0')
		return (1);
	while (str[index] != '\0')
	{
		if (str[index] < 'A' || str[index] > 'Z')
			return (0);
		index = index + 1;
	}
	return (1);
}
