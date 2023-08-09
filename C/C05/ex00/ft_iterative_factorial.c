/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkim2 <gkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 04:07:32 by gkim2             #+#    #+#             */
/*   Updated: 2023/08/10 04:07:39 by gkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	sum;
	int	i;

	sum = 1;
	i = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		sum *= i;
		i++;
	}
	return (sum);
}
