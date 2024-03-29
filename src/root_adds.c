/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   root_adds.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurpas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 18:17:42 by akurpas           #+#    #+#             */
/*   Updated: 2018/05/17 18:17:43 by akurpas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/rt.h"

int		swapd(double *a, double *b)
{
	double	tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
	return (1);
}

void	pull_vec(double *u, double u0, double u1, double u2)
{
	u[0] = u0;
	u[1] = u1;
	u[2] = u2;
}

int		undone_opp(double *a, double *r)
{
	if (a[0] == 0.)
	{
		r[0] = 0;
		r[1] = r[0];
		r[2] = r[1];
		r[3] = r[2];
		if (a[3] > 0)
			r[0] = -a[3];
		else
			r[3] = -a[3];
		return (4);
	}
	else
	{
		if (a[0] > 0)
			return (0);
		else
		{
			r[1] = sqrt(sqrt(-a[0]));
			r[0] = -r[1];
			return (2);
		}
	}
}

void	cubic_run_(t_math_quadro *q)
{
	q->sgnbr = (q->br >= 0 ? 1 : -1);
	q->modbr = fabs(q->br);
	q->sqrt_disc = sqrt(q->br2 - q->bq3);
	q->ba = -q->sgnbr * pow(q->modbr + q->sqrt_disc, 1.0 / 3.0);
	q->bb = q->bq / q->ba;
	q->mod_diffbabb = fabs(q->ba - q->bb);
	q->u[0] = q->ba + q->bb - q->rc / 3;
	q->u[1] = -0.5 * (q->ba + q->bb) - q->rc / 3;
	q->u[2] = -(sqrt(3.0) / 2.0) * q->mod_diffbabb;
}

void	cubic_run(t_math_quadro *q)
{
	if (0 == q->br && 0 == q->bq)
		pull_vec(q->u, -q->rc / 3, -q->rc / 3, -q->rc / 3);
	else if (q->cr2 == q->cq3)
	{
		q->sqrtbq = sqrt(q->bq);
		q->br > 0 ? pull_vec(q->u, -2 * q->sqrtbq - q->rc / 3,
			q->sqrtbq - q->rc / 3,
			q->sqrtbq - q->rc / 3) : pull_vec(q->u, -q->sqrtbq - q->rc / 3,
			-q->sqrtbq - q->rc / 3, 2 * q->sqrtbq - q->rc / 3);
	}
	else if (q->cr2 < q->cq3)
	{
		q->sqrtbq = sqrt(q->bq);
		q->sqrtbq3 = q->sqrtbq * q->sqrtbq * q->sqrtbq;
		q->theta = acos(q->br / q->sqrtbq3);
		if (q->br / q->sqrtbq3 >= 1.0)
			q->theta = 0.0;
		q->norm = -2 * q->sqrtbq;
		q->u[0] = q->norm * cos(q->theta / 3) - q->rc / 3;
		q->u[1] = q->norm * cos((q->theta + 2.0 * M_PI) / 3) - q->rc / 3;
		q->u[2] = q->norm * cos((q->theta - 2.0 * M_PI) / 3) - q->rc / 3;
	}
	else
		cubic_run_(q);
}
