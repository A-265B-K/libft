/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkuijte <alkuijte@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/05 17:44:07 by alkuijte      #+#    #+#                 */
/*   Updated: 2023/12/07 16:29:42 by alkuijte      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdint.h>
# include <libft.h>

int	ft_printf(const char *s, ...);
int	ft_printint(int i, unsigned int nb);
int	ft_hexd(unsigned int nb, char x);
int	ft_hexd2(unsigned long long nb);
int	ft_pointer(void *p);

#endif
