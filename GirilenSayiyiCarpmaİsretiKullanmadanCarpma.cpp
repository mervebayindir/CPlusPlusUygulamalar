//kullanýcýnýn girdiði iki sayýyý çarpma iþareti kullanmadan çarpýp ekrana yazmak
#include <iostream>
using namespace std;
int carp(int,int);
int main()
{
	int sayi1,sayi2;
	cout<<"Iki sayi giriniz:";
	cin>>sayi1>>sayi2;
	cout<<"Yaz="<<carp(sayi1,sayi2);
	return 1;
}
int carp(int a,int b)
{
	int sonuc;
	if(a==0 || b==0) //yutan eleman
		sonuc=0;
	else if(a==1) //etkisiz eleman
		sonuc=b;
	else
		sonuc=b+carp(a-1,b);
	
	return sonuc;
}
//10 -  Yaz = 12
//21 sonuc=12;
//21 sonuc=8;
//18 sonuc=4;


