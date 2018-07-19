/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarasso <akarasso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 13:06:53 by adhondt           #+#    #+#             */
/*   Updated: 2018/07/19 12:55:29 by akarasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/corewar.h"

int	main(int argc, char **argv)
{
    t_board  *board;

    if (argc != 3)
    {
        ft_putstr("Need 3 args\n");
        exit (0);
    };
    board = init_board_data(board, argv);
    insert_instructions(board);
    execute_war(board);
    return (0);
}
