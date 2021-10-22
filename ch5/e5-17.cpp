#include <iostream>
#include <vector>

using namespace std;

bool isPrefix(const vector<int> &left, const vector<int> &right)
{   
    auto b1 = left.begin(), b2 = right.begin();
    auto e1 = left.end(), e2 = right.end();
    for( /**/; b2 != e2 && b1 != e1; b2++, b1++)
    {
        if(*b1 != *b2)
            return false;
    }
    return true;
}

int main() {
    vector<int> v1{0,1,1,2};
    vector<int> v2{0,1,1,2,3,5,8};
    cout << (isPrefix(v1, v2) ? "yes" : "no") << endl;
    return 0;
}