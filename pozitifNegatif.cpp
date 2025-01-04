#include <iostream>
using namespace std;

int main() {
    int sayi;
    cout << "Bir sayi girin: ";
    cin >> sayi;

    if (sayi > 0)
        cout << "Pozitif" << endl;
    else if (sayi < 0)
        cout << "Negatif" << endl;
    else
        cout << "Notr" << endl;

    return 0;
}
