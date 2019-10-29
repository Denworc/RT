/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_fmult.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurpas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 17:09:07 by akurpas           #+#    #+#             */
/*   Updated: 2018/05/17 17:09:08 by akurpas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/extra_function.h"

t_vec3	vec3_fmult(t_vec3 vector1, double arg)
{
	t_vec3 vector;

	vector.x = vector1.x * arg;
	vector.y = vector1.y * arg;
	vector.z = vector1.z * arg;
	return (vector);
}
