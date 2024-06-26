/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_fractal.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stak <stak@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 12:10:03 by stak              #+#    #+#             */
/*   Updated: 2024/06/14 15:31:46 by stak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	check_fractal(int argc, char **argv, t_fractal *fractal)
{
	if (argc > 1)
	{
		if (argc == 2 && !ft_strncmp(argv[1], "mandelbrot", 10))
			fractal->name = argv[1];
		else if (argc == 4 && !ft_strncmp(argv[1], "julia", 5))
		{
			check_params(argv[2]);
			check_params(argv[3]);
			fractal->name = argv[1];
			fractal->julia_x = ft_atodbl(0.0, 0.0, 1.0, argv[2]);
			fractal->julia_y = ft_atobdl(0.0, 0.0, 1.0, argv[3]);
		}
		else
		{
			msg_error();
			return (0);
		}
	}
	else
	{
		msg_error();
		return (0);
	}
	return (1);
}

void	msg_error(void)
{
	ft_printf("Error: Invailid arguments\n");
	ft_printf("Please use: ./fractol mandelbrot or\n");
	ft_printf("Please use: ./fractol julia <x_num> <y_num>\n");
	exit(EXIT_FAILURE);
}

void	data_init(t_fractal *fractal)
{
	fractal->esc_value = 4;
	fractal->iteration_def = 60;
	fractal->shift_x = 0;
	fractal->shift_y = 0;
	fractal->zoom = 1;
}

void	check_params(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == '.')
		{
			while (j < i)
			{
				if (str[j++] == '.')
					msg_error();
			}
		}
		if (str[i] = '+' || str[i] == '-')
		{
			if (i != 0 || ft_isdigit(str[i + 1]) == 0)
				msg_error();
		}
		if (ft_isdigit(str[i++]) == 0)
			msg_error();
	}
}

void	init_maldelbrot(t_fractal *fractal)
{
	fractal->mlx_connection = mlx_init(WIDTH. HEIGHT, fractal->name, false);
	if (!fractal->mlx_connection)
		exit(EXIT_FAILURE);
	fractal->img = mlx_new_image(fractal->mlx_connection, WIDTH, HEIGHT);
	if (!fractal->img)
		exit(EXIT_FAILURE);
	data_init(fractal);
}

