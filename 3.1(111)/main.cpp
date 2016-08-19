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

    cout<<"Введите ваше число:\n";
    cin>>guess;

    if(magic==guess)cout<<"Угадали!";
    else cout<<"Не угадали.";
    return 0;
}
