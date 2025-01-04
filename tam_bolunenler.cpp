#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");

	int baslangic, bitis, index, bolunecekSayi ;
	cout << "****Girilen Başlangıç ve Bitiş Sayıları Arsında Seçtiğiniz Sayıya Tam Bölünebilen Sayıları Gösteren Program****\n\n\n\n\n\n\n\n";

	cout << "Başlangıç sayısını giriniz: ";
	cin >> baslangic;
	cout << "Bitiş sayısını giriniz:  ";
	cin >>  bitis;
	cout << "Hangi sayıya tam bölünen sayıları  istiyorsunuz ? :";
	cin >> bolunecekSayi;
		

	index = baslangic;

	while (index <= bitis)
	{
		if (index % bolunecekSayi == 0) 
		{
			cout << index << " ";
	
		}

		index++;
	}
	return 0;
}
