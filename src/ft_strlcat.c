/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclaereb <tclaereb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:51:59 by tclaereb          #+#    #+#             */
/*   Updated: 2023/10/19 13:40:18 by tclaereb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t  src_size;
    size_t  dst_size;
    size_t  total_size;
    int     i;

    src_size = ft_strlen(src);
    dst_size = ft_strlen(dst);
    total_size = src_size + dst_size;
    i = (int)dst_size;
    if (size == 0 || total_size >= size - 1)
        return (total_size);
    while (*src && size-- - dst_size - 1)
        dst[i++] = *src++;
    dst[i] = '\0';
    return (total_size);
}