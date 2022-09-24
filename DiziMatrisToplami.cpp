#include<iostream>
using namespace std;
#define SATIR 2
#define SUTUN 3

int main()
{
	int a[SATIR][SUTUN]={{5,3,7},{0,1,2}};
	int b[SATIR][SUTUN]={{1,2,3},{4,5,6}};
	int c[SATIR][SUTUN];
	cout<<"A matrisi: "<<endl;
	for(int i=0; i<SATIR; i++)
	{
		for(int j=0; j<SUTUN; j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
		cout<<"B matrisi: "<<endl;
	for(int i=0; i<SATIR; i++)
	{
		for(int j=0; j<SUTUN; j++)
		{
			cout<<b[i][j]<<" ";
		}
		cout<<"\n";
	}
		cout<<"Matris toplami- C matrisi: "<<endl;
	for(int i=0; i<SATIR; i++)
	{
		for(int j=0; j<SUTUN; j++)
		{
			c[i][j]=a[i][j] + b[i][j];
			cout<<c[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}


/*#include <iostream>
using namespace std;
#define SATIR 2
#define SUTUN 3
int main()
{
int a[SATIR][SUTUN]={{5,3,7},{0,1,2}};
int b[SATIR][SUTUN]={{1,2,3},{4,5,6}};
int c[SATIR][SUTUN];
cout<<"A matrisi: "<<endl;
for(int i=0;i<SATIR;i++)
{
for(int j=0;j<SUTUN;j++)
{
cout<<a[i][j]<<" ";
}
cout<<"\n";
}
cout<<"b matrisi: "<<endl;
for(int i=0;i<SATIR;i++)
{
for(int j=0;j<SUTUN;j++)
{
cout<<b[i][j]<<" ";
}
cout<<"\n";
}
cout<<"Matris Toplami- C matrisi: "<<endl;
for(int i=0;i<SATIR;i++)
{
for(int j=0;j<SUTUN;j++)
{
c[i][j]=a[i][j]+b[i][j];
cout<<c[i][j]<<" ";
}
cout<<"\n";
}
return 0;
}*/
