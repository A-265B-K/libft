/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ft_lstclear.c                                  █   █ ████  ███  █   █    */
/*                                                  ██ ██ █    █   █ █   █    */
/*   By: alkuijte <alkuijte@codam.nl                █ █ █ ███  █   █ █ █ █    */
/*                        		 	                █   █ █    █   █ ██ ██    */
/*   Created: 2024/12/08 10:21:47 by alkuijte       █   █ ████  ███  █   █    */
/*   Updated: 2024/12/08 10:25:37 by alkuijte        github.com/A-265B-K      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*l;
	t_list	*tmp;

	l = *lst;
	while (l)
	{
		tmp = l->next;
		ft_lstdelone(l, del);
		l = tmp;
	}
	*lst = NULL;
}
