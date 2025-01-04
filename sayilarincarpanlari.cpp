#include <iostream>
using namespace std;

int main()
{
    
    setlocale(LC_ALL, "Turkish");

    int sayi;
    cout << "****Girdiğiniz Sayının Çarpanlarını Gösteren Program****\n\n\n\n";

    cout << "Bir sayi girin: ";
    cin >> sayi;

    cout << sayi << " sayisinin carpanlari: \n\n";
    for (int i = 1; i <= sayi; i++) {
        if (sayi % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
