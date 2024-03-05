#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    int bilangan1;
    int bilangan2;
    string status;
    srand(time(0));
    bilangan1 = rand() % 10;
    bilangan2 = rand() % 10;

    if (bilangan1 == bilangan2)
    {
        status  = "bilangan 1 sama dengan bilangan 2";
    }else if (bilangan1 > bilangan2)
    {
        status =  "bilangan 1 lebih besar dari bilangan 2";
    }else {
        status = "bilangan 1 lebih kecil dari bilangan  2";
    }
    
    cout << "bilangan pertama = " << bilangan1 << endl;
    cout << "bilangan kedua = " << bilangan2 << endl;
    cout << "statusnya = " << status << endl;
}