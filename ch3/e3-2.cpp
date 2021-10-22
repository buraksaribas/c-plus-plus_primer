#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

void readLines()
{
    string s;
    while(getline(cin, s))
    {
        cout << s << endl;
    }
}

void readWords()
{
    string s;
    while(cin >> s)
    {
        cout << s << endl;
    }
}

int main()
{
    readWords();
    //readLines();

    return 0;
}