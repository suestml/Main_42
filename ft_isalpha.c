/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suustame <suustame@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 15:55:10 by suustame          #+#    #+#             */
/*   Updated: 2024/10/30 02:21:00 by suustame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int a)
{
	if ((a > 96 && a < 123) || (a > 64 && a < 91))
		return (1);
	else
		return (0);
}
