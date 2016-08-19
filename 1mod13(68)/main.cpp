#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    double Luna,Zemlya;
    int counter;
    setlocale(LC_CTYPE,"Russian");



    counter=0;

    for(Luna=1.0;Luna<=100;Luna++){
    Zemlya=Luna/0.17;
    cout<<Luna<<" фунтов Земли "<<Zemlya<<" фунтов в лунном весе.\n";
    counter++;
    if(counter==25){cout<<"\n";
    counter=0;}}
    return 0;
}
