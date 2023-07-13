/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   events.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:48:46 by ogdurkan          #+#    #+#             */
/*   Updated: 2023/07/13 12:09:48 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	exit_event(t_environment *env)
{
	mlx_destroy_window(env->ptrs.mlx, env->ptrs.win);
	free(env->map.map);
	free(env->map.spaces);
	free(env->map.walls);
	free(env->map.collectibles);
	exit(1);
	return (0);
}

int	keypress_event(int key, t_environment *environment)
{
	t_environment	env;

	env = *environment;
	if (key == ESC)
		exit_event(&env);
	else if (key == W)
		env = move_up(env);
	else if (key == A)
		env = move_left(env);
	else if (key == S)
		env = move_down(env);
	else if (key == D)
		env = move_right(env);
	else
		return (0);
	if (env.map.map[env.map.player.y][env.map.player.x] != WALL)
	{
		env = moved(env);
		*environment = env;
	}
	return (0);
}
