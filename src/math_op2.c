/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math_op2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurpas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 18:16:58 by akurpas           #+#    #+#             */
/*   Updated: 2018/05/17 18:17:00 by akurpas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/rt.h"

int			solve_linear(double a, double b, double *r)
{
	if (a == 0.)
		return (0);
	else
	{
		*r = -b / a;
		return (1);
	}
}

void		fill_roots(double *a, double d, double *r)
{
	double sgnb;
	double temp;
	double r1;
	double r2;

	sgnb = (a[1] > 0 ? 1 : -1);
	temp = -0.5 * (a[1] + sgnb * sqrt(d));
	r1 = temp / a[2];
	r2 = a[0] / temp;
	if (r1 < r2)
	{
		r[0] = r1;
		r[1] = r2;
	}
	else
	{
		r[0] = r2;
		r[1] = r1;
	}
}

int			solve_quadratic(double *a, double *r)
{
	double	d;
	double	s;

	d = a[1] * a[1] - 4 * a[2] * a[0];
	if (a[2] == 0.)
		return (solve_linear(a[1], a[0], &r[0]));
	if (d > 0)
	{
		if (a[1] == 0.)
		{
			s = fabs(0.5 * sqrt(d) / a[0]);
			*r = -s;
			r[1] = s;
		}
		else
			fill_roots(a, d, r);
		return (2);
	}
	else if (d == 0.)
	{
		r[0] = -0.5 * a[1] / a[2];
		r[1] = r[0];
		return (2);
	}
	return (0);
}

t_math_cube	math_coef(double *a)
{
	t_math_cube	result;

	result.q = a[2] * a[2] - 3 * a[1];
	result.r = 2 * a[2] * a[2] * a[2] - 9 * a[2] * a[1] + 27 * a[0];
	result.bq = result.q / 9;
	result.br = result.r / 54;
	result.bq3 = result.bq * result.bq * result.bq;
	result.br2 = result.br * result.br;
	result.cr2 = 729 * result.r * result.r;
	result.cq3 = 2916 * result.q * result.q * result.q;
	result.sgnbr = result.br >= 0 ? 1 : -1;
	result.index = 0;
	return (result);
}
