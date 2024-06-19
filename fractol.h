/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stak <stak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 11:39:24 by stak              #+#    #+#             */
/*   Updated: 2024/06/19 15:41:05 by stak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include "libft/libft.h"
# include "ft_printf.h"
# include "mlx.h"
# include <math.h>
# include <pthread.h>
# define WIDTH 800
# define HEIGHT 800

typedef struct s_complex
{git 
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
