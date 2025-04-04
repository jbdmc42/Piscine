/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaobarb <joaobarb@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 09:47:15 by joaobarb          #+#    #+#             */
/*   Updated: 2025/03/13 11:36:08 by joaobarb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/* #include <stdio.h> */

int	ft_seplen(char *str)
{
	int	j;

	j = 0;
	while (str[j] != '\0')
		j++;
	return (j);
}

char	*ft_strcat(char **strs, char *sep, int size, char *fs)
{
	int	s;
	int	f;
	int	i;

	i = 0;
	f = 0;
	while (i < size)
	{
		s = 0;
		while (strs[i][s] != '\0')
			fs[f++] = strs[i][s++];
		s = 0;
		while (i < (size - 1) && s < ft_seplen(sep))
			fs[f++] = sep[s++];
		i++;
	}
	fs[f] = '\0';
	return (fs);
}

int	ft_strlen(char **strs, int i)
{
	int	j;

	j = 0;
	while (strs[i][j] != '\0')
		j++;
	return (j);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		tl;
	char	*fs;

	fs = NULL;
	i = 0;
	tl = 0;
	if (size == 0)
	{
		fs = (char *)malloc(1 * sizeof(char));
		return (fs);
	}
	while (i < size)
	{
		tl += ft_strlen(strs, i);
		i++;
	}
	tl += (ft_seplen(sep) * (size - 1));
	fs = (char *)malloc((tl + 1) * sizeof(char));
	if (!fs)
		return (0);
	fs = ft_strcat(strs, sep, size, fs);
	return (fs);
}

/* int	main(int argc, char *argv[])
{
	char	*sep;
	int		size;

	sep = "-----";
	size = argc - 1;
	if (argc > 2)
	{
		printf("%s", ft_strjoin(size, argv + 1, sep));
	}
	return (0);
} */
