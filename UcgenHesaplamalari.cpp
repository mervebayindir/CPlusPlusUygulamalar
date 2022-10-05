//ucgenin bir kenarýnýn uzunluðu diðer ikikenarýnýn toplamýndan buyuk yada farkýndan kucuk olamaz
//bu kurala göre 2 kenarý kullanýxcý tarafýndan girilen ücgenin 3. kenarýnýn alabileceði deðerleri
//bir diziye atýp ekranda gösterme
#include <iostream>
#include <stdlib.h> //malloc ve free fonksiyonlarý için gereken kütüphane
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

    int fark=baslangic-bitis-1;//iki sayi arasýnda kaç sayý var 
    
    int *dizi=(int*)malloc(fark*sizeof(int));
    
    for(int i=0;i<fark;i++)
    {
    //	baslangic--;
    //	*(dizi+i)=baslangic;
    	
    	*(dizi+i)=--baslangic;
	}
	//elemanlarý ekrana yazma
	cout<<"Ucuncu kenarin olabilecegi degerler:"<<endl;
	for(int i=0;i<fark;i++)
	{
		cout<<dizi[i]<<endl;
	}
	free(dizi);
	return 0;
}
