//rekursif ile faktoriyel hesaplama
#include <iostream>
using namespace std;
int faktoriyel(int);
int main()
{
	int sayi;
	cout<<"Sayi giriniz:";
	cin>>sayi;
	cout<<sayi<<"!="<<faktoriyel(sayi);
	
	return 0;
}
int faktoriyel(int a)
{
	if(a<1)
	{
		cout<<"yanlis deger girdiniz.\n";
		return -1;
	}
	else if(a==1)
		return a;
	else
		return (a*faktoriyel(a-1));
	
}
//10 4! =24
//24 return 4*6=24
//24 return 3*2=6
//24 return 2*1 = 2
//22 return 1
