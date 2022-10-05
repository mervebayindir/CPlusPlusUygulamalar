#include<iostream>
using namespace std;
void satis (double, double, double);
int main()
{
	double x,y,z;
	satis(x,y,z);
	return 0;
}
void satis (double ekmek, double  su, double peynir)
{
	int ekmekAdet,suAdet,peynirAdet;
	double ekmektoplam, sutoplam, peynirtoplam;
	cout<<" Ekmek Adedi=";
	cin>>ekmekAdet;
	cout<<" Su Adedi=";
	cin>>suAdet;
	cout<<" Peynir Adedi=";
	cin>>peynirAdet;
	ekmek = 1.5, su=2.0, peynir=25;
	double toplam;
	ekmektoplam = ekmek * ekmekAdet;
	sutoplam = su * suAdet;
	peynirtoplam = peynir * peynirAdet;
	toplam = (ekmektoplam * 0.08) + (sutoplam * 0.18) + (peynirtoplam * 0.18);
	cout<<" KDV Toplami="<<toplam<<" TL";
}
