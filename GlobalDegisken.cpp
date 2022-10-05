#include <iostream>
using namespace std;
int sayi; //global degiþken
void Degistir();
int main()
{
	int a=5;////ana fonksiyonun yerel deðiþkeni
	sayi=10;
	cout<<"Ana fonksiyon" <<sayi<<endl;
	Degistir();
	
	cout<<"Ana fonksiyon" <<sayi<<endl;
	return 0;
}
void Degistir()
{
	int a=15; //deðiþtir fonksiyonu yerel deðiþkeni
	cout<<"Degistir fonksiyonu "<< sayi<<endl;
	sayi=30;
	cout<<"Degistir fonksiyonu "<< sayi<<endl;
}
