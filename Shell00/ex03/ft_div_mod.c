/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaobarb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 14:45:55 by joaobarb          #+#    #+#             */
/*   Updated: 2025/02/25 16:32:52 by joaobarb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int a = 10;
	int b = 5;
	int div;
	int mod;
	ft_div_mod(a, b, &div, &mod);
	printf("a div b: %d\na mod b: %d", div, mod);
	return(0);
}*/
