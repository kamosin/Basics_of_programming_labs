#include <iostream>
#include <cstdlib>

using namespace std;

void zamiana(int a, int b){
	if(a==0){
		return;
	}
	int r=a%b;
	a=a/b;
	zamiana(a,b);
	if(r>9){
		r=r+55;
		char litera=r;
		cout<<litera;
	}
	else
		cout<<r;
}

int main()
{
	int liczba, sys;
	cout<<"Podaj liczbe w systemie dziesietnym"<<endl;
	cin>>liczba;
	cout<<"Na system o jakiej podstawie chcesz ja zamienic?"<<endl;
	cin>>sys;
	while(sys<2 || sys>36){
		cout<<"Nie mozna zamenic liczby na system o danej podstawie, podaj ponownie wartosc w przedziale (2,36)"<<endl;
		cin>>sys;
	}
	cout<<"Liczba "<<liczba<<" w systemie "<<sys<<"-kowym to ";
	zamiana(liczba,sys);
	cout<<endl;
	system("Pause");
	return 0;
}