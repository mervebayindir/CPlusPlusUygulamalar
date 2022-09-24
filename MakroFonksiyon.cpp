#include<iostream>
using namespace std;
//MAKRO FONKSIYON
#define topla(a,b) (a+b)
#define kare(x) (x*x)
#define feet(x) (x*3.28)
#define buyuk(a,b) (a>b ? a : a<b ? b : 0)
#define yaz() cout<<"Hello";
int main()
{
	cout<<topla(5,9)<<endl;
	cout<<kare(5)<<endl;
	cout<<feet(0.3)<<endl;
	cout<<buyuk(25,25);
	
	int a=45, b=25;
	string sonuc = a>b ? "a buyuk" : a==b  ? "Esit" : "b buyuk"; 
	cout<<sonuc<<endl;
	
	yaz()
	return 0;
}
