#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    setlocale(LC_CTYPE,"Russian");

    int i;
    int r;

    r=rand();

    for(i=0; r<=20000; i++)
    r=rand();
    cout<<"����� ����� "<<r<<". ��� ������������� ��� ������� "<<i<<".";
    return 0;
}
