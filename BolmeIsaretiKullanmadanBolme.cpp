//kullanýcýnýn girdiði iki sayýyý bolme iþareti kullanmadan bolup ekrana yazmak
#include <iostream>
using namespace std;
int bol(int,int);
int main()
{
	int sayi1,sayi2;
	cout<<"Iki sayi giriniz:";
	cin>>sayi1>>sayi2;
	cout<<"Yaz="<<bol(sayi1,sayi2);
	return 1;
}
int bol(int bolunen,int bolen)
{
	if(bolunen==0 || bolen==0) 
		return 0;
	else if(bolunen-bolen<bolen)
		return 1;
	else 
		return (1+bol(bolunen-bolen,bolen));
}

//10 - yaz= 2
//20 return 2
//18 return 1;
