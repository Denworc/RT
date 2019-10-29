/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_reflect.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurpas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 17:10:12 by akurpas           #+#    #+#             */
/*   Updated: 2018/05/17 17:10:14 by akurpas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/extra_function.h"

t_vec3	vec3_reflect(t_vec3 vector, t_vec3 norm)
{
	t_vec3 reflect;

	reflect = vec3_fmult(norm, -2.0 * vec3_dot(vector, norm));
	reflect = vec3_add(reflect, vector);
	return (reflect);
}
