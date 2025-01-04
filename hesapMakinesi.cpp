#include <iostream>
using namespace std;

int main()
{
	int sayi1, sayi2, islem;

	cout << "Birinci sayiyi giriniz:";
	cin >> sayi1;
	cout << "Ikinci sayiyi giriniz:";
	cin >> sayi2;
	cout << "************************************" << endl;
	cout << "Yapmak istediginiz islemi seciniz:" << endl;
	cout << "1-Toplama" << endl << "2-Cikarma" << endl << "3-Carpma" << endl << "4-Bolme" << endl;;
	cout << "************************************" << endl;
	cin >> islem;
	switch (islem) {
	case 1: cout << "Iki sayinin toplami:" << sayi1 + sayi2 << endl;
		break;
	case 2: cout << "Iki sayinin farki:" << sayi1 - sayi2 << endl;
		break;
	case 3: cout << "Iki sayinin carpimi:" << sayi1 * sayi2 << endl;
		break;
	case 4: cout << "Iki sayinin bolumu:" << sayi1 / sayi2 << endl;
		break;
	default: cout << "Islem degerinin yanlis sectiniz! Lutfen tanimli degerleden birini seciniz";
	}

}
