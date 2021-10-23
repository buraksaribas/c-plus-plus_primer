#include <iostream>
#include <vector>
using std::cout; using std::endl; using std::cin; using std::vector;

int main()
{
    int grade;
    cin >> grade;

    cout << (grade > 90 ? "high pass" 
                        : grade > 75 ? "pass"
                                     : grade >= 60 ? "low pass"
                                                   : "fail");

    cout << endl;

    if(grade > 90)
        cout << "high pass";
    else if(grade > 75)
        cout << "pass";
    else if(grade >= 60)
        cout << "low pass";
    else 
        cout << "fail";

        
    return 0;
}
