#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    double distance,lightspeed,delay,delay_in_min;
    setlocale(LC_CTYPE,"Russian");

    distance=34000000.0;
    lightspeed=186000.0;

    delay=distance/lightspeed;

    cout<<"Задержка радиосигнала между Землей и Марсом равна "<<delay<<" секунд.\n";

    delay_in_min=delay/60.0;

    cout<<"Это составляет "<<delay_in_min<<" минут.";
    return 0;
}
