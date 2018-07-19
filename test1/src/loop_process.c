/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loop_process.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarasso <akarasso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 13:53:09 by akarasso          #+#    #+#             */
/*   Updated: 2018/07/19 15:23:24 by akarasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "process.h"

void	loop_process(t_board *board)
{
	t_proccess *proc;

	write(1, "START\n", 6);
	proc = board->lst_proccess->process;
	while (board->lst_proccess->len)
	{
		if (parse_opt(board->map[proc->pc]))
		{
			
		}
		proc = (proc->next) ? proc->next : board->lst_proccess->process;
	}
	write(1, "END\n", 4);
}