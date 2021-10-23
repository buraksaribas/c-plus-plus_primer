#include <iostream>
#include <fstream>
#include <vector>
#include <string>

void readFileToVector(const std::string &fileName, std::vector<std::string> &vs)
{
    std::ifstream fin(fileName);
    if(fin)
    {
        std::string s;
        while(std::getline(fin,s))
            vs.push_back(s);
    }
    else 
        std::cerr << "Fail to open file: " << fileName << std::endl;
}

int main(){

    std::vector<std::string> v;
    readFileToVector("e8.txt", v);

    for(auto &e : v)
        std::cout << e << std::endl;
    
    return 0;
}