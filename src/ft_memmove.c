/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclaereb <tclaereb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:51:01 by tclaereb          #+#    #+#             */
/*   Updated: 2023/10/19 14:10:11 by tclaereb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*_dest;
	char	*_src;

	_dest = (char *)dest;
	_src = (char *)src;
	if (dest < src)
		while (n--)
			*_dest++ = *_src++;
	else
		while (n--)
		_dest[n] = _src[n];
	return (dest);
}