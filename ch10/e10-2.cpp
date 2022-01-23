#include <iostream>
#include <algorithm>
#include <list>
using namespace std;

int main()
{
    list<string> l{"ad","ssa","asd","asd","asd","awer","adas"};

    cout << count(l.begin(), l.end(), "asd") << endl;

    return 0;
}