/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtshisw <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 13:33:26 by mtshisw           #+#    #+#             */
/*   Updated: 2018/05/28 12:12:31 by mtshisw          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncat(char *dest, const char *src, size_t n)
{
	char *d;

	d = dest;
	while (*d != '\0')
		d++;
	while (*src != '\0' && n > 0)
	{
		*d = *src;
		d++;
		src++;
		n--;
	}
	*d = '\0';
	return (dest);
}