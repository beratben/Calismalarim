#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Turkish");
    int sayi1, sayi2, kucuk;
    cout << "Iki sayi girin: ";
    cin >> sayi1 >> sayi2;

    kucuk = (sayi1 < sayi2) ? sayi1 : sayi2;
    cout << "Küçük sayı:" << kucuk << endl;
    if (kucuk % 2 == 0)
        cout << "Cift" << endl;
    else
        cout << "Tek" << endl;

    return 0;
}
