/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_vec2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurpas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 17:06:24 by akurpas           #+#    #+#             */
/*   Updated: 2018/05/17 17:06:25 by akurpas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/extra_function.h"

t_vec2	create_vec2(double x, double y)
{
	t_vec2i vector;

	vector.x = x;
	vector.y = y;
	return (vector);
}
