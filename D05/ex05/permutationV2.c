#include "header.h"
#include <stdio.h>
#include <string.h>

void	swap(char *a, char *b){
	char temp = *a;
	*a = *b;
	*b = temp;
}

void	findPerms(char *str, int index, int n, struct s_dict *dict)
{
    if (index == n) {
		if (dictSearch(dict, str) == -1)
			printf("%s\n", str);
		dictInsert(dict, str, 1);
    }
    for (int i = index; i < n; i++) {
            swap(&str[index], &str[i]);
            findPerms(str, index + 1, n, dict);
            swap(&str[index], &str[i]);
    }
}

void	printUniquePermutations(char *str)
{
	if (str) 
	{
		struct s_dict *dict = dictInit(strlen(str));
		findPerms(str, 0, strlen(str), dict);
	}
}
