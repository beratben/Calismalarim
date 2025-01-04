#include <iostream>
using namespace std;

int main()
{
	int sayi;
	cout << "Bir sayi giriniz:";
	cin >> sayi;

	if (sayi < 10) {
		cout << "Sayi 10'dan kucuktur.";
	}
	else if (sayi > 10) {
		cout << "Sayi 10'dan buyuktur";
	}
	else
		cout << "Sayi 10'a esittir";

}
