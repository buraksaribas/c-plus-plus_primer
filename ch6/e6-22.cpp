#include <iostream>
using std::cout;

void swap(int **p1, int **p2)
{
    int *tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}

void swapr(int *&p1, int *&p2)
{
    int *tmp = p1;
    p1 = p2;
    p2 = tmp;
}

int main()
{
    int i = 1, j = 3;
    int *p = &i, *q = &j;
    cout << *p << " " << *q << std::endl;
    swap(&p, &q);
    cout << *p << " " << *q << std::endl;
    swapr(p,q);
    cout << *p << " " << *q << std::endl;
    

    return 0;
}