/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkpoint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlroqu <carlroqu@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 19:57:04 by carlroqu          #+#    #+#             */
/*   Updated: 2026/08/17 20:53:11 by carlroqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_conversion(char *str, int tab[16]);
int		ft_entree(char *str);

int	ft_entree(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (!(str[i] == ' ') && (str[i] < '1' || str[i] > '4'))
			return (0);
		if (!(str[i] == ' '))
			count++;
		i++;
	}
	if (!(count == 16))
		return (0);
	return (1);
}
/*int	main(int argc, char **argv)
{
	int	tab[16];
	int	k;

	if (!(argc == 2))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (!(ft_entree(argv[1])))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	return (0);
}
}*/
