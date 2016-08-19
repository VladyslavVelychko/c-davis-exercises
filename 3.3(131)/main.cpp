#include <iostream>
#include <cstdlib>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_CTYPE,"Russian");

    int i;
    int sum=0;

    for(i=1;i<=10; sum+=i++);
    cout<<"Сумма чисел равна "<<sum<<".";
    return 0;
}
