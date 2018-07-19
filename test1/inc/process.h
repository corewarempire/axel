/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarasso <akarasso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 11:58:30 by akarasso          #+#    #+#             */
/*   Updated: 2018/07/19 15:53:42 by akarasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROCESS_H
# define PROCESS_H

typedef struct	s_proccess
{
	int				r[REG_NUMBER];
	int				id;
	int				id_player;
	int				carry;
	int				life;
	unsigned int	pc;
}				t_proccess;

typedef struct	s_lst_process
{
	t_proccess_h	*proccess;
	int				len;
}				t_lst_process;

typedef struct	s_opt
{
	int			op_code;
	int			octal_port;
}				t_opt;

#endif
