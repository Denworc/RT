/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_scale.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurpas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 17:10:42 by akurpas           #+#    #+#             */
/*   Updated: 2018/05/17 17:10:43 by akurpas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/extra_function.h"

t_vec3	vec3_scale(t_vec3 vector, double scale)
{
	vec3_normalize(&vector);
	vector.x *= scale;
	vector.y *= scale;
	vector.z *= scale;
	return (vector);
}
