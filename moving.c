/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moving.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truby <truby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 19:08:47 by truby             #+#    #+#             */
/*   Updated: 2021/04/12 16:41:25 by truby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub.h"

void	moving(t_data *d)
{
	d->l.frametime = (d->l.time - d->l.oldtime) / 1000.0;
	d->l.movespeed = d->l.frametime * 5.0;
	d->l.rotspeed = d->l.frametime * 1.5;
	if (d->k.up)
		move_forward(d);
	if (d->k.down)
		move_backward(d);
	if (d->k.right)
		move_right(d);
	if (d->k.left)
		move_left(d);
	if (d->k.camleft)
		turn_left(d);
	if (d->k.camright)
		turn_right(d);
}
