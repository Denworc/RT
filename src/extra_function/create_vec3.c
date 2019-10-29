/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_vec3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurpas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 17:06:36 by akurpas           #+#    #+#             */
/*   Updated: 2018/05/17 17:06:40 by akurpas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/extra_function.h"

t_vec3	create_vec3(double x, double y, double z)
{
	t_vec3 vector;

	vector.x = x;
	vector.y = y;
	vector.z = z;
	return (vector);
}
