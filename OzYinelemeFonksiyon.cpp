/*Kullanýcýnýn girdiði sayýdan sýfýra kadar olan sayýlarý özyinelemeli fonksiyon kullanarak yazdýrma*/
#include <iostream>
using namespace std;
void yaz(int);
int main()
{
	int sayi;
	cout<<"Kactan baslayalim:";
	cin>>sayi;
	yaz(sayi);
	cout<<sayi;	
	return 0;
}
void yaz(int a)
{
	cout<<a<<endl;
	if(a>0)
		yaz(a-1);
	
	cout<<a<<endl;
}




