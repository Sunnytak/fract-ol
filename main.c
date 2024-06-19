/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stak <stak@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 11:33:48 by stak              #+#    #+#             */
/*   Updated: 2024/06/17 12:04:27 by stak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	main(int argc, char **argv)
{
	t_fractal	fractal;

	if (check_fractal(argc, argv, &fractal) == 0)
		return (EXIT_FAILURE);
	init_maldelbrot(&fractal);
	fractal_render(&fractal);
	mlx_key_hook(fractal.mlx_connection,&my_keyhook, &fractal);
}