#include <iostream>

int main()
{
	std::string line;
	std::string line2;
	std::string res;

	std::getline(std::cin, line);
	std::getline(std::cin, line2);

	for (int i = 0; line[i] != '\0'; i++)
	{
		res += line[i];
		res += line2[i];
	}
	std::cout << res << std::endl;
}
