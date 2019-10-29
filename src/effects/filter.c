/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filter.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurpas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 16:44:35 by akurpas           #+#    #+#             */
/*   Updated: 2018/05/17 16:44:37 by akurpas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/rt.h"

void	gamma_color(double gamma, t_vec3 *color)
{
	if (gamma != 1.0)
	{
		color->x = powf(color->x, gamma);
		color->y = powf(color->y, gamma);
		color->z = powf(color->z, gamma);
	}
}

void	invert_filter(t_vec3 *color)
{
	color->x = 1.0 - color->x;
	color->y = 1.0 - color->y;
	color->z = 1.0 - color->z;
}

void	scale_filter(t_vec3 *color)
{
	double	scale_coef;

	scale_coef = (color->x + color->y + color->z) / 3.0;
	*color = create_vec3(scale_coef, scale_coef, scale_coef);
}
