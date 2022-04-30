/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lancelot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 21:34:52 by lancelot          #+#    #+#             */
/*   Updated: 2022/04/30 11:00:44 by lancelot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include "libft.h"
#include "printf.h"

int	ft_printf(char *str, ...)
{
	va_list		lst;
	int			i;

	va_start(lst, str);
	i = 0;
	while(str[i])
	{
		if(str[i] == '%')
		{
			ft_choice(str[i + 1], lst);
			i += 2;
		}
		if(str[i] != '\0')
		{
			ft_putchar_fd(str[i], 1);
			i++;
		}
	}
	return 42;
}

int		main(void)
{
	ft_printf("lancelot %d et %d", 4, 2);
	return 0;
}
