/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaobarb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 13:41:49 by joaobarb          #+#    #+#             */
/*   Updated: 2025/02/25 15:15:38 by joaobarb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*int	main(void)
{
	int ia = 42;
	int ib = 15;
	int *a = &ia;
	int *b = &ib;
	printf("Value \"a\":%d\nValue \"b\":%d\n", *a, *b);
	ft_swap(a, b);
	printf("Swapped value \"a\":%d\nSwapped value \"b\":%d", *a, *b);
}*/
