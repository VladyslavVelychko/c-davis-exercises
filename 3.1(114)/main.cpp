#include <iostream>
#include <cstdlib>
#include <locale.h>

using namespace std;

int main()
{
    int magic;
    int guess;
    setlocale(LC_CTYPE,"Russian");

    cout<<"Введите ваше число: ";
    cin>>guess;

    magic=rand();
    if(magic==guess)cout<<"Вы угадали!";
    else {cout<<"Вы не угадали. ";
    if(guess>magic)cout<<"Ваше число больше заданного.";
    else cout<<"Ваше число меньше заданного.";
    }
    return 0;
}
