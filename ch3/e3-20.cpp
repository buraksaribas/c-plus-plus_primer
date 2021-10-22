#include <iostream>
#include <string>
#include <vector>

using std::vector;
using std::cout;
using std::cin;
using std::endl;

int main()
{
    vector<int> v;
    int n, sum = 0;
    while(cin >> n)
        v.push_back(n);
    for(int i = 0; i < v.size() - 1; i++)
    {
        cout << v[i] + v[i + 1] << endl;
    }

    for(int i = 0, j = v.size() - 1; i <= j; i++, j--)
    {
        cout << v[i] + v[j] << endl;
    }

    int mid = (v.size() + 1) / 2;

	for (int i = 0; i != mid; i++)
	{
		cout << v[i] + v[v.size() - i - 1] << endl;
	}

        
	return 0;
}

