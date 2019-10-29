/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color_to_vec3.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurpas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 17:05:53 by akurpas           #+#    #+#             */
/*   Updated: 2018/05/17 17:05:55 by akurpas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/extra_function.h"

t_vec3	color_to_vec3(t_color color)
{
	t_vec3 vector;

	vector.x = (double)color.x / 255;
	vector.y = (double)color.y / 255;
	vector.z = (double)color.z / 255;
	return (vector);
}
