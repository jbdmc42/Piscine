/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaobarb <joaobarb@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 15:06:30 by joaobarb          #+#    #+#             */
/*   Updated: 2025/03/07 11:10:29 by joaobarb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	j;

	j = 0;
	if (argc > 0)
	{
		while (argv[0][j] != '\0')
		{
			write(1, &argv[0][j], 1);
			j++;
		}
		write(1, "\n", 1);
		return (0);
	}
	return (0);
}
