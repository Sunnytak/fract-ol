/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stak <stak@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 11:39:24 by stak              #+#    #+#             */
/*   Updated: 2024/06/14 14:57:08 by stak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include "libft/libft.h"
# include "ft_printf.h"
# include "mlx/mlx.h"
# include <math.h>
# include <pthread.h>


typedef struct s_fractal
{
	char			*name;
	mlx_t			*mlx_connection;
	void			*mlx_new_window;
	mlx_image_t		*img;
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
