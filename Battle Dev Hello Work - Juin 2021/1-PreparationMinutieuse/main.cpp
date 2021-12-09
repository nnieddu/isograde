#include <iostream>
#include <limits>
#include <sstream>

int main()
{
	std::string line;
	std::getline(std::cin, line);
	int D = stoi(line);
	std::getline(std::cin, line);
	std::cout << (stoi(line) * 5) + D << std::endl;
}