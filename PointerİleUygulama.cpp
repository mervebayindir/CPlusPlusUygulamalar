//ucgenin bir kenarinin uzunlugu diger iki kenarinin toplamindan buyuk yada farkindan kucuk olamaz
//bu kurala g�re 2 kenari kullanici tarafindan girilen 3. kenarinin alabilecegi degerleri bir diziye at�p ekranda g�sterme
#include<iostream>
#include<stdlib.h> //malloc ve free fonksiyonlari i�in gereken k�t�phane
using namespace std;
int main()
{
	int k1,k2;
	cout<<"Ucgenin 2 kenarini giriniz:";
	cin>>k1>>k2;
	
	int baslangic=k1+k2;
	int bitis=k1>k2 ? k1-k2 : k2-k1;
	//int bitis=fabs(k1-k2);
	int fark=baslangic-bitis-1;//iki sayi arasinda kac sayi var
	int *dizi=(int*)malloc(fark*sizeof(int));
	for(int i=0; i<fark; i++)
	{
	//	baslangic--;
	//	*(dizi+i)=baslangic;
		
		*(dizi+i)=--baslangic;
	}
		for(int i=0; i<fark; i++)
	{
		cout<<dizi[i]<<endl;
	}
	free (dizi);
	return 0;
}
