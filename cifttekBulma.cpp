#include <iostream>
using namespace std;

int main()
{
	int sayi;
	cout << "Bir sayi giriniz:";
	cin >> sayi;

	if (sayi % 2 == 0) {
		cout << "Sayi cifttir.";
	}

	else
		cout << "Sayi tektir.";

}
