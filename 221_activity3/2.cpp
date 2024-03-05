#include <iostream>
using namespace std;

int main()
{
    float matematika, fisika, rerata;
    string status;
    cout << "nilai matematika : " << endl;
    cin >> matematika;
    cout << "masukan nilai fisika : " << endl;
    cin >> fisika;
    rerata = (matematika + fisika) / 2;
    if (matematika >= 70){
        status = "lulus";
    }
    else if (rerata > 60){
        status = "lulus";
    }else{
        status = "gagal";
    }
    cout << "rerata = "<< rerata << endl;
    cout << "status kelulusan = " << status << endl;
}