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

#ifndef FT_PRINTF_FD_H
# define FT_PRINTF_FD_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdint.h>
# include <libft.h>

int	ft_printf_fd(int fd, const char *s, ...);
int	ft_printint_fd(int i, unsigned int nb, int fd);
int	ft_hexd_fd(unsigned int nb, char x, int fd);
int	ft_hexd2_fd(unsigned long long nb, int fd);
int	ft_pointer_fd(void *p, int fd);

#endif
