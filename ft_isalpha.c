/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalph.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasmi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:41:36 by skasmi            #+#    #+#             */
/*   Updated: 2021/11/05 13:06:08 by skasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_isalpha(int nb)
{
	if ((nb >= 'A' && nb <= 'Z') || (nb >= 'a' && nb <= 'z'))
	{
		return (1);
	}
	return (0);
}
