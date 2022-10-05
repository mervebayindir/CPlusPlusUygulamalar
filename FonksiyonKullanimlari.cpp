#include <iostream>
using namespace std;
#define BOYUT 5 
int dizi[BOYUT];
void elemanEkle();
void elemanGoster();
void enKucuk();
void Sirala();
int main()
{
	elemanEkle();
	enKucuk();
	cout<<"Dizinin siralanmamis hali:"<<endl;
	elemanGoster();
	Sirala();
	cout<<"Dizinin siralanmis hali:"<<endl;
	elemanGoster();
}


void elemanEkle()
{
	int sayac=0;
	do{
		cout<<sayac<<" indisli elemani giriniz:";
		cin>>dizi[sayac];
		sayac++;
		
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
void enKucuk()
{
	int enKucuk=dizi[0];
	int kucukIndis=0;
	for(int i=0;i<BOYUT;i++)
	{
		if(dizi[i]<enKucuk)
		{
			enKucuk=dizi[i];
			kucukIndis=i;
		}
			
	}
	cout<<"En kucuk eleman= "<<enKucuk<<endl;
	cout<<"En kucuk elemanin indisi= "<<kucukIndis<<endl;
}
void Sirala()
{
	int temp;
	for(int i=0;i<BOYUT;i++)
	{
		for(int j=i+1;j<BOYUT;j++)
		{
			if(dizi[j]<dizi[i])
			{
				temp=dizi[i];
				dizi[i]=dizi[j];
				dizi[j]=temp;
			}
		}
	}
	cout<<"Siralandi"<<endl;
}




