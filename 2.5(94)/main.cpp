#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    int i,j;
    bool b1,b2;
    setlocale(LC_CTYPE,"Russian");

    i=10;
    j=11;
    if(i<j)cout<<"i<j\n";
    if(i<=j)cout<<"i<=j\n";
    if(!(i==j))cout<<"i не равно j\n";
    if(i>j)cout<<"Все равно ниче не выведет.";
    if(i>=j)cout<<"Все равно ниче не выведет.";
    if(i==j)cout<<"Все равно ниче не выведет.";

    b1=true;
    b2=false;
    if(b1&&b2)cout<<"Все равно ниче не выведет.";
    if(!(b1&&b2))cout<<"Не b1 и b2 есть ИСТИНА.\n";
    if(b1||b2)cout<<"Логическое ИЛИ.\n";
    return 0;
}
