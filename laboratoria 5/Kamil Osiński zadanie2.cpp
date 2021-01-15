#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

double funkcja(double x)
{
	return exp(x-1);
}

int main()
{
	int n=1;
	double xp, xk,s,h,calka,x;
	double E;
	cout<<"Podaj poczatek przedzialu "<<endl;
	cin>>xp;
	cout<<"Podaj koniec przedzialu "<<endl;
	cin>>xk;
	cout<<"Podaj przyblizenie "<<endl;
	cin>>E;
	s=xk-xp;
	do
	{
		n++;
	}while((abs(s/n-s/(n-1)))/abs((s/(n-1)))>=E);
	calka=0;
	h=s/n;
	for(int i=1;i<=n;i++)
	{
		x=xp+i*h;
		calka+=(funkcja(xp+(i-1)*h)+4*funkcja(xp-h/2+i*h)+funkcja(xp+i*h))/6*h;
	}
	cout<<endl<<"Wartosc calki wynosi "<<calka<<endl;
	
	system("Pause");
	return 0;
}