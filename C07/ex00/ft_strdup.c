/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaobarb <joaobarb@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 09:37:40 by joaobarb          #+#    #+#             */
/*   Updated: 2025/03/13 11:43:52 by joaobarb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*dup;

	i = 0;
	len = ft_strlen(src);
	dup = (char *)malloc(len + 1 * sizeof(char));
	if (!dup)
		return (NULL);
	while (src[i] != '\0')
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

/* int	main(int argc, char *argv[])
{
	char *dup;

	if (argc > 1)
	{
		dup = ft_strdup(argv[1]);
		if (dup)
			printf("%s", dup);
		free(dup);
	}
	dup = (char *)malloc(1 * sizeof(char));
	if (!dup)
		return (0);
	dup[0] = '0';
	free(dup);
	return (0);
} */
