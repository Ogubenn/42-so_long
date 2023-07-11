/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puts.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:51:34 by ogdurkan          #+#    #+#             */
/*   Updated: 2023/07/11 14:51:35 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUTS_H
# define FT_PUTS_H

# include <unistd.h>
# include "../ft_printf.h"

int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr(long nbr, t_base base);

#endif