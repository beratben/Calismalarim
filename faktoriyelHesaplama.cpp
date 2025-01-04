#include <iostream>
using namespace std;

int main() {
    int f, faktoriyel = 1;

    cout << "Bir sayi girin: ";
    cin >> f;

    // Faktöriyel hesaplama
    for (int i = 1; i <= f; i++) {
        faktoriyel *= i;
    }

    // Sonucu ekrana yazdırma
    cout << f << " sayisinin faktoriyeli: " << faktoriyel << endl;

    return 0;
}
