/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Théo C. <theoclaereboudt@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:58:54 by Théo C.           #+#    #+#             */
/*   Updated: 2023/10/17 17:58:54 by Théo C.          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void 	*ft_memcpy(void *dest, const void *src, int size)
{
	int i;
	char *_dest;
	char *_src;

	i = 0;
	_dest = (char *)dest;
	_src = (char *)src;
	while (i < size)
	{
		_dest[i] = _src[i];
		i++;
	}
	return (dest);
}