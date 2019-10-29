/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaksymy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 14:11:27 by smaksymy          #+#    #+#             */
/*   Updated: 2018/05/17 14:11:28 by smaksymy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rt.h"

void	draw(t_env *env)
{
	int result;

	result = start_raytracing(env, env->cam);
	(result != 1) ? close_rt("ERROR: start_raytracing") : 0;
}
