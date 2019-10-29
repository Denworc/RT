/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_convert.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurpas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 17:08:44 by akurpas           #+#    #+#             */
/*   Updated: 2018/05/17 17:08:45 by akurpas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/extra_function.h"

t_vec3i	vec3_convert(t_vec3 vec3)
{
	t_vec3i vector;

	vector.x = (int)vec3.x;
	vector.y = (int)vec3.y;
	vector.z = (int)vec3.z;
	return (vector);
}
