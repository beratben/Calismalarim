#include <iostream>
#include <ctime>  // time.h yerine ctime kullanalım
using namespace std;

int main() {
    setlocale(LC_ALL, "Turkish"); 

    int tahmin;

    srand(time(NULL));  // Rastgele sayı üretimi için 

    int rastgele_sayi = rand() % 101;  // 0 ile 100 arasında bir rastgele sayı

    cout << "0 ile 100 arasında bir sayı tuttum." << endl;
    cout << "Hadi, tahmin et: ";
    cin >> tahmin;

    // Kullanıcı doğru tahmin edene kadar döngü devam eder
    while (tahmin != rastgele_sayi) {
        if (tahmin < rastgele_sayi) {
            cout << "Daha büyük bir sayı söyleyin: ";
        }
        else {
            cout << "Daha küçük bir sayı söyleyin: ";
        }
        cin >> tahmin;  // Yeni tahmin al
    }

    cout << "Tebrikler! Doğru tahmin ettiniz. Sayı: " << rastgele_sayi << endl;

    return 0;
}
