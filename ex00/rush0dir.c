/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush0dir.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlroqu <carlroqu@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 20:24:39 by carlroqu          #+#    #+#             */
/*   Updated: 2026/08/17 20:33:09 by carlroqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	**dir(int n)
{
	int	j;
	int	**g;

	**g = malloc(4 * sizeof(int *));
	j = 0;
	while (j < 4)
	{
		g[j] = malloc(n * sizeof(int));
		j++;
	}
	return (g);
}

int	**dirsplit(char *a, int n)
{
	int	i;
	int	**g;

	**g = dir(n);
	i = 0;
	while (i < n)
	{
		g[0][i] = a[i] - '0';
		g[1][i] = a[n + i] - '0';
		g[2][i] = a[2 * n + i] - '0';
		g[3][i] = a[3 * n + i] - '0';
	}
	return (g);
}
