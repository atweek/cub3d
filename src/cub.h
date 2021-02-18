/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atweek <atweek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 19:32:06 by atweek            #+#    #+#             */
/*   Updated: 2021/02/16 22:36:48 by atweek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>
# include <fcntl.h>
# include <stdio.h>
# include "../gnl/get_next_line.h"

// typedef struct		s_list
// {
// 	void			*content;
// 	struct s_list	*next;
// }					t_list;

typedef struct		s_cub
{
	void	*mlx;
	void	*mlx_win;
}					t_cub;

int		write_square(int x, int y,t_cub *st_cub,int color);


#endif
