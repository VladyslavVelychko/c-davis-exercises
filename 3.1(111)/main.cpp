#include <iostream>
#include <cstdlib>
#include <locale.h>

using namespace std;

int main()
{
    int guess;
    int magic;
    setlocale(LC_CTYPE,"Russian");

    magic=rand();

    cout<<"������� ���� �����:\n";
    cin>>guess;

    if(magic==guess)cout<<"�������!";
    else cout<<"�� �������.";
    return 0;
}
