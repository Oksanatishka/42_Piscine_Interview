#include "header.h"
#include <strings.h>

struct s_node *findParent(struct s_node *root, char *firstSpecies, char *secondSpecies)
{
	if (!root)
    	return NULL;
    if (!strcmp(root->name, firstSpecies) || !strcmp(root->name, secondSpecies))
 		return (root);
 
    struct s_node *temp=NULL;
    int count = 0;
	for(int i=0; root->children[i] ;i++)
    {
        struct s_node *res=findParent(root->children[i], firstSpecies, secondSpecies);
        if(res)
		{
           count++;
           temp = res; 
        }
    }
    if(count == 2)
        return root;
    return temp;
}