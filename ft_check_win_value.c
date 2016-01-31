/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_win_value.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouder <tbouder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/31 22:39:15 by tbouder           #+#    #+#             */
/*   Updated: 2016/01/31 22:39:25 by tbouder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_game.h"

int		ft_check_win_value(int nb, int r)
{
	if (nb == 2)
	{
		r = 1;
		return (r);
	}
	if (nb % 2 == 0)
		r = ft_check_win_value(nb / 2, r);
	return (r);
}
