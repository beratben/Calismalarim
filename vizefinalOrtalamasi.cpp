#include <iostream>
using namespace std;

int main()
{
	double vize, final;
	int ortalama;

	cout << "Vize notunu giriniz:  \n\n\n\n";
	cin >> vize;
	cout << "Final notunu giriniz: \n\n\n\n";
	cin >> final;

	ortalama = vize * 0.40 + final * 0.60;
	cout << ortalama     << endl;

	if (ortalama >= 50) {
		cout << "Gectiniz\n\n\n";
	}
	else {
		cout << "Kaldiniz\n\n\n";
	}
		
}
