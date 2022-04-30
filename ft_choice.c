/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_choice.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lancelot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 12:27:36 by lancelot          #+#    #+#             */
/*   Updated: 2022/04/30 11:42:05 by lancelot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "libft.h"
#include "printf.h"

void	ft_choice(char choice, va_list lst)
{
	if (choice == 'c')
		ft_putchar_fd(va_arg(lst, int), 1);
	else if(choice == 's')
		ft_putstr_fd(va_arg(lst, char *), 1);
	else if(choice == 'i' || choice == 'd')
		ft_putnbr_fd(va_arg(lst, int), 1);
	else if(choice == 'p')
}
