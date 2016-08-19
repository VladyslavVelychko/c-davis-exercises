#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    bool b;
    setlocale(LC_CTYPE,"Russian");

    b=true;
    cout<<"Значение b равно "<<b<<".\n";
    if(b)cout<<"Это выполнимо."<<"\n";

    b=false;
    cout<<"Значение b равно "<<b<<".\n";
    if(b)cout<<"Это невыполнимо."<<"\n";

    cout<<"10-9 равно "<<(10>9)<<".\n";
    return 0;
}
