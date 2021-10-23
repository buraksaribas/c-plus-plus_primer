#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

int main()
{
    bool flag = true;
	int arr1[] = {1,2,3,4,5};
    int arr2[] = {1,2,3,4,2};
    int *pb1 = begin(arr1), *pe1 = end(arr1), *pb2 = begin(arr2), *pe2 = end(arr2);

    if((pe1 - pb1) != (pe2 - pb2))
        cout << "Arrays are not equal" << endl;
    else{
        while(pb1 < pe1)
        {
            if(*pb1++ != *pb2++)
            {
                flag = false;
                break;
            }
        }
        cout << (flag ? "Arrays are equal" : "Arrays are not equal") << endl;
    }
    
    vector<int> v1 = {1,2,3};
    vector<int> v2 = {1,2,3,4};

    if(v1 == v2)
        cout << "Vectors are equal" << endl;
    else   
        cout << "Vectors are not equal" << endl;


    return 0;
}
