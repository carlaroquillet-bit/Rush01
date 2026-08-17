/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush0logic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlroqu <carlroqu@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 20:34:45 by carlroqu          #+#    #+#             */
/*   Updated: 2026/08/17 20:37:59 by carlroqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rule_n_plus(int **grid, int *up, int *down, int n);
void	rule_n_plus2(int **grid, int *left, int *right, int n);
void	rule_up(int **grid, int *up, int *down, int n);
void	rule_down(int **grid, int *up, int *down, int n);
void	rule_left(int **grid, int *left, int *right, int n);
void	rule_right(int **grid, int *left, int *right, int n);
int		**dirsplit(char *a, int n);
int		**grid(int n);

int	numberc(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '0')
	{
		i++;
	}
	if (i % 4 != 0)
		return (0);
	return (i);
}

int	**logic2(int **dir, int **grid, int n)
{
	rule_up(grid, dir[0], dir[1], n);
	rule_down(grid, dir[0], dir[1], n);
	rule_left(grid, dir[2], dir[3], n);
	rule_right(grid, dir[2], dir[3], n);
	rule_n_plus(grid, dir[0], dir[1], n);
	rule_n_plus2(grid, dir[2], dir[3], n);
	return (grid);
}

int	**logic(char *c)
{
	int	n;
	int	**grid1;
	int	**dir;

	n = numberc(c);
	grid1 = grid(n);
	dir = dirsplit(c, n);
	return (logic2(dir, grid1, n));
}
