#include "dblst.h"

void	vfr_dblstadd_back(t_dblist *current, t_dblist *new)
{
	if (current && new)
	{
		if (current->prev != NULL)
			new->prev = current->prev;
		current->prev = new;
		new->next = current;
	}
	else
		return (0);
}
