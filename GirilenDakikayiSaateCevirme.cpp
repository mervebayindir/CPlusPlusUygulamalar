//Girilen dakikay� saat:dakika formata d�n��t�ren
#include <iostream>
using namespace std;
void donustur(int);
int main()
{
	int dakika;
	cout<<"Dakikayi giriniz:";
	cin>>dakika;
	donustur(dakika);
	
	return 0;
}
void donustur(int toplamDakika) 
{
	int saat,dakika;
	saat=toplamDakika/60; 
	dakika=toplamDakika%60; 
	cout<<saat<<":"<<dakika;
	
}
