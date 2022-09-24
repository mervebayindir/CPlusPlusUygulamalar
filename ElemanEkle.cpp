#include<iostream>
using namespace std;
#define BOYUT 5
int dizi[BOYUT];
void elemanEkle();
void elemanGoster();
int main()
{
	elemanEkle();
	elemanGoster();
	return 0;
}
void elemanEkle()
{
	int sayac=0;
	do{
		cout<<sayac<<" indisli elemani giriniz:";
		cin>>dizi[sayac];
		sayac++;
		cout<<"Eleman eklendi"<<endl;
	}while(sayac<BOYUT);
	cout<<"Elemanlar eklendi"<<endl;
}
void elemanGoster()
{
	int sayac=0;
	while(sayac<BOYUT)
	{
		cout<<dizi[sayac]<<endl;
		sayac++;	
	}
}
