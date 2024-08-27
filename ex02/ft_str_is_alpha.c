/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 11:15:18 by jarao-de          #+#    #+#             */
/*   Updated: 2024/08/27 18:20:11 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if ((str[index] < 'A' || str[index] > 'Z')
			&& (str[index] < 'a' || str[index] > 'z'))
			return (0);
		index = index + 1;
	}
	return (1);
}
