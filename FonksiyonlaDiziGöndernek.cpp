#include <iostream>
using namespace std;
void elemanEkle(int[],int); //fonk. parametresi olarak dizi göndermek
int main()
{
	int boyut;
	cout<<"Dizi uzunlugunu giriniz:";
	cin>>boyut;
	
	int dizi[boyut];
	elemanEkle(dizi,boyut);
	
	return 0;
}

void elemanEkle(int dizi[],int boyut)
{
	int sayac=0;
	do{
		cout<<sayac<<" indisli elemani giriniz:";
		cin>>dizi[sayac];
		sayac++;
		cout<<"Eleman eklendi"<<endl;
	}while(sayac<boyut);
}
