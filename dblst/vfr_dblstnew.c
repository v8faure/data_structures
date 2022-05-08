#include "dblst.h"
t_dblist	*vfr_dblstnew(void *content)
{
	t_dblist	*newlist;

	newlist = (t_dblist *)malloc(sizeof(t_dblist));
	if (!newlist)
		return (0);
	newlist->content = content;
	newlist->prev = NULL;
	newlist->next = NULL;
	return (newlist);
}

/*#include <stdio.h>
int	main()
{
	t_dblist	*test;
	int			x = 15;

	test = vfr_dblst_new(&x);

	int		y = (inttest->content;

	printf("%d\n", y);
} */
