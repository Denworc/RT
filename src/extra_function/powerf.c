/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   powerf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurpas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 17:07:51 by akurpas           #+#    #+#             */
/*   Updated: 2018/05/17 17:07:52 by akurpas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/extra_function.h"

double	power(double nb, int expo)
{
	double result;

	result = 1;
	while (expo > 0)
	{
		result = result * nb;
		expo--;
	}
	while (expo < 0)
	{
		result = result / nb;
		expo++;
	}
	return (result);
}
