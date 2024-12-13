/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ft_lstdelone.c                                 █   █ ████  ███  █   █    */
/*                                                  ██ ██ █    █   █ █   █    */
/*   By: alkuijte <alkuijte@codam.nl                █ █ █ ███  █   █ █ █ █    */
/*                        		 	                █   █ █    █   █ ██ ██    */
/*   Created: 2024/12/08 10:21:47 by alkuijte       █   █ ████  ███  █   █    */
/*   Updated: 2024/12/08 10:25:37 by alkuijte        github.com/A-265B-K      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	(del)(lst->content);
	free(lst);
}
