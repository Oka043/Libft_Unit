/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sq.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaktion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 14:47:26 by olaktion          #+#    #+#             */
/*   Updated: 2018/01/04 14:56:03 by olaktion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sq(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		return (0);
	while (i < n)
	{
		if (i * i == n)
			return (i);
		i++;
	}
	return (0);
}
