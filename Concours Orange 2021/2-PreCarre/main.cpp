#include <iostream>
#include <limits>
#include <sstream>
#include <vector>
#include <algorithm>

int	main()
{
	std::string line;
	int nbr_parcelles, res = 0;

	std::getline(std::cin, line);
	try 
	{
		nbr_parcelles = stoi(line);
	}
	catch (std::exception &e) 
	{
		std::cerr << "ERROR : " << e.what() << " is unable to convert (only integer allowed)." << std::endl << "Program exit (-1)." << std::endl;
		exit (-1);
	}

	std::vector<int> liste (nbr_parcelles, 0);
	std::getline(std::cin, line);
	int i = -1;
	std::vector<int>::iterator it = liste.begin();
	while (line[++i])
	{
		if (line[i] == ' ')
			it++;
		else 
			*it = ((*it * 10) + (line[i] - 48));
	}

	for (it = liste.begin(); it != liste.end(); ++it)
	{
		if (it == liste.begin())
		{
			if (*it >= *(it+1))
				res += *it * 4;
			else
				res += *it * 3;
		}
		else if (it+1 == liste.end())
		{
			if (*it > *(it-1))
				res += *it * 4;
			else
				res += *it * 3;
		}
		else
		{
			if ((*it < *(it+1) && *it <= *(it-1)))
				res += *it * 2;
			else if ((*it >= *(it+1) && *it > *(it-1)))
				res += *it * 4;
			else 
				res += *it * 3;
		}
	}
	std::cout << res << std::endl;
}
