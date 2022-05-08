#include "dblst.h"

void	vfr_dblstadd_front(t_dblist *current, t_dblist *new)
{
	if (current && new)
	{
		if (current->next != NULL)
			new->next = current->next;
		current->next = new;
		new->prev = current;
	}
	else
		return (0);
}
