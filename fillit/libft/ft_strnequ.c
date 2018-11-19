/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoque <jbchoquet@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/05 22:34:19 by jechoque          #+#    #+#             */
/*   Updated: 2017/11/08 10:50:08 by jechoque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (s1 && s2)
		while ((*s1 || *s2) && n--)
			if (*s1++ != *s2++)
				return (0);
	return (1);
}