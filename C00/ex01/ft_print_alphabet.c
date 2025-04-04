/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaobarb <joaobarb@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 13:08:39 by joaobarb          #+#    #+#             */
/*   Updated: 2025/02/21 13:52:32 by joaobarb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	c;

	c = 97;
	while (c < 123)
	{
		write(1, &c, 1);
		c++;
	}
}

/*int	main()
{
	ft_print_alphabet();
}*/
