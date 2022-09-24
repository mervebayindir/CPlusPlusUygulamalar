#include<iostream>
using namespace std;

#define MAX 10; //sonuna ( ;) kullanilmaz.

int artir();

int main()
{
	cout<<MAX;
	int yeni= artir();
	cout<<yeni<<endl;
	artir();
	return 0;
}
int artir()
{
	//MAX = MAX+2; //yanlis kullanim.Cunku MAX bir degisken degil
	int a= MAX + 2;
//	int a = 2 + MAX;  #define MAX; yaptýgýmýzda MAX kullanirken sonuna  ( ;) olmasý gerekir.
	return a;	
}
