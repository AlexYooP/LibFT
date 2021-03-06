/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprunici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/17 19:10:27 by aprunici          #+#    #+#             */
/*   Updated: 2016/10/17 19:15:54 by aprunici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int len;
	int i;

	len = ft_strlen(s1);
	i = -1;
	while (s2[++i])
	{
		s1[len] = s2[i];
		len++;
	}
	s1[len] = '\0';
	return (s1);
}
