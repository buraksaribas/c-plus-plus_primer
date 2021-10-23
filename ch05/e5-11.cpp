#include <iostream>

int main()
{
    char c;
    unsigned aCnt = 0, eCnt = 0, iCnt = 0, 
            oCnt = 0, uCnt = 0, vowels = 0,
            blankCnt = 0, tabCnt = 0, nlCnt = 0;

    while(std::cin.get(c))
    {
        switch (c)
        {
            case 'a': case 'A':
                ++aCnt;
                break;
            case 'e': case 'E':
                ++eCnt;
                break;
            case 'i': case 'I':
                ++iCnt;
                break;
            case 'o': case 'O':
                ++oCnt;
                break;
            case 'u': case 'U':
                ++uCnt;
                break;
            case ' ':
                ++blankCnt;
                break;
            case '\t':
                ++tabCnt;
                break;
            case '\n':
                ++nlCnt;
                break;
        }
    }
    vowels = aCnt + eCnt + iCnt + oCnt + uCnt;
    std::cout << "Number of vowel a: " << aCnt << '\n'
            << "Number of vowel e: " << eCnt << '\n'
            << "Number of vowel i: " << iCnt << '\n'
            << "Number of vowel o: " << oCnt << '\n'
            << "Number of vowel u: " << uCnt << '\n'
            << "Number of blank spaces: " << blankCnt << '\n'
            << "Number of tabs: " << tabCnt << '\n'
            << "Number of new lines: " << nlCnt << '\n'
            << "There are " <<  vowels << " vowels"<< std::endl;

    return 0;
}