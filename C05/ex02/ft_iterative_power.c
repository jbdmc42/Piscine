/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaobarb <joaobarb@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 21:44:04 by joaobarb          #+#    #+#             */
/*   Updated: 2025/03/09 21:47:56 by joaobarb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_iterative_power(int nb, int power)
{
	int	pow;

	pow = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		pow = pow * nb;
		power--;
	}
	return (pow);
}
/*
int	main(void)
{
	int	nb = 1;
	int power = 3;
	printf("%d to the power of %d is %d", nb, power, 
	ft_iterative_power(nb, power));
	return (0);
}*/
