#include <iostream>
using namespace std;
int dizi[5];
int indeks=0;
int elemanEkle();

#define Goster(x) for(int i=0;i<x;i++){cout<<dizi[i]<<endl;}
#define GosterTersten(x) for(int i=0;i<x;i++){indeks--;cout<<dizi[indeks]<<endl;}
int main()
{
	string uyari;
	
	for(int i=0;i<5;i++)
	{
		uyari = elemanEkle() == 1 ? "Ekleme islemi basarili": "Ekleme islemi basarisiz";
		cout<<uyari<<endl;
	}
	
	Goster(5);
	cout<<"Tersten gosterim"<<endl;
	GosterTersten(5);
	return 0;
}

int elemanEkle()
{
	cout<<indeks<<". elemani giriniz:";
	cin>>dizi[indeks];
	indeks++;
	return 1;
}
