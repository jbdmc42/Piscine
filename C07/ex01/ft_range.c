/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaobarb <joaobarb@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 09:37:49 by joaobarb          #+#    #+#             */
/*   Updated: 2025/03/13 11:50:33 by joaobarb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	if (min >= max)
		return (NULL);
	range = (int *)malloc((max - min) * sizeof(int));
	if (!range)
		return (NULL);
	i = 0;
	while (i < (max - min))
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}

/* int	ft_atoi(char *str)
{
	int	i;
	int	res;
	int	val;

	i = 0;
	res = 0;
	val = 1;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			val = -val;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = str[i] - '0' + res * 10;
		i++;
	}
	return (res * val);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;
	int	arr[2];
	int	*arr2;

	i = 1;
	j = 0;
	if (argc == 3)
	{
		while (i < argc)
		{
			arr[j] = ft_atoi(argv[i]);
			i++;
			j++;
		}
		arr2 = ft_range(arr[0], arr[1]);
		if (arr2)
		{
			i = 0;
			while (i < (arr[1] - arr[0]))
			{
				printf("%d ", arr2[i]);
				i++;
			}
			printf("\n");
			free(arr2);
		}
	}
	return (0);
} */
