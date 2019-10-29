/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_cross.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurpas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 17:08:53 by akurpas           #+#    #+#             */
/*   Updated: 2018/05/17 17:08:55 by akurpas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/extra_function.h"

t_vec3	vec3_cross(t_vec3 vector1, t_vec3 vector2)
{
	t_vec3 vector;

	vector.x = vector1.y * vector2.z - vector1.z * vector2.y;
	vector.y = vector1.z * vector2.x - vector1.x * vector2.z;
	vector.z = vector1.x * vector2.y - vector1.y * vector2.x;
	return (vector);
}
