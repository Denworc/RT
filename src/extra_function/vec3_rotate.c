/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_rotate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurpas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 17:10:32 by akurpas           #+#    #+#             */
/*   Updated: 2018/05/17 17:10:33 by akurpas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/extra_function.h"

int	vec3_rotate(t_vec3 *vector, t_vec3 vec3_rotate)
{
	if (vec3_rotate.x)
		vec3_rot(vector, X, vec3_rotate.x);
	if (vec3_rotate.y)
		vec3_rot(vector, Y, vec3_rotate.y);
	if (vec3_rotate.z)
		vec3_rot(vector, Z, vec3_rotate.z);
	return (1);
}

int	vec3_inverse_rotate(t_vec3 *vector, t_vec3 vec3_rotate)
{
	if (vec3_rotate.z)
		vec3_rot(vector, Z, -vec3_rotate.z);
	if (vec3_rotate.y)
		vec3_rot(vector, Y, -vec3_rotate.y);
	if (vec3_rotate.x)
		vec3_rot(vector, X, -vec3_rotate.x);
	return (1);
}
