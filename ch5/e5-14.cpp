#include <iostream>

using namespace std;

int main()
{
    string word, duplicate, maxDuplicate;
    int cnt = 0, maxCnt = 0;
    while (cin >> word)
    {
        if(word == duplicate)
            ++cnt;
        else{
            if(cnt > maxCnt)
            {
                maxCnt = cnt;
                maxDuplicate = duplicate;
            }
            duplicate = word;
            cnt = 1;
        }
    }
    if(cnt > maxCnt)
    {
        maxCnt = cnt;
        maxDuplicate = duplicate;
    }
    if (maxCnt > 1) 
    {
        cout << maxDuplicate << " occurs " << maxCnt << " times." << endl;
    } 
    else 
        cout << "No word was repeated." << endl;


    return 0;
}