#include <iostream>
#include <vector>
#include <string>
#include <cstring>

using std::vector; using std::string; using std::cout; using std::endl; using std::cin; using std::begin; using std::end;

int main()
{
	char s1[] = "Hello";
    char s2[] = "World";
    char s3[11];

    strcpy(s3, s1);
    strcat(s3, " ");
    strcat(s3, s2);

    cout << s3 << endl;

    return 0;
}
