/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaobarb <joaobarb@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 14:36:56 by joaobarb          #+#    #+#             */
/*   Updated: 2025/03/06 14:37:14 by joaobarb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	fac;
	int	i;

	fac = 1;
	i = 1;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (i <= nb)
	{
		fac = fac * i;
		i++;
	}
	return (fac);
}

/*int	main(void)
{
	int	nb = 5;
	printf("Factorial of %d is %d", nb, ft_iterative_factorial(nb));
	return (0);
}*/
