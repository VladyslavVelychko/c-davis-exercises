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

    cout<<"�������� ������������ ����� ������ � ������ ����� "<<delay<<" ������.\n";

    delay_in_min=delay/60.0;

    cout<<"��� ���������� "<<delay_in_min<<" �����.";
    return 0;
}
