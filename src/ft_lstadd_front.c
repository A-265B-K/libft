/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ft_lstadd_front.c                              █   █ ████  ███  █   █    */
/*                                                  ██ ██ █    █   █ █   █    */
/*   By: alkuijte <alkuijte@codam.nl                █ █ █ ███  █   █ █ █ █    */
/*                        		 	                █   █ █    █   █ ██ ██    */
/*   Created: 2024/12/08 10:21:47 by alkuijte       █   █ ████  ███  █   █    */
/*   Updated: 2024/12/08 10:25:37 by alkuijte        github.com/A-265B-K      */
/*                                                                            */
/* ************************************************************************** */

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
