#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    int i;
    setlocale(LC_CTYPE,"Russian");

    for(i=1;i<=10;i++)
    cout<<i<<" /2 �����: "<<(float)i/2<<"\n";
    return 0;
}
