/*******
 * Read input from cin
 * Use cout << ... to output your result to STDOUT.
 * Use cerr << ... to output debugging information to STDERR
 * ***/
#include <iostream>
#include <limits>
#include <sstream>
#include "exercise.hpp"

ContestExerciseImpl::ContestExerciseImpl() : Exercise() {}

void ContestExerciseImpl::main() {
   std::string line;
	int res = 0;
	while (std::getline(std::cin, line))
	{
        res += atoi(line.c_str());
	}
    if ((res % 2) > 0)
        std::cout << res / 2 + 1 << endl;
    else 
        std::cout << res / 2 << endl;
}