/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_vec2i.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurpas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 17:07:02 by akurpas           #+#    #+#             */
/*   Updated: 2018/05/17 17:07:03 by akurpas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/extra_function.h"

t_vec2i	create_vec2i(int x, int y)
{
	t_vec2i vector;

	vector.x = x;
	vector.y = y;
	return (vector);
}
