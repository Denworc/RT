/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_min_max.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurpas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 17:09:33 by akurpas           #+#    #+#             */
/*   Updated: 2018/05/17 17:09:34 by akurpas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/extra_function.h"

void	vec3_clamp(t_vec3 *vector, double min, double max)
{
	vector->x > max ? vector->x = max : 0;
	vector->y > max ? vector->y = max : 0;
	vector->z > max ? vector->z = max : 0;
	vector->x < min ? vector->x = min : 0;
	vector->y < min ? vector->y = min : 0;
	vector->z < min ? vector->z = min : 0;
}
