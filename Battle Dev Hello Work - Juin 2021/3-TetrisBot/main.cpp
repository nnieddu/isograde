


// C VERSION

// #include <stdlib.h>
// #include <stdio.h>
// #include "libisograd.h"
// #include <string.h>

// int count_diese(char *tab)
// {
// 	int i = -1;
// 	int j = 0;
// 	while (++i < 10)
// 	{
// 		if (tab[i] == '#')
// 			j++;
// 	}
// 	return j;
// }

// int locate_hole(char *tab)
// {
// 	int i = -1;
// 	while (++i < 10)
// 	{
// 		if (tab[i] == '.')
// 			return i;
// 	}
// 	return i;
// }

// int check_valide(char **tab, int hole, int line)
// {
// 	int i = -1;
// 	int test = 0;
// 	while (++i <= line)
// 	{
// 		if ((tab[i][hole]) != '.')
// 			return -1;
// 	}
// 	if (line < 16)
// 		if (tab[line + 4][hole] == '.')
// 			return -1;
// 	return (hole);
// }

// int main() 
// {
// 	char s[1024];
// 	char **tab;
// 	tab = malloc(sizeof(char *) * 20);
// 	int i = 0;
// 	int x = 0;
// 	while (scanf("%s", &s) != EOF) 
// 	{
// 		tab[i] = strdup(s);
// 		dprintf(2, "%s | i = %d | nbr diese: %d \n", tab[i], i, count_diese(tab[i]));
// 		i++;
// 	}
// 	i = 0;
// 	while (i < 20)
// 	{
// 		if (count_diese(tab[i]) == 9 && i < 17)
// 		{
// 			if (count_diese(tab[i + 1]) == 9 && count_diese(tab[i + 2]) == 9 && count_diese(tab[i + 3]) == 9)
// 				break ;
// 		}
// 		i++;
// 	}
// 	dprintf(2, "TEST i = %d\n", i);
// 	if (i == 20)
// 	{
// 		printf("NOPE");
// 		return 0;
// 	}
// 	x = check_valide(tab, locate_hole(tab[i]), i);
// 	if (x == -1)
// 	{
// 		printf("NOPE");
// 		dprintf(2, " x = %d\n", x);
// 		return 0;
// 	}
// 	dprintf(2, " x = %d\n", x);
// 	printf("BOOM %d", x + 1);
// 	return 0;
// }