#include <iostream>
#include <cstdlib>
#include <locale.h>

using namespace std;

int main()
{
    int magic;
    int guess;
    setlocale(LC_CTYPE,"Russian");

    cout<<"������� ���� �����: ";
    cin>>guess;

    magic=rand();
    if(magic==guess)cout<<"�� �������!";
    else {cout<<"�� �� �������. ";
    if(guess>magic)cout<<"���� ����� ������ ���������.";
    else cout<<"���� ����� ������ ���������.";
    }
    return 0;
}
