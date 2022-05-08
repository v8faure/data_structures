#include "dblst.h"

void	vfr_dblstclear(t_dblist *dblst)
{
	if (dblst)
	{
		dblst = dblst->next;
		while (dblst->next)
		{
			free(dblst->prev);
			dblst = dblst->next;
		}
		free(dblst->prev);
		free(dblst);
		dblst = NULL;
	}
}
