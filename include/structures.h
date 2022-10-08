/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structures.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 03:36:31 by psegura-          #+#    #+#             */
/*   Updated: 2022/10/08 18:42:46 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTURES_H
# define STRUCTURES_H

typedef struct s_data {
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}	t_data;

//Map & data map
typedef struct s_map {	
	char	**matrix;
	int		wide;
	int		height;
}	t_map;

//Map requiriments
typedef struct s_requiriments {
	int		wide;
	int		height;
	int		EMPTY_CHAR_COUNT;
	int		WALL_CHAR_COUNT;
	int		COLLECTIBLE_CHAR_COUNT;
	int		EXIT_CHAR_COUNT;
	int		PLAYER_CHAR_COUNT;
}	t_requiriments;

//Meta
typedef struct s_meta {
	void	*mlx;
	void	*mlx_win;
	int		img_w;
	int		img_h;
	int		x;
	int		y;
	int		win_w;
	int		win_h;
}	t_meta;

//Sprites

#endif
