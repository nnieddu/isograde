/*******
 * Read input from cin
 * Use cout << ... to output your result to STDOUT.
 * Use cerr << ... to output debugging information to STDERR
 * ***/
#include <iostream>
#include <limits>
#include <map>
#include <sstream>
#include "exercise.hpp"

ContestExerciseImpl::ContestExerciseImpl() : Exercise() {}

void ContestExerciseImpl::main() 
{
    std::map<char, int> books;
    std::map<char, int>::iterator it;
    books['F'] = 0;
    books['P'] = 0;
    books['A'] = 0;
    
    int TF = 0;
    int TP = 0;
    int TA = 0;
    
    int mF = 0;
    int mP = 0;
    int mA = 0;
    
    char garbage;
    
    std::string line;
    
	while (std::getline(std::cin, line))
	{
        std::stringstream  lineStream(line);	    
        if (TF == 0 && TP == 0 && TA == 0)
            lineStream >> TF >> TP >> TA;
        if (line.find('F') != std::string::npos)
        {
            lineStream >> garbage >> mF;
            it = books.find('F');
            it->second += mF;
        }
        if (line.find('P') != std::string::npos)
        {
            lineStream >> garbage >> mP;
            it = books.find('P');
            it->second += mP;
        }
        if (line.find('A') != std::string::npos)
        {
            lineStream >> garbage >> mA;
            it = books.find('A');
            it->second += mA;
        }
    }
    if (books['F'] > TF || books['P'] > TP || books['A'] > TA)
        std::cout << "non" << std::endl;
    if (books['F'] <= TF && books['P'] <= TP && books['A'] <= TA)
        std::cout << "oui" << std::endl;
}