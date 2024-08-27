/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 10:17:50 by jarao-de          #+#    #+#             */
/*   Updated: 2024/08/27 17:07:48 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_hex(unsigned long nb, int digits, int unit)
{
	int	has_divided;

	has_divided = 0;
	if (unit < digits)
	{
		if (nb >= 16)
		{
			ft_putnbr_hex(nb / 16, digits, unit + 1);
			has_divided = 1;
			nb = nb % 16;
		}
		if (has_divided == 0 && unit < digits)
		{
			while (unit < digits - 1)
			{
				write(1, "0", 1);
				unit = unit + 1;
			}
		}
		if (nb < 16)
		{
			write(1, &"0123456789abcdef"[nb % 16], 1);
		}
	}
}

void	ft_string_hex(char *str, int start, int print_size, int str_size)
{
	int	index;

	index = 0;
	while (index < print_size && start + index < str_size)
	{
		ft_putnbr_hex(str[start + index], 2, 0);
		if (index % 2 == 1)
			write(1, " ", 1);
		index = index + 1;
	}
	while (index < print_size)
	{
		write(1, "  ", 2);
		if (index % 2 == 1)
			write(1, " ", 1);
		index = index + 1;
	}
}

void	ft_string(char *str, int start, int print_size, int str_size)
{
	int	index;

	index = 0;
	while (index < print_size && start + index < str_size)
	{
		if (str[start + index] >= 32 && str[start + index] <= 126)
			write(1, &str[start + index], 1);
		else
			write(1, ".", 1);
		index = index + 1;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned long	addr_num;
	char			*addr_char;
	unsigned int	index;

	if (size > 0)
	{
		addr_num = (unsigned long) addr;
		addr_char = addr;
		index = 0;
		while (index <= size / 16)
		{
			ft_putnbr_hex(addr_num + index * 16, 16, 0);
			write(1, ": ", 2);
			ft_string_hex(addr_char, index * 16, 16, size);
			ft_string(addr_char, index * 16, 16, size);
			write(1, "\n", 4);
			index = index + 1;
		}
	}
	return (addr);
}
