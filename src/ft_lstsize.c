/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ft_lstsize.c                                   █   █ ████  ███  █   █    */
/*                                                  ██ ██ █    █   █ █   █    */
/*   By: alkuijte <alkuijte@codam.nl                █ █ █ ███  █   █ █ █ █    */
/*                        		 	                █   █ █    █   █ ██ ██    */
/*   Created: 2024/12/08 10:21:47 by alkuijte       █   █ ████  ███  █   █    */
/*   Updated: 2024/12/08 10:25:37 by alkuijte        github.com/A-265B-K      */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_lstsize(t_list *lst)
{
	unsigned int	size;

	size = 1;
	if (!lst)
		return (0);
	while (lst->next)
	{
		size += 1;
		lst = lst->next;
	}
	return (size);
}
