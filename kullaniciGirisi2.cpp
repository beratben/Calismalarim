#include <iostream>
using namespace std;

int main() {
    string sifre = "1234";
    string giris;

    cout << "Sifreyi giriniz: ";
    cin >> giris;

    if (giris == sifre) {
        cout << "Giris Basarili" << endl;
    }
    else {
        cout << "Hatali Sifre" << endl;
    }

    return 0;
}
