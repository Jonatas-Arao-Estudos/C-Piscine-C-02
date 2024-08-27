/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 17:58:45 by jarao-de          #+#    #+#             */
/*   Updated: 2024/08/27 09:17:10 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	index;

	index = 0;
	while (str[index] != '\0')
	{
		index = index + 1;
	}
	return (index);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	index;

	index = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[index] != '\0' && index < size - 1)
	{
		dest[index] = src[index];
		index = index + 1;
	}
	dest[index] = '\0';
	while (src[index] != '\0')
	{
		index = index + 1;
	}
	return (index);
}
