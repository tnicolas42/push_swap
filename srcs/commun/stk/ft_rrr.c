/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 17:56:36 by tnicolas          #+#    #+#             */
/*   Updated: 2018/01/15 19:54:36 by tnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**   ____________________________________________________________
**   | ft_rrr.c                                                 |
**   |     ft_rra(12 lines)                                     |
**   |     ft_rrb(12 lines)                                     |
**   |     ft_rrr(4 lines)                                      |
**   ------------------------------------------------------------
**           __n__n__  /
**    .------`-\00/-'/
**   /  ##  ## (oo)
**  / \## __   ./
**     |//YY \|/
**     |||   |||
*/

#include <push_swap.h>

void		ft_rra(t_a *a, int print)
{
	t_stk	*stk;

	if (a->stk_a == NULL || a->stk_a->next == NULL)
		return ;
	stk = a->stk_a;
	while (stk->next->next)
		stk = stk->next;
	stk->next->next = a->stk_a;
	a->stk_a = stk->next;
	stk->next = NULL;
	if (print)
		ft_printf(RRA"\n");
}

void		ft_rrb(t_a *a, int print)
{
	t_stk	*stk;

	if (a->stk_b == NULL || a->stk_b->next == NULL)
		return ;
	stk = a->stk_b;
	while (stk->next->next)
		stk = stk->next;
	stk->next->next = a->stk_b;
	a->stk_b = stk->next;
	stk->next = NULL;
	if (print)
		ft_printf(RRB"\n");
}

void		ft_rrr(t_a *a, int print)
{
	ft_rra(a, 0);
	ft_rrb(a, 0);
	if (print)
		ft_printf(RRR"\n");
}
