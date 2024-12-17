#include <iostream>
#include <cmath>

using namespace std;

int main()
{

	int sifre = 1234;

	int kullaniciBilgisi;
	
	

	cout << "Kullanici sifresini giriniz: \n";
	cin >> kullaniciBilgisi;


	if (kullaniciBilgisi==sifre) 
	{
		cout << "Giris Yapildi \n";
	}
	else
	{
		cout << "Giris Basarisiz!! \n";

	}

	return 0;
}
	
	
