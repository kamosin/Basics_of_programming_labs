#include <iostream>
#include <cstdlib>

using namespace std;

bool czy_pierwsza (int x)
{
	int licznik=0;
	if(x<2)
		return false;
	for(int i=1;i<=x;i++)
	{
		if(x%i==0)
			licznik++;
	}
	if(licznik==2)
		return true;
	else
	{
		return false;
	}
}
int main()
{
	int d=0,g=0;
	cout<<"Podaj dolna granice badanego przedzialu"<<endl;
	while(d<1){
		cin>>d;
		if(d<1)
			cout<<"Podana liczba jest mniejsza od 1, wprowadz jeszcze raz"<<endl;
	}
	cout<<"Podaj gorna granice badanego przedzialu"<<endl;
	while(g<=d){
		cin>>g;
		if(g<=d)
			cout<<"Podana liczba jest mniejsza/rowna dolnej granicy przedzialu. Podaj liczbe jeszcze raz"<<endl;
	}
	cout<<"Liczby blizniacze to: ";
	while(d<g-1){
		if(czy_pierwsza(d)+czy_pierwsza(d+2)==2)
			cout<<d<<" i "<<d+2<<", ";
		
		d++;
	}
	cout<<endl;
	system("Pause");
}