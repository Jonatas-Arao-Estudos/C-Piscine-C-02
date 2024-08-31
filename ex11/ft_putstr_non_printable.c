/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 09:31:59 by jarao-de          #+#    #+#             */
/*   Updated: 2024/08/31 15:42:44 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] < 32 || str[index] > 126)
		{
			write(1, "\\", 1);
			write(1, &"0123456789abcdef"[(unsigned char) str[index] / 16], 1);
			write(1, &"0123456789abcdef"[(unsigned char) str[index] % 16], 1);
		}
		else
			write(1, &str[index], 1);
		index = index + 1;
	}
}
