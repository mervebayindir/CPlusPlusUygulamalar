#include<iostream>
using namespace std;
#define Boyut 5
int main()
{
	int tek[Boyut], cift[Boyut], ciftSayi=0, tekSayi=0, girilenSayi;
	for(int i=1; i<Boyut; i++)
	{
		cout<<i<<". sayiyi giriniz:";
		cin>>girilenSayi;
		if(girilenSayi%2==0)
		{
			cift[ciftSayi]=girilenSayi;
			ciftSayi++;
		}
		else
		{
			tek[tekSayi]=girilenSayi;
			tekSayi++;
		}
	}
	char islem;
	goster:
	cout<<"Hangi diziyi ekrana yazdiralim? (T / C):";
	cin>>islem;
	if(islem=='T' || islem=='t')
	{
		for(int i=0; i<tekSayi; i++)
			cout<<tek[i]<<endl;
	}
		else if(islem=='C' || islem=='c')
	{
		for(int i=0; i<ciftSayi; i++)
			cout<<cift[i]<<endl;
	}
	else
	{
		cout<<"Hatali giris yaptiniz."<<endl;
		goto goster;
	}
	return 0;
}





