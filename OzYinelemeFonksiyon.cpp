/*Kullan�c�n�n girdi�i say�dan s�f�ra kadar olan say�lar� �zyinelemeli fonksiyon kullanarak yazd�rma*/
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




