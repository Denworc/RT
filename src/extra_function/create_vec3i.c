/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_vec3i.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurpas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 17:06:47 by akurpas           #+#    #+#             */
/*   Updated: 2018/05/17 17:06:48 by akurpas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/extra_function.h"

t_vec3i	create_vec3i(int x, int y, int z)
{
	t_vec3i vector;

	vector.x = x;
	vector.y = y;
	vector.z = z;
	return (vector);
}
