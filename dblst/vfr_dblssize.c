#include "dblst.h"

int	vfr_dblstsize(t_dblist *dblst)
{
	int	i;

	i = 0;
	if (!dblst)
		return (0);
	while (dblst)
	{
		dblst = dblst->next;
		i++;
	}
	return (i);

}
