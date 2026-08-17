/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush0ruledirection.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlroqu <carlroqu@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 20:39:27 by carlroqu          #+#    #+#             */
/*   Updated: 2026/08/17 20:42:55 by carlroqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rule_up(int **grid, int *up, int *down, int n)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (i < n)
	{
		if (up[i] == 1)
			grid[0][i] = n;
		else if (up[i] == n)
		{
			while (j < n)
			{
				grid[j][i] = j + 1;
				j++;
			}
		}
		else if (up[i] == 2 && down[i] == 1)
		{
			grid[n - 1][i] = n;
			grid[0][i] = n - 1;
		}
		i++;
	}
}

void	rule_down(int **grid, int *up, int *down, int n)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (i < n)
	{
		if (down[i] == 1)
			grid[n - 1][i] = n;
		else if (up[i] == n)
		{
			while (j < n)
			{
				grid[n - j - 1][i] = j + 1;
			}
		}
		else if (up[i] == 1 && down[i] == 2)
		{
			grid[0][i] = n;
			grid[n - 1][i] = n - 1;
		}
		i++;
	}
}

void	rule_left(int **grid, int *left, int *right, int n)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (i < n)
	{
		if (left[i] == 1)
			grid[i][0] = n;
		else if (left[i] == n)
		{
			while (j < n)
			{
				grid[j][i] = j + 1;
			}
		}
		else if (left[i] == 2 && right[i] == 1)
		{
			grid[i][n - 1] = n;
			grid[i][0] = n - 1;
		}
		i++;
	}
}

void	rule_right(int **grid, int *left, int *right, int n)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (i < n)
	{
		if (right[i] == 1)
			grid[i][n - 1] = n;
		else if (right[i] == n)
		{
			while (j < n)
			{
				grid[i][n - j - 1] = j + 1;
			}
		}
		else if (left[i] == 1 && right[i] == 2)
		{
			grid[i][0] = n;
			grid[i][n - 1] = n - 1;
		}
		i++;
	}
}
