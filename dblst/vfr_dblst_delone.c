#include "dblst.h"

void	vfr_dblst_delone(t_dblist *dblst)
{
	t_dblist	*tmp;

	if (dblst)
	{
		tmp = (t_dblist *)malloc(sizeof(t_dblist));
		if (dblst->prev != NULL)
		{
			tmp = dblst->prev;
			tmp->next = dblst->next;
		}
		if (dblst->next != NULL)
		{
			tmp = dblst->next;
			tmp->prev = dblst->prev;
		}
		tmp = dblst;
		if (dblst->next != NULL)
			dblst = dblst->next;
		else if (dblst->prev != NULL)
			dblst->prev;
		tmp->content = NULL;
		free(tmp);
	}
	else
		return (0);
}
