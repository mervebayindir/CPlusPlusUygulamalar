/*fonksiyon_tipi fonksiyon_adi(parametre)
{	
	i�lemler
	return .... -> eger geri de�er d�nd�r�yorsa
}
void -> geri de�er d�nd�rmeyen fonksiyon tipi
printf -> de�er d�nd�rm�yor.
pow -> geri de�er d�nd�r�r. (2,3)  (2.3,8)
*/

#include <iostream>
using namespace std;

void topla1(); //geri de�er d�nd�rmeyen parametresiz fonksiyon
int topla2();//int tipinde geri de�er d�nd�ren parametresiz fonksiyon
double topla3();//double tipinde geri de�er d�nd�ren parametresiz fonksiyon

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
	int toplam;//yerel de�i�ken
	toplam=5+9;
	return toplam; // geri toplam de�i�ken de�erini d�nd�rmek
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
