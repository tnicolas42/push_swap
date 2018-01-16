/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 11:14:58 by tnicolas          #+#    #+#             */
/*   Updated: 2018/01/15 19:54:35 by tnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**   ____________________________________________________________
**   | main_swap.c                                              |
**   |     main(9 lines)                                        |
**   ------------------------------------------------------------
**           __n__n__  /
**    .------`-\00/-'/
**   /  ##  ## (oo)
**  / \## __   ./
**     |//YY \|/
**     |||   |||
*/

#include <push_swap.h>

int			main(int ac, char **av)
{
	t_a		a;

	if (ac > 2)
	{
		ft_create_stack(&a, ac - 1, av + 1);
		ft_resolve_swap(&a);
		ft_close_swap(&a);
	}
	return (0);
}
