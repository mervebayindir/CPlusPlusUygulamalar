#include <iostream>
#include <cmath>
using namespace std;
void alan(int,int,int);
int main()
{
	int a,b,c;
	cout<<"a=";
	cin>>a;
	cout<<"b=";
	cin>>b;
	cout<<"c=";
	cin>>c;
	alan(a,b,c);
	return 0;
}
void alan(int a,int b,int c)
{
	int u=(a+b+c)/2;
	double alan=sqrt(u*(u-a)*(u-b)*(u-c));
	cout<<"alan="<<alan;
}
