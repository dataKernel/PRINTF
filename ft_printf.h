/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lancelot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 12:41:29 by lancelot          #+#    #+#             */
/*   Updated: 2022/05/02 08:18:13 by lancelot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdbool.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);

void	ft_choice(char choice, va_list lst);
void	ft_ptr(unsigned long n, bool check_upper, bool ptr);

#endif
