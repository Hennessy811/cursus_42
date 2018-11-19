/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtouffet <vtouffet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 16:23:49 by vtouffet          #+#    #+#             */
/*   Updated: 2017/12/04 16:34:27 by vtouffet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>

int	ft_nbrlen(uintmax_t nb)
{
	int	size;

	size = 0;
	while (nb > 0 && ++size)
		nb /= 10;
	return (size);
}
