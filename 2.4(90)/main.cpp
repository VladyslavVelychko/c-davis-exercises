#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    int x,y;
    setlocale(LC_CTYPE,"Russian");

    x=10;
    y=3;

    cout<<"10 ������ �� 3 ����� "<<x/y<<" � �������� "<<x%y<<".\n";

    x=1;
    y=2;
    cout<<"1 ��������� �� 2 ����� "<<x/y<<" � �������� "<<x%y;
    return 0;
}
