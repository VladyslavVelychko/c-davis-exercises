#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    int a,b;
    setlocale(LC_CTYPE,"Russian");

    cout<<"Введите числитель: ";
    cin>>a;
    cout<<"Введите знаменатель: ";
    cin>>b;

    if(b)cout<<"Результат: "<<a/b<<"\n";
    else cout<<"На нуль делить нельзя!";
    return 0;
}
