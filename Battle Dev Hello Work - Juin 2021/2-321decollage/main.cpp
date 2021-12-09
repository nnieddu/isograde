#include <iostream>
#include <limits>
#include <sstream>
#include <algorithm>
#include <list>

int main() 
{
	std::list<std::string> liste;

	std::string input;
	std::string res;
	int rez = 0;

	int nbr_btn = 0;
	int nbr_btn2 = 0;
	std::getline(std::cin, input);
	try
	{
		nbr_btn = stoi(input);
	}
	catch (std::exception &e)
	{
		std::cerr << "Error with : " << e.what();
	}
	nbr_btn2 = nbr_btn;
	while (nbr_btn-- > 0)
	{
		std::getline(std::cin, input);
		liste.push_back(input);
	}
	nbr_btn = nbr_btn2;
	std::list<std::string>::iterator l_it = liste.begin();
	std::list<std::string>::iterator l_it2 = liste.begin();
	while (nbr_btn-- > 0)
	{
		while (l_it != liste.end())
		{
			if (*l_it2 == *l_it)
			{
				res = *l_it;
				rez++;
			}
			l_it++;
		}
		if (rez == 2)
		{
			std::cout << res;
			break ;
		}
		l_it2++;
		l_it = liste.begin();
		rez = 0;
	}
	return 0;
}



// C VERSION 

// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// #include "libisograd.h"

// int main()
// {
// 	char s[1024];
// 	char **input;
	
// 	int n = 0;
// 	int x = -1;
// 	int y = -1;
// 	while (scanf("%s", &s) != EOF) 
// 	{
// 		if (n != 0)
// 		input[x] = strdup(s); 
// 		if (n == 0)
// 		{
// 			n = atoi(s);
// 			input = malloc(sizeof(char *) * n + 1);
// 		}
// 		x++;
// 	}
// 	int tab[n];
// 	while (++y < n)
// 		tab[y] = 0;
// 	y = 0;
// 	x = 0;
// 	while (x < n)
// 	{
// 		while (y < n)
// 		{
// 			if (strcmp(input[x], input[y]) == 0)
// 				tab[y]++;
// 			y++;
// 		}
// 		x++;
// 		y = 0;
// 	}
// 	y = 0;
// 	while (y < n)
// 	{
// 		if (tab[y] == 2)
// 		{
// 			printf(input[y]);
// 			return 0; 
// 		}
// 		y++;
// 	}
// 	return 0;
// }
