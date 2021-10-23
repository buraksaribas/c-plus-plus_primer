#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    const vector<string> scores = {"F", "D", "C", "B", "A", "A++"};
    string lettergrade;
    int grade;
    cin >> grade;
    lettergrade = ((grade < 60) ? scores[0] 
                               : scores[(grade - 50) / 10]);
    
    if (grade != 100)
    {
        if(grade % 10 > 7)
            lettergrade += "+";
        else if(grade % 10 < 3)
            lettergrade += "-";
    }

    cout << lettergrade << endl;

    return 0;
}