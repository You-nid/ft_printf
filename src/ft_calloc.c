/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaytoun <yzaytoun@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 12:51:40 by yzaytoun          #+#    #+#             */
/*   Updated: 2022/05/03 20:13:11 by yzaytoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/ft_printf.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*mem;

	if (count == SIZE_MAX || size == SIZE_MAX)
		return (NULL);
	mem = malloc(size * count);
	if (!mem)
		return (NULL);
	ft_bzero(mem, count * size);
	return (mem);
}
