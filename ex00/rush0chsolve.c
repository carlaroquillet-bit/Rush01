/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush0chsolve.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlroqu <carlroqu@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 20:58:53 by carlroqu          #+#    #+#             */
/*   Updated: 2026/08/17 20:58:57 by carlroqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_rule(int **grid, int row, int col, int nb)
{
	int	i;
	int	n;

	n = 4;
	i= 0;
	while (i < n)
	{
		if (grid[row][i] == nb)
			return (0);
		if (grid[i][col] == nb)
			return (0);
		i++;
	}
	return (1);
}

int	solve(int **grid, int n);

int	try_number(int **grid, int row, int col, int n)
{
	int nb;

	 nb = 1;
	 while (nb <=n)
	{
		if (check_rule(grid,  row,  col,  nb,  n))
		{
			grid[row][col] = nb;
			if (solve(grid, n))
				return(1);
			grid[row][col] = 0;
		}
		nb++;
 	}
	return(0);
}

int	solve(int **grid, int n)
{
	int row;
	int col;
	int nb;

	row = 0;
	while (row < n)
	{
		col = 0;
		while (col < n)
		{
			if (grid[row][col] == 0)
			return (try_number(grid, row, col, n));
			col++;
		}
		row++;
	}
	return (1);
}

