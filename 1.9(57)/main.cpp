#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    double n, d, result;
    setlocale(LC_CTYPE,"Russian");

    cout<<"¬ведите числитель - ";
    cin>>n;
    cout<<"\n";

    cout<<"¬ведите знаменатель - ";
    cin>>d;
    cout<<"\n";

    result=n/d;

    if(d!=0){cout<<"ƒеление возможно(знаменатель не равен 0).\n"<<n<<"/"<<d<<" равно "<<result;}//vse okay

    return 0;
}
