/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_to_color.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurpas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 17:10:55 by akurpas           #+#    #+#             */
/*   Updated: 2018/05/17 17:10:56 by akurpas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/extra_function.h"

t_color	vec3_to_color(t_vec3 vector)
{
	t_color color;

	color.x = (unsigned char)(vector.x * 255);
	color.y = (unsigned char)(vector.y * 255);
	color.z = (unsigned char)(vector.z * 255);
	return (color);
}
