#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

void concatenate(){
    string ts, s;
    while(cin >> s){
        ts += s;
    }
    cout << ts << endl;
}

void concatenateSpace(){
    string ts, s;
    while(cin >> s){
        ts += s + " ";
    }
    cout << ts << endl;
}

int main()
{
    concatenate();
    //concatenateSpace();

    return 0;
}