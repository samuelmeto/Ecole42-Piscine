/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meroztur <meroztur@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 14:44:48 by meroztur          #+#    #+#             */
/*   Updated: 2023/09/26 14:44:51 by meroztur         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int prime)
{
	unsigned int	i;

	i = 2;
	if (prime <= 1)
		return (0);
	while (i * i <= prime)
	{
		if (prime % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}
