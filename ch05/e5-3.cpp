#include <iostream>

using std::cout;
using std::endl;

int main() {
    int sum = 0, val = 1;
    //while (val <= 10 && (sum += val++)) ;  // null statement
    while (val <= 10 && (sum += val, ++val)) 
        ;  // null statement
    cout << "Sum of 1 to 10 inclusive is " << sum << endl;

    // I think this rewrite diminishes the readability of the code.
    return 0;
}