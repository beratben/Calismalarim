#include <iostream>
using namespace std;
float kgdantona(float);
int main()
{
setlocale(LC_ALL, "Turkish");

	
	float kg, ton;
	cout << "Ton a çevrilecek kg giriniz ; " << endl;
	cin >> kg;
	ton = kgdantona(kg);
	cout << kg << " kg " << ton << " ton dur. " << endl;

}
float kgdantona(float kg)
{
	return kg / 1000;
}
