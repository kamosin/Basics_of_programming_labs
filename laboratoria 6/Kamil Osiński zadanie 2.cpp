#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string>
using namespace std;

struct PUNKT
{
	double x,y;
	string nazwa;
	double odleglosc(const double xx, const double yy)
	{
		return sqrt((xx-x)*(xx-x)+(yy-y)*(yy-y));
	}
	
};

void wyswietl_dane(PUNKT* tab, int n)
{
	system("cls");
	for(int i=0;i<n;i++)
	{
		cout<<"Punkt "<<tab[i].nazwa<<": ("<<tab[i].x<<","<<tab[i].y<<")"<<endl;
	}
}
int main()
{
	int m;
	cout<<"Podaj ilosc punktow"<<endl;
	cin>>m;
	
	PUNKT *tablica=new PUNKT[m];
	
	for(int i=0;i<m;i++)
	{
		cout<<"Podaj nazwe "<<i+1<<" punktu "<<endl;
		cin>>tablica[i].nazwa;
		cout<<"Podaj wspolrzedna x "<<i+1<<" punktu"<<endl;
		cin>>tablica[i].x;
		cout<<"Podaj wspolrzedna y "<<i+1<<" punktu"<<endl;
		cin>>tablica[i].y;
	}
	
	for(int i=0;i<m;i++)
	{
		cout<<tablica[i].nazwa<<", "<<tablica[i].x<<", "<<tablica[i].y<<endl;
	}
	double dmin=tablica[0].odleglosc(tablica[1].x, tablica[1].y);
	double dmax=tablica[0].odleglosc(tablica[1].x, tablica[1].y);
	
	PUNKT*punktminimalny1=&tablica[0];
	PUNKT*punktminimalny2=&tablica[1];
	
	PUNKT*punktmaksymalny1=&tablica[0];
	PUNKT*punktmaksymalny2=&tablica[1];	
	
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			if(i!=j){
				if(tablica[i].odleglosc(tablica[j].x,tablica[j].y)>dmax){
					dmax=tablica[i].odleglosc(tablica[j].x,tablica[j].y);
					punktmaksymalny1=&tablica[i];
					punktmaksymalny2=&tablica[j];
				}
				if(tablica[i].odleglosc(tablica[j].x,tablica[j].y)<dmin){
					dmin=tablica[i].odleglosc(tablica[j].x,tablica[j].y);
					punktminimalny1=&tablica[i];
					punktminimalny2=&tablica[j];
				}
				
			}
		}
	}
	wyswietl_dane(tablica,m);
	cout<<"Najmniej oddalone od siebie sa punkty " <<(*punktminimalny1).nazwa<<" oraz " <<(*punktminimalny2).nazwa<<" (odleglosc="<<dmin<<")"<<endl;
	cout<<"Najbardziej oddalone od siebie sa punkty " <<(*punktmaksymalny1).nazwa<<" oraz " <<(*punktmaksymalny2).nazwa<<" (odleglosc="<<dmax<<")"<<endl;
	
	delete[] tablica;
	
	system("Pause");
	return 0;
}