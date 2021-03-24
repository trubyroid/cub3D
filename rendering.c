/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rendering.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truby <truby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 22:51:33 by truby             #+#    #+#             */
/*   Updated: 2021/03/24 21:07:22 by truby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub.h"

int render(t_data *data)
{
	// if (data->param.screen)
	// 	save_screen(data); // проверка разрешения перед скриншотом
	data->img.img = mlx_new_image(data->img.win, data->param.rx, data->param.ry);
	data->img.addr = mlx_get_data_addr(data->img.img, &data->img.bits_per_pixel, &data->img.line_length, &data->img.endian);
	draw_floor_ceiling(data, -1, -1);
	draw_texture(data); // отрисовка стен
	// if (data->param.qua_sprite) // проверка на наличие спрайтов
	// {
	// 	sort_spr(data); // сортировка срайтов
	// 	draw_sprite(data); // отрисовка спрайтов
	// }
	// if (data->param.screen)
	// 	screenshot(data); // сам скриншот
	// else
	mlx_put_image_to_window(data->img.mlx, data->img.win, data->img.img, 0, 0);
	mlx_destroy_image(data->img.mlx, data->img.img);
	data->img.img = NULL;
	return(0);
}