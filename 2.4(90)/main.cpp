#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    int x,y;
    setlocale(LC_CTYPE,"Russian");

    x=10;
    y=3;

    cout<<"10 делить на 3 равно "<<x/y<<" с остатком "<<x%y<<".\n";

    x=1;
    y=2;
    cout<<"1 разделить на 2 равно "<<x/y<<" с остатком "<<x%y;
    return 0;
}
