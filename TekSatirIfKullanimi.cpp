#include <iostream>
using namespace std;
//Ternary if - tek satýrda if
void TekCift(int);

int main()
{
	TekCift(12);

	return 0;
}

void TekCift(int a)
{
//tek satýrda if	koþul ? doðruysadeðer : yanlýþsadeðer;
	string sonuc= a%2==0 ? "cift" : "tek";
/*	if(a%2==0)
	sonuc="cift";
	else
	sonuc="tek";*/
	
	cout<<sonuc<<endl;
	
}
