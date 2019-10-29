/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clampf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurpas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 17:05:31 by akurpas           #+#    #+#             */
/*   Updated: 2018/05/17 17:05:33 by akurpas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/extra_function.h"

double	ft_clampf(double value, double min, double max)
{
	value > max ? value = max : 0;
	value < min ? value = min : 0;
	return (value);
}

int		ft_clamp(int value, int min, int max)
{
	value > max ? value = max : 0;
	value < min ? value = min : 0;
	return (value);
}
