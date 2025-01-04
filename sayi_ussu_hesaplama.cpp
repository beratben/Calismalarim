#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int sonuc, x, y;

	cout << "Lutfen ussunu almak istediginiz sayiyi giriniz: \n ";

	cin >> x;
	cout << "Lutfen ussu giriniz : \n ";
	cin >> y;

	sonuc = pow(x, y);
	cout << "Sayinizin " << y << "  ussunun cevabi : \n " << sonuc << endl;

	
}
