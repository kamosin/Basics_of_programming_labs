#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

long long int fib_rekur(int n)
{
	if(n==1 || n==2) return 1;
	else
		return fib_rekur(n-2)+fib_rekur(n-1);
}

long long int fib_iter(int n)
{
	int a=0, b=1;
	for(int i=1; i<n;i++)
	{
		b=a+b;
		a=b-a;
	}
	return b;
	
}

int main()
{
	int n;
	clock_t zacznij, skoncz;
	double czas;
	cout<<"Ktory wyraz ciagu chcesz obliczyc?"<<endl;
	cin>>n;
	
	zacznij=clock();
	
	cout<<"Rekurencyjnie "<<fib_rekur(n)<<endl;
	
	skoncz=clock();
	czas=(double)(skoncz-zacznij)/CLOCKS_PER_SEC;
	cout<<"Czas przy wyznaczaniu rekurencyjnym wynosi "<<czas<<endl;
	
	zacznij=clock();
	
	cout<<endl<<"Iteracyjnie "<<fib_iter(n)<<endl;
	
	skoncz=clock();
	czas=(double)(skoncz-zacznij)/CLOCKS_PER_SEC;
	cout<<"Czas przy wyznaczaniu iteracyjnym wynosi "<<czas;
	
}