/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush0rulenplus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlroqu <carlroqu@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 20:44:12 by carlroqu          #+#    #+#             */
/*   Updated: 2026/08/17 20:46:26 by carlroqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rule_n_plus(int **grid, int *up, int *down, int n)
{
	int	i;
	int	l;
	int	r;

	i = 0;
	while (i < n)
	{
		l = up[i];
		r = down[i];
		if (l + r == n + 1)
			grid[l - 1][i] = n;
		i++;
	}
}

void	rule_n_plus2(int **grid, int *left, int *right, int n)
{
	int	i;
	int	l;
	int	r;

	i = 0;
	while (i < n)
	{
		l = left[i];
		r = right[i];
		if (l + r == n + 1)
			grid[l - 1][i] = n;
		i++;
	}
}
