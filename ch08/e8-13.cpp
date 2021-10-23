#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

using std::vector; using std::string; using std::cin; using std::istringstream;

struct PersonInfo {
    string name;
    vector<string> phones;
};

bool valid(const string &str)
{
    return isdigit(str[0]);
}

string format(const string &str)
{
    return str.substr(0,3) + "-" + str.substr(3,3) + "-" + str.substr(6);
}

int main()
{
    string line, word;
    vector<PersonInfo> people;
    istringstream record;
    while (getline(cin, line))
    {
        PersonInfo info;
        record.clear();
        record.str(line);
        record >> info.name;
        while (record >> word)
            info.phones.push_back(word);
        people.push_back(info);
    }
    
    for (const auto &entry : people)
    {
        std::ostringstream formatted, badNums;
        for(const auto &nums : entry.phones)
        {
            if(!valid(nums))
                badNums << " " <<  nums;
            else 
                formatted << " " << format(nums);
        }
        if(badNums.str().empty())
            std::cout << entry.name << " " << formatted.str() << std::endl;
        else   
            std::cerr << "input error: " << entry.name << " invalid number(s) " << badNums.str() << std::endl;
    }
    
    return 0;
}