#include <iostream>
#include <stdlib.h> //malloc ve free fonksiyonlarý için gereken kütüphane
using namespace std;
int main()
{
	int elemanSayisi=0;
	int *dizi;
	
	cout<<"Eleman sayisini giriniz:";
	cin>>elemanSayisi;
	//ramde elemansayisi kadar alan tahsis ettik
	dizi=(int*)malloc(elemanSayisi*sizeof(int));
	
    cout<<"Ilk elemanin adresi:"<<dizi<<endl;
	cout<<"Son elemanin adresi:"<<dizi+elemanSayisi<<endl;
	//Dizinin elemanlarýný kullanýcýdan alýp oluþturma
	for(int i=0;i<elemanSayisi;i++)
	{
		cout<<i+1<<". elemani giriniz:";
		cin>>*(dizi+i);
	}
	//elemanlarý ekrana yazma
	for(int i=0;i<elemanSayisi;i++)
	{
		cout<<dizi[i]<<endl;
	}
	//tahsis edilen alaný boþaltma	
	free(dizi);
	
	return 0;
}
