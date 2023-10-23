/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: alkuijte <alkuijte@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/20 17:44:08 by alkuijte      #+#    #+#                 */
/*   Updated: 2023/10/23 14:57:13 by alkuijte      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	ans;
	int	i;
	int	n;

	ans = 0;
	n = 1;
	i = 0;
	if (nptr[i++] == '-')
		n = -1;
	while (nptr[i] >= '0' && nptr[i] <= '9')
		ans = (nptr[i++] - '0') + (ans * 10);
	return (ans * n);
}