#include <iostream>
#include <locale.h>

using namespace std;// 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97
int factr(int n);
int main()
{
    setlocale(LC_CTYPE,"Russian");

    cout<<factr;
    return 0;
}
int factr(int n)
{
    int number;
    number=(factr(n-2)+1)/n;
    for(number=1;number<=100;number++)
    return 0;
}
