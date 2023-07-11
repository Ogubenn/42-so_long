/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:51:39 by ogdurkan          #+#    #+#             */
/*   Updated: 2023/07/11 14:51:41 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_puts.h"

int	ft_putstr(char *str)
{
	size_t	result;

	result = 0;
	if (!str)
		return (ft_putstr("(null)"));
	while (str[result])
	{
		ft_putchar(str[result]);
		result++;
	}
	return (result);
}
