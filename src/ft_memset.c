/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Théo C. <theoclaereboudt@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:03:42 by Théo C.           #+#    #+#             */
/*   Updated: 2023/10/17 18:03:42 by Théo C.          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void *ft_memset(void *ptr, int value, size_t size)
{
	register unsigned char *_ptr;
	_ptr = (unsigned char *)ptr;
	while (size-- > 0)
	{
		*_ptr++ = value;
	}
	return (ptr);
}