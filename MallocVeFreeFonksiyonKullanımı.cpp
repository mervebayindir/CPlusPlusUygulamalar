#include <iostream>
#include <stdlib.h> //malloc ve free fonksiyonlar� i�in gereken k�t�phane
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
	//Dizinin elemanlar�n� kullan�c�dan al�p olu�turma
	for(int i=0;i<elemanSayisi;i++)
	{
		cout<<i+1<<". elemani giriniz:";
		cin>>*(dizi+i);
	}
	//elemanlar� ekrana yazma
	for(int i=0;i<elemanSayisi;i++)
	{
		cout<<dizi[i]<<endl;
	}
	//tahsis edilen alan� bo�altma	
	free(dizi);
	
	return 0;
}
