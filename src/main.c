/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurpas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 18:15:01 by akurpas           #+#    #+#             */
/*   Updated: 2018/05/17 18:15:02 by akurpas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/rt.h"

void	close_rt(char *str)
{
	ft_putendl(str);
	exit(0);
}

void	display_argc(void)
{
	close_rt("usage: ./RT scene/scene_name");
}

int		main(int argc, char *argv[])
{
	t_env env;

	(argc < 2) ? display_argc() : 0;
	(argc == 2) ? init_file(&env, argv[1]) : display_argc();
	init_default_param(&env);
	init_intersection(&env);
	init_normal(&env);
	parse_scene(&env);
	draw(&env);
	init_hook(&env);
	close_rt("Close RT SUCCESS");
	return (0);
}
