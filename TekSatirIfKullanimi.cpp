#include <iostream>
using namespace std;
//Ternary if - tek sat�rda if
void TekCift(int);

int main()
{
	TekCift(12);

	return 0;
}

void TekCift(int a)
{
//tek sat�rda if	ko�ul ? do�ruysade�er : yanl��sade�er;
	string sonuc= a%2==0 ? "cift" : "tek";
/*	if(a%2==0)
	sonuc="cift";
	else
	sonuc="tek";*/
	
	cout<<sonuc<<endl;
	
}
