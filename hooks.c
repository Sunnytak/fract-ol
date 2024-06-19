/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hooks.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stak <stak@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 12:05:06 by stak              #+#    #+#             */
/*   Updated: 2024/06/17 12:36:13 by stak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	my_keyhook(mlx_key_data_t key_data, void *param)
{
	t_fractal	*fractal;

	fractal = param;
	(void)key_data;
	if (mlxx_is_key_down(fractal->mlx_connection, MLX_KEY_ESCAPE))
		mlx_close_window(fractal->mlx_connection);
	else if (mlx_is_key_down(fractal->mlx_connection, MLX_KEY_KP_ADD))
		fractal->iteration_def += 10;
	else if (mlx_is_key_down(fractal->mlx_connection, MLX_KEY_KP_SUBTRACT))
		fractal->iteration_def -= 10;
	fractal_render(fractal);
}

