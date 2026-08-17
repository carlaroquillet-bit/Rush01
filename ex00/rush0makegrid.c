/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush0makegrid.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlroqu <carlroqu@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 20:38:33 by carlroqu          #+#    #+#             */
/*   Updated: 2026/08/17 20:38:39 by carlroqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	**grid(int n)
{
	int	**g;
	int	i;	
	int	j;

	i = 0;
	g = malloc(n * sizeof(int *));
	while (i < 0)
	{
		g[i] = malloc(n * sizeof(int));
		j = 0;
		while (j < n)
		{
			g[i][j] = 0;
			j++;
		}
		i++;
	}
	return (g);
}
