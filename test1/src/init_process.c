/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_process.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarasso <akarasso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 12:55:57 by akarasso          #+#    #+#             */
/*   Updated: 2018/07/19 13:49:24 by akarasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "process.h"

int		init_process(t_board *board)
{
	unsigned int	i;
	unsigned int	pc;
	t_proccess		*proc;

	i = 0;
	pc = 0;
	while (i < board->nb_player)
	{
		if (!(proc = add_proccess(board->lst_process, i, pc)))
			return (0);
		pc += MEM_SIZE / board->nb_player;
		i++;
	}
	return (1);
}