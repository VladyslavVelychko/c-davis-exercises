/*—ложные проценты*/

#include <iostream>
#include <cmath>
#include <locale.h>

using namespace std;

int main()
{
    double Principal;//типа директор епта!!! на самом деле исходна€ сумма займа
    double IntRay;//процентна€ ставка
    double PayPerYear;//количество выплат в год
    double NumYears;//срок займа в годах
    double Payment;//размер регул€рного платежа
    double numer,denom;
    double b,e;// for Pow()
    setlocale(LC_CTYPE,"Russian");

    cout<<"¬ведите исходную сумму займа: ";
    cin>>Principal;

    cout<<"¬ведите процентную ставку(<1): ";
    cin>>IntRay;

    cout<<"¬ведите количество выплат в год: ";
    cin>>PayPerYear;

    cout<<"¬ведите срок займа (в годах): ";
    cin>>NumYears;

    numer=IntRay*Principal/PayPerYear;

    e=-(PayPerYear*NumYears);
    b=(IntRay/PayPerYear)+1;
    denom=1-pow(b,e);
    Payment=numer/denom;
    cout<<"–азмер платежа по займу составл€ет "<<Payment;
    return 0;
}
