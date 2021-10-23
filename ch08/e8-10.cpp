#include <sstream>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::ifstream fin("e8.txt");
    std::vector<std::string> vs;
    if(fin)
    {
        std::string s;
        while(fin >> s)
        {
            vs.push_back(s);
        }
    }
    else
        std::cerr << "File not opened!" << std::endl;

    for (const auto &e : vs)
    {
        std::istringstream iss(e);
        std::string word;
        while(iss >> word)
            std::cout << word << std::endl;
    }
    

    return 0;
}