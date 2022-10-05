#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	srand(time(0));
	for(int i=0;i<50;i++)
		//cout<<rand()<<endl; //short int deðeri aralýðý içerisinde rastgele sayý üretir
		//cout<<rand()%50<<endl; //0-50 arasýnda rastgele sayý üretir
		cout<<rand()%50 + 10<<endl; //10-60 arasýnda rastgele sayý üretir
	return 0;
}
