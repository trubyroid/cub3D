/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_struct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truby <truby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 22:30:46 by truby             #+#    #+#             */
/*   Updated: 2021/04/01 19:03:38 by truby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub.h"

void init_struct(t_data *data)
{
	data->param.ea = NULL;
	data->param.we = NULL;
	data->param.no = NULL;
	data->param.so = NULL;
	data->param.sp = NULL;
	data->param.mapline = NULL;
	data->param.map = NULL;
	data->param.ry = 0;
	data->param.rx = 0;
	data->param.f_color = 0;
	data->param.c_color = 0;
	data->param.i = 1;
	data->param.screen = 0;
	data->param.fl_player = 0;
	data->param.map_width = 0;
	data->param.map_height = 0;
	data->param.qua_sprite = 0;
	data->param.player_x = 0;
	data->param.player_y = 0;
	data->param.viewx = 0;
	data->param.viewy = 0;
	data->param.plane_x = 0.66;
	data->param.plane_y = 0;
	data->img.bits_per_pixel = 0;
	data->img.endian = 0;
	data->img.line_length = 0;
	data->img.addr = NULL;
	data->key.camleft = 0;
	data->key.camright = 0;
	data->key.up = 0;
	data->key.down = 0;
	data->key.left = 0;
	data->key.right = 0;
	data->txtr[0].bpp = 0;
	data->txtr[0].img_h = 0;
	data->txtr[0].img_w = 0;
	data->txtr[0].len = 0;
	data->txtr[0].end = 0;
	data->txtr[1].bpp = 0;
	data->txtr[1].img_h = 0;
	data->txtr[1].img_w = 0;
	data->txtr[1].len = 0;
	data->txtr[1].end = 0;
	data->txtr[2].bpp = 0;
	data->txtr[2].img_h = 0;
	data->txtr[2].img_w = 0;
	data->txtr[2].len = 0;
	data->txtr[2].end = 0;
	data->txtr[3].bpp = 0;
	data->txtr[3].img_h = 0;
	data->txtr[3].img_w = 0;
	data->txtr[3].len = 0;
	data->txtr[3].end = 0;
	data->txtr[4].bpp = 0;
	data->txtr[4].img_h = 0;
	data->txtr[4].img_w = 0;
	data->txtr[4].len = 0;
	data->txtr[4].end = 0;
}