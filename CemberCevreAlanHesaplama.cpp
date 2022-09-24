#include<iostream>
#include<cmath>
using namespace std;
const double pi=3.14; //"const" sabit degiskendir.
double AlanHesapla(int);
double CevreHesapla(int);
int main()
{
	//pi=pi+1.7; hatali olur.
	int r;
	double alan, cevre;
	cout<<"Cemberin yaricapini giriniz : ";
	cin>>r;
	alan = AlanHesapla(r);
	cout<<"Cemberin alani ="<<alan<<endl;
	
	cevre = CevreHesapla(r);
	cout<<"Cemberin cevresi ="<<cevre<<endl;
	return 0;
}
double AlanHesapla(int r)
{
	//double alan = pi * r * r;
	double alan = pi * pow(r,2);
	return alan;
}
double CevreHesapla(int r)
{
	double cevre = 2 * pi *r;
	return cevre;
}

