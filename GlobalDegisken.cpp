#include <iostream>
using namespace std;
int sayi; //global degi�ken
void Degistir();
int main()
{
	int a=5;////ana fonksiyonun yerel de�i�keni
	sayi=10;
	cout<<"Ana fonksiyon" <<sayi<<endl;
	Degistir();
	
	cout<<"Ana fonksiyon" <<sayi<<endl;
	return 0;
}
void Degistir()
{
	int a=15; //de�i�tir fonksiyonu yerel de�i�keni
	cout<<"Degistir fonksiyonu "<< sayi<<endl;
	sayi=30;
	cout<<"Degistir fonksiyonu "<< sayi<<endl;
}
