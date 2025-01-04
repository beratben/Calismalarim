#include <iostream>
using namespace std;

int main() 
{
    setlocale(LC_ALL, "Turkish");
    int sayi, tekToplam = 0, ciftToplam = 0;

    cout << "Lütfen 5 adet sayı giriniz:" << endl;

    for (int i = 1; i <= 5; i++) {
        cout << i << ". sayıyı girin: ";
        cin >> sayi;

        if (sayi % 2 == 0) {
            ciftToplam += sayi; 
        }
        else {
            tekToplam += sayi; 
        }
    }

    cout << "Çift sayıların toplamı: " << ciftToplam << endl;
    cout << "Tek sayıların toplamı: " << tekToplam << endl;

    return 0;
}
