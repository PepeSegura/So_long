/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movement.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:08:31 by psegura-          #+#    #+#             */
/*   Updated: 2022/11/09 02:35:04 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_move(t_cosas *c, int x, int y)
{
	if (c->map.matrix[c->p.y + y][c->p.x + x] == EMPTY_CHAR
		|| c->map.matrix[c->p.y + y][c->p.x + x] == COLLECTIBLE_CHAR)
	{
		if (c->map.matrix[c->p.y + y][c->p.x + x] == COLLECTIBLE_CHAR)
			c->map.reqs.c_count--;
		c->map.matrix[c->p.y][c->p.x] = EMPTY_CHAR;
		c->map.matrix[c->p.y + y][c->p.x + x] = PLAYER_CHAR;
		c->p.y += y;
		c->p.x += x;
	}
	ft_draw_background(&c->map, &c->xpm, &c->meta);
	ft_draw_game(&c->map, &c->xpm, &c->meta);
	if (c->map.reqs.c_count == 0
		&& c->map.matrix[c->p.y + y][c->p.x + x] == EXIT_CHAR)
		exit(EXIT_SUCCESS);
}
