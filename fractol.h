/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stak <stak@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 11:39:24 by stak              #+#    #+#             */
/*   Updated: 2024/06/17 12:31:53 by stak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include "libft/libft.h"
# include "ft_printf.h"
# include "MLX/include/MLX42/MLX42.h"
# include <math.h>
# include <pthread.h>
# define WIDTH 800
# define HEIGHT 800

typedef struct s_complex
{
	double	real;
	double	ima;
}	t_complex;


typedef struct s_fractal
{
	char			*name;
	void			*mlx_connection;
	void			*mlx_new_window;
	void			*img;
	void			*colors;
	double			esc_value;
	int				iteration_def;
	double			shift_x;
	double			shift_y;
	double			julia_x;
	double			julia_y;
	double			zoom;
	double			x;
	double			y;
}	t_fractal;



#endif
