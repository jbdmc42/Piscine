/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaobarb <joaobarb@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 09:42:19 by joaobarb          #+#    #+#             */
/*   Updated: 2025/03/07 09:58:57 by joaobarb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_sqrt(int nb)
{
	int	n;

	n = 1;
	if (nb <= 0)
	{
		return (0);
	}
	while ((n * n) <= nb)
	{
		if ((n * n) == nb)
			return (n);
		n++;
	}
	return (0);
}

/* int cal_res(char *str, int i, int res)
{
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = str[i] - '0' + res * 10;
		i++;
	}
	return (res);
}

int	atoi(char *str)
{
	int	res;
	int	i;

	res = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
			i++;
		if (str[i] == '-' && (str[i + 1] >= '0' && str[i + 1] <= '9'))
		{
			i++;
			res = cal_res(str, i, res);
			return (res * -1);
		}
		while (str[i] >= '0' && str[i] <= '9')
		{
			res = str[i] - '0' + res * 10;
			i++;
		}
		return (res);
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int i;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			printf("ATOI: %d\n", atoi(argv[i]));
			printf("SQRT: %d\n\n", ft_sqrt(atoi(argv[i])));
			i++;
		}
		return (0);
	}
	return (0);
} */