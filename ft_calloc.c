/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemontei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 21:51:21 by pemontei          #+#    #+#             */
/*   Updated: 2023/04/17 21:59:07 by pemontei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*memloc;

	memloc = malloc(nitems * size);
	if (!(memloc))
	{
		return (0);
	}
	ft_bzero(memloc, nitems * size);
	return (memloc);
}
