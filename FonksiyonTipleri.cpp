/*fonksiyon_tipi fonksiyon_adi(parametre)
{	
	iþlemler
	return .... -> eger geri deðer döndürüyorsa
}
void -> geri deðer döndürmeyen fonksiyon tipi
printf -> deðer döndürmüyor.
pow -> geri deðer döndürür. (2,3)  (2.3,8)
*/

#include <iostream>
using namespace std;

void topla1(); //geri deðer döndürmeyen parametresiz fonksiyon
int topla2();//int tipinde geri deðer döndüren parametresiz fonksiyon
double topla3();//double tipinde geri deðer döndüren parametresiz fonksiyon

int main()
{
	int sonuc;
	double dtoplam;
	//cout<<"Ana fonksiyon"<<endl;
	topla1();
	//cout<<"Ana fonksiyon 2"<<endl;
	
	sonuc= topla2();
	cout<<"Sonuc="<<sonuc<<endl;
	
	dtoplam = topla3();
	cout<<"Sonuc="<<dtoplam<<endl;
	return 0;
}

void topla1() 
{
	//cout<<"topla fonksiyon"<<endl;
	cout<<"8+3= "<<8+3<<endl;
}

int topla2()
{
	int toplam;//yerel deðiþken
	toplam=5+9;
	return toplam; // geri toplam deðiþken deðerini döndürmek
}

double topla3()
{
	double a,b,toplam;
	cout<<"1. sayiyi giriniz:";
	cin>>a;
	cout<<"2. sayiyi giriniz:";
	cin>>b;
	toplam=a+b;
	return toplam;
//	return a+b;
}
