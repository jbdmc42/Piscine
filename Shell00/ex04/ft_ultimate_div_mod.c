/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaobarb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 15:54:56 by joaobarb          #+#    #+#             */
/*   Updated: 2025/02/25 16:31:56 by joaobarb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*int	main(void)
{
	int a = 10;
	int b = 5;
	printf("a Value: %d\nb Value: %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("a div Value: %d\nb mod Value: %d", a, b);
	return(0);
}*/
