//Rastgele olusan 2 dizinin toplami
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
#define Boyut 10
int a[Boyut], b[Boyut], c[Boyut];
void  DiziOlustur(int[], int);
void DiziGoster(int[],int);
void DiziTopla(int[], int[], int[]);
int main()
{
	srand(time(NULL));
	DiziOlustur(a, Boyut);
	cout<<"a dizisi olusturuldu"<<endl;
	DiziOlustur(b, Boyut);
	cout<<"b dizisi olusturuldu"<<endl;
	cout<<"a dizisi: "<<endl;
	DiziGoster(a,Boyut);
	cout<<"b dizisi: "<<endl;
	DiziGoster(b,Boyut);
	DiziTopla(a,b,c);
	cout<<"Diziler Toplandi."<<endl;
	DiziGoster(c,Boyut);
	return 0;
}
void DiziOlustur(int dizi[], int uzunluk)
{
	//srand(time(NULL));
	for(int i=0; i<uzunluk; i++)
	{
		dizi[i]=rand()%100;
	}
}
void DiziGoster(int dizi[],int uzunluk)
{
	for(int i=0; i<uzunluk; i++)
	cout<<dizi[i]<<endl;
}
void DiziTopla(int dizi1[], int dizi2[], int toplamDizisi[])
{
	for(int i=0; i<Boyut; i++)
	toplamDizisi[i]=dizi1[i] + dizi2[i];
}

