#ifndef DBLST_H
# define DBLST_H

# include <stdlib.h>

typedef struct s_doble_list
{
	void					*content;
	struct t_double_list	*prev;
	struct t_double_list	*next;
}							t_dblist;


t_dblist	*vfr_dblstnew(void *content);
void	vfr_dblstadd_front(t_dblist *current, t_dblist *new);
void	vfr_dblstadd_back(t_dblist *current, t_dblist *new);
int		vfr_dblstsize(t_dblist *dblst);
void	vfr_dblst_delone(t_dblist *dblst);
void	vfr_dblstclear(t_dblist *dblst);

#endif
