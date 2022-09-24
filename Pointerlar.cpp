#include<iostream>
using namespace std;
int main(){
	int sayilar[]={5,3,55,21,98};
	int* pointer=sayilar;  //dizinin ilk elemanin adresini tutar
	// int* ptr=sayilar[0]; dizinin ilk elemanin adresini tutar
	cout<<"1. elemanin adresi :"<<pointer<<endl;
	cout<<"1. elemani:"<<*pointer<<endl;
	pointer++;  //pointer=pointer+sizeof(int);
	cout<<"2. elemanin adresi : "<<pointer<<endl;
	cout<<"2. elemani:"<<*pointer<<endl;
	cout<<"5. elemanin adresi : "<<pointer+3<<endl; //pointer+3 sizeof(int)
	cout<<"5. elemani:"<<*(pointer+3)<<endl;
	return 0;
}


