#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	srand(time(0));
	for(int i=0;i<50;i++)
		//cout<<rand()<<endl; //short int de�eri aral��� i�erisinde rastgele say� �retir
		//cout<<rand()%50<<endl; //0-50 aras�nda rastgele say� �retir
		cout<<rand()%50 + 10<<endl; //10-60 aras�nda rastgele say� �retir
	return 0;
}
