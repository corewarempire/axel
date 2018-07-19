/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarasso <akarasso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 11:57:56 by akarasso          #+#    #+#             */
/*   Updated: 2018/07/19 13:52:38 by akarasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "process.h"

t_lst_process	*init_list_process(void)
{
	t_lst_process *lst;

	if (!(lst = (t_lst_process)malloc(sizeof(t_lst_process))))
		return (0);
	lst->proccess = 0;
	lst->len = 0;
	return (lst);
}

t_proccess		*new_proccess(unsigned int r1, unsigned int pc)
{
	t_proccess *new;

	if (!(new = (t_proccess*)malloc(sizeof(t_proccess))))
		return (0);
	new->pc = pc;
	new->r[0] = r1;
	new->id_player = r1;
	return (new);
}

t_proccess		*add_proccess(t_lst_process *lst, unsigned int r1, unsigned int pc)
{
	t_proccess	*proccess;

	proccess = lst->proccess;
	if (proccess)
	{
		while (proccess->next)
			proccess = proccess->next;
		if (!(process->next = new_proccess(r1, pc)))
			return (0);
		lst->len++;
		return (proccess->next);
	}
	else
	{
		lst->process = new_proccess(r1, pc);
		lst->len++;
		return (lst->process);
	}
}
