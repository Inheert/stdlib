/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclaereb <tclaereb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:27:54 by tclaereb          #+#    #+#             */
/*   Updated: 2023/10/18 16:34:00 by tclaereb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*_s;
	int		i;

	_s = (char *)s;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (_s + i);
		i++;
	}
	return (NULL);
}
