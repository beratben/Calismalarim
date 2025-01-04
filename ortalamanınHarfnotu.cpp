#include <iostream>
using namespace std;

int main() {
    int notortalamasi;
    cout << "Not ortalamanizi girin: ";
    cin >> notortalamasi;

    if (notortalamasi >= 90)
        cout << "Harf Notu: AA" << endl;
    else if (notortalamasi >= 70)
        cout << "Harf Notu: BB" << endl;
    else if (notortalamasi >= 50)
        cout << "Harf Notu: CC" << endl;
    else
        cout << "Harf Notu: Basarisiz" << endl;

    return 0;
}
