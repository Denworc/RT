/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_norm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurpas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 17:09:53 by akurpas           #+#    #+#             */
/*   Updated: 2018/05/17 17:09:54 by akurpas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/extra_function.h"

t_vec3	vec3_norm(t_vec3 vector)
{
	t_vec3		normal;
	double		len;

	len = (sqrt(vector.x * vector.x + vector.y *
				vector.y + vector.z * vector.z));
	if (len != 0)
	{
		len = 1.0f / len;
		normal.x = vector.x * len;
		normal.y = vector.y * len;
		normal.z = vector.z * len;
	}
	return (normal);
}
