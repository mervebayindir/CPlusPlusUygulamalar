#include<iostream>
using namespace std;
void a(int, int);
int main()
{
	int x, y;
	cout<<"1. sayiyi giriniz=";
	cin>>x;
	cout<<"2. sayiyi giriniz=";
	cin>>y;
	a(x,y);
	return 0;	
}
void a(int x, int y)
{
	int sonuc2=1;
	int sonuc3=1, toplam;
	for(int i=x; i>=1; i--)
	{
		sonuc2=sonuc2 * i;
	}
	toplam= x - y;
	for(int j=toplam; j>=1; j--)
	{
		sonuc3= sonuc3 * j;
	}
	cout<<x<<"!="<<sonuc2<<endl;
	cout<<"x-y="<<toplam<<endl;
	cout<<"(x-y)!="<<sonuc3<<endl;
	cout<<"sonuc="<< (sonuc3 * sonuc2) / sonuc2<<endl;
}

