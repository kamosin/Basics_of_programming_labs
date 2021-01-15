#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
void inicjalizacja(int**tablica,int**tablica2, int n, int k)
{	
	srand(time(NULL));
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			tablica[i][j]=(rand()%(2*k+1))-k;
			tablica2[i][j]=(rand()%(2*k+1))-k;
		}
	}
}
void wypisz(int**tab,int n)
{
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout.width(5);
			cout<<tab[i][j];
		}
		cout<<endl;
	}
	cout<<endl;
}
int** mnozenie_macierzy(int**tablica1, int**tablica2, int n)
{
	int**tab3;
	tab3=new int*[n];
	for(int i=0;i<n;i++)
		tab3[i]=new int[n];
	
	int suma;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			suma=0;
			for(int k=0;k<n;k++)
			{
				suma+=tablica1[i][k]*tablica2[k][j];
				tab3[i][j]=suma;
			}
		}
	}
	return tab3;
}
double srednia(int **tab,int n)
{
	int suma=0;
	double srednia=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			suma+=tab[i][j];
		}
	}
	srednia=suma/(n*n);
	return srednia;
}
int suma_elementow(int **tab,int n)
{
	int suma=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j)
				suma+=tab[i][j];
		}	
	}
	return suma;
}
int main()
{
	int n,k;
	int**tab1;
	int**tab2;
	int**tab_wynik;
	
	cout<<"Podaj wymiar macierzy"<<endl;
	cin>>n;
	cout<<"Podaj przedzial losowania liczb (1 liczba)"<<endl;
	cin>>k;
	tab1=new int*[n];
	for(int i=0;i<n;i++)
		tab1[i]=new int[n];
	
	tab2=new int*[n];
	for(int i=0;i<n;i++)
		tab2[i]=new int[n];
	
	inicjalizacja(tab1,tab2,n,k);
	cout<<"Elementy macierzy 1:"<<endl;
	wypisz(tab1,n);
	cout<<"Elementy macierzy 2:"<<endl;	
	wypisz(tab2,n);
	cout<<"Elementy macierzy wynikowej:"<<endl;
	tab_wynik=mnozenie_macierzy(tab1,tab2,n);
	wypisz(tab_wynik,n);
	cout<<"Srednia liczb w macierzy wynikowej ma wartosc "<<srednia(tab_wynik,n)<<endl;
	cout<<"Suma liczb na glownej przekatnej wynosi"<<suma_elementow(tab_wynik,n)<<endl;
	
	for(int i=0;i<n;i++){
		delete[] tab1[i];
		delete[] tab2[i];
	}
	delete [] tab1;
	delete [] tab2;
	
	system("Pause");		
}