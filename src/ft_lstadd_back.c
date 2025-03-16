/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ft_lstadd_bacl.c                               █   █ ████  ███  █   █    */
/*                                                  ██ ██ █    █   █ █   █    */
/*   By: alkuijte <alkuijte@codam.nl                █ █ █ ███  █   █ █ █ █    */
/*                        		 	                █   █ █    █   █ ██ ██    */
/*   Created: 2024/12/08 10:21:47 by alkuijte       █   █ ████  ███  █   █    */
/*   Updated: 2024/12/08 10:25:37 by alkuijte        github.com/A-265B-K      */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*l;

	if (*lst)
	{
		l = ft_lstlast(*lst);
		l->next = &*new;
	}
	else
		*lst = new;
}
