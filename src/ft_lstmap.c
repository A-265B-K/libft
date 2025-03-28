/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ft_lstmap.c                                    █   █ ████  ███  █   █    */
/*                                                  ██ ██ █    █   █ █   █    */
/*   By: alkuijte <alkuijte@codam.nl                █ █ █ ███  █   █ █ █ █    */
/*                        		 	                █   █ █    █   █ ██ ██    */
/*   Created: 2024/12/08 10:21:47 by alkuijte       █   █ ████  ███  █   █    */
/*   Updated: 2024/12/08 10:25:37 by alkuijte        github.com/A-265B-K      */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nlist;
	t_list	*temp;

	if (!lst || !f || !del)
		return (0);
	nlist = ft_lstnew(f(lst->content));
	if (!nlist)
		return (0);
	temp = nlist;
	while (lst->next)
	{
		nlist->next = ft_lstnew(f(lst->next->content));
		if (!nlist->next)
		{
			ft_lstclear(&temp, del);
			return (0);
		}
		nlist = nlist->next;
		lst = lst->next;
	}
	return (temp);
}
