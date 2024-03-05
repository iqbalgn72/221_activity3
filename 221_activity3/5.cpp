#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    int bilangan;
    srand(time(0));
    bilangan = rand() % 10;

    cout << "Nilai awal : " << bilangan << endl;

    if (bilangan <= 5)
    {
        cout << "bilangan kurang dari 5" << endl;
        return 0;
    }

    bilangan = 2 * bilangan;

    cout << "nilai sekarang = " << bilangan << endl;
}