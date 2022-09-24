#include <iostream>
#include "Degerli"
using namespace
int main()
{
	//Girilen sayinin kaç basamak oldugunu bulan
	cout<<"Bir sayi giriniz: ";
	cin>>sayi;
	if(sayi<0)
	{
		cout<<"Negatif bir sayi girdiniz.";
		return BASARISIZ;
	}
	n=sayi;
	while(n>0)
	{
		n=n/10;
		b++;
	}
	cout<<sayi<<" sayisi "<<b<<" basamakli bir sayidir";
	return BASARILI;
}
