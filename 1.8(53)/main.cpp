#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    int a, b, c;
    setlocale(LC_CTYPE,"Russian");

    a=2;
    b=3;

    cout<<"Значение а равно "<<a<<"\n";
    cout<<"Значение b равно "<<b<<"\n";

    if(a<b)cout<<"a меньше b\n\n";
    if(a==b)cout<<"Ниче не будет";

    c=a-b;
    cout<<"c=a-b\n";
    cout<<"Переменная с содержит "<<c<<"\n";
    if(c>=0)cout<<"Значение с неотрицательно\n\n";
    if(c<0)cout<<"Значение с отрицательно\n\n";

    c=b-a;
    cout<<"c=b-a\n";
    cout<<"Переменная с содержит "<<c<<"\n";
    if(c>=0)cout<<"Значение с неотрицательно\n";
    if(c<0)cout<<"Значение с отрицательно\n";
    return 0;
}
