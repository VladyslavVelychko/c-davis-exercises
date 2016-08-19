#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    double radius=4.0,height=5.0;
    setlocale(LC_CTYPE,"Russian");

    double volume=3.14*radius*radius*height;
    cout<<"Объем цилиндра равен "<<volume;
    return 0;
}
