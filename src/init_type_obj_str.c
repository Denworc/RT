/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_type_obj_str.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurpas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 17:32:19 by akurpas           #+#    #+#             */
/*   Updated: 2018/05/17 17:32:21 by akurpas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/rt.h"

t_type_obj_str	g_typeobj_str[13] =
{
	{ SPHERE, "SPHERE" },
	{ CONE, "CONE" },
	{ PLANE, "PLANE" },
	{ CYLINDER, "CYLINDER" },
	{ CHEWINGGUM, "CHEWINGGUM" },
	{ CUBE_HOLE, "CUBE_HOLE" },
	{ HYPERBOLOID, "HYPERBOLOID" },
	{ PARABOLOID, "PARABOLOID" },
	{ TORUS, "TORUS" },
	{ MOEBIUS, "MOEBIUS" },
	{ DISC, "DISC" },
	{ SELLE, "SELLE" },
	{ -1, NULL }
};
