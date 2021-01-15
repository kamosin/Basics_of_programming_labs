#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void modalna (int *wskaznik,int n, int g, int d)
{
	
	for(int i=0;i<n;i++){
	wskaznik[i]=(rand()%(g-d+1))+d;
	}
	for(int i=0;i<n;i++){
		cout<<wskaznik[i]<<"\t";
	}
	cout<<endl;
	int*tab;
	tab=new int[n];
	int licznik=0, licznik1=0;
	int x=0, y=0;
	int modalna;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(wskaznik[i]==wskaznik[j])
				licznik++;
			else
				licznik1++;	
		}
		if(licznik>x){
			x=licznik;
			modalna=wskaznik[i];
			
		}
		tab[i]=licznik;
		licznik=0;
	}
	for(int i=0;i<n;i++){
		if(tab[i]==x)
			y++;
	}
	if(licznik1==n*n-n)
		cout<<endl<<"Wylosowany zbior liczb nie ma modalnej, kazdy element ma inna wartosc"<<endl;
	else{
		if(y==x)
	cout<<"Najczesciej wystepujaca liczba w zbiorze jest liczba "<<modalna<<" i wystapila ona "<<x<<" razy"<<endl;
		else
			cout<<"Brak modalnej, istnieje wiecej niz jedna wartosc, ktora wystapila "<<x<<" razy"<<endl; 
	}
	delete[] tab;
}

int main()
{
	int d,g,n;
	cout<<"Ile liczb chcesz wygenerowac?"<<endl;
	cin>>n;
	cout<<"Podaj dolna granice przedzialu"<<endl;
	cin>>d;
	cout<<"Podaj gorna granice przedzialu"<<endl;
	cin>>g;
	int *wskaznik;
	wskaznik=new int[n];
	srand(time(NULL));
	modalna(wskaznik,n,g,d);
	delete[] wskaznik;
	cout<<endl;
	
	
	
	system("Pause");
	return 0;
}