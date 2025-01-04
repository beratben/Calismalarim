#include <iostream>
using namespace std;

int main()
{
    string ad;
    int en, boy, alan;

    cout << "Lutfen adinizi yaziniz : \n\n";

    cin >> ad;

    cout << " Hosgeldiniz " << ad << endl;

    cout << "Dikdortgenin enini giriniz : \n";
    cin >> en;
    cout << "Dikdortgenin boyunu giriniz: \n";
    cin >> boy;

    alan = (en * boy);
    cout << "Dikortgeninizin alani : " << alan << endl;

    cin.ignore(); // Bir önceki girişten kalan '\n' karakterini temizler.
    cin.get();    // Kullanıcıdan bir giriş bekler.
    return 0;
}
