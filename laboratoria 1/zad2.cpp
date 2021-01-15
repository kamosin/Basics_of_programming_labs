#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

void szukanie_litery ( char* wskaznik, int d, char x, char y)
{
	int ilosc=0;
	for(int i=0;i<d;i++){
		if(*wskaznik==x || *wskaznik==y){
			ilosc=ilosc+1;
		}
		wskaznik++;
	}
	cout<<ilosc<<" znakow "<<x<<", ";
}

int main()
{
	string napis;
	getline(cin,napis);
	int dlugosc;
	char * wsk=&napis[0];
	dlugosc=napis.length();
	cout<<"Podany tekst ma ";
	szukanie_litery(wsk,dlugosc,'a','A');
	szukanie_litery(wsk,dlugosc,'e','E');
	szukanie_litery(wsk,dlugosc,'i','I');
	szukanie_litery(wsk,dlugosc,'o','O');
	szukanie_litery(wsk,dlugosc,'u','U');
	cout<<endl;
	
	
	system("Pause");
	return 0;
}