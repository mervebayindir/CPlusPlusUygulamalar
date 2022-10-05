#include<iostream>
using namespace std;
void Icecek(int);
int main()
{
	int x;
	Icecek(x);
	return 0;
}
void Icecek(int ml)
{
	int litre, koli, miliLitre, toplam;
	cout<<"Meyve suyu miktarini giriniz= ";
	cin>>litre;
	cout<<"Sise kac ml= ";
	cin>>miliLitre;
	cout<<"Bir kolide kac sise olucak= ";
	cin>>koli;
	ml = litre * 1000;
	toplam = ml / miliLitre;
	cout<<"\n"<<"Toplam sise="<<toplam<<endl;
	koli = toplam / koli;
	cout<<"Toplam mililitre meyve suyu= "<<ml<<" ml"<<endl;
	cout<<koli<<" Adet Koli olmustur.";
}
