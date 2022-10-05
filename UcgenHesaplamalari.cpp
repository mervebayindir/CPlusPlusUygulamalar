//ucgenin bir kenar�n�n uzunlu�u di�er ikikenar�n�n toplam�ndan buyuk yada fark�ndan kucuk olamaz
//bu kurala g�re 2 kenar� kullan�xc� taraf�ndan girilen �cgenin 3. kenar�n�n alabilece�i de�erleri
//bir diziye at�p ekranda g�sterme
#include <iostream>
#include <stdlib.h> //malloc ve free fonksiyonlar� i�in gereken k�t�phane
#include <math.h>
using namespace std;
int main()
{
	int k1,k2;
	cout<<"Ucgenin 2 kenarini giriniz:";
	cin>>k1>>k2;
	
	int baslangic=k1+k2;
	int bitis=k1>k2 ? k1-k2 : k2-k1;
//	int bitis=fabs(k1-k2);

    int fark=baslangic-bitis-1;//iki sayi aras�nda ka� say� var 
    
    int *dizi=(int*)malloc(fark*sizeof(int));
    
    for(int i=0;i<fark;i++)
    {
    //	baslangic--;
    //	*(dizi+i)=baslangic;
    	
    	*(dizi+i)=--baslangic;
	}
	//elemanlar� ekrana yazma
	cout<<"Ucuncu kenarin olabilecegi degerler:"<<endl;
	for(int i=0;i<fark;i++)
	{
		cout<<dizi[i]<<endl;
	}
	free(dizi);
	return 0;
}
