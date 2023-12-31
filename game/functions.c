/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:49:33 by ogdurkan          #+#    #+#             */
/*   Updated: 2023/07/13 12:47:43 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	*get_image(t_environment env, char *path)
{
	int	width;
	int	height;

	return (mlx_xpm_file_to_image(env.ptrs.mlx, path, &width, &height));
}

void	put_image(t_environment env, void *img, t_point point)
{
	void	*mlx;
	void	*win;

	mlx = env.ptrs.mlx;
	win = env.ptrs.win;
	point.x *= 32;
	point.y *= 32;
	mlx_put_image_to_window(mlx, win, img, point.x, point.y);
}

void	*new_window(t_environment env, char *name)
{
	void	*mlx;
	t_point	size;

	size.x = env.map.size.x * 32;
	size.y = env.map.size.y * 32;
	mlx = env.ptrs.mlx;
	return (mlx_new_window(mlx, size.x, size.y, name));
}
