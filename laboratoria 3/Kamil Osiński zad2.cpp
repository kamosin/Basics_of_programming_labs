#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void losowanie_i_sortowanie(int *tablica, int n)
{
	srand(time(NULL));
	for(int i=0;i<n;i++){
		tablica[i]=rand()%101;
	}
	for(int i=0;i<n;i++)
		cout<<tablica[i]<<" ";
	int p, x;
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		p=i;
		for(int j=i;j<n;j++){
			if(tablica[p]>tablica[j]){
				p=j;
			}
		}
		
		x=tablica[i];
		tablica[i]=tablica[p];
		tablica[p]=x;
	}
	cout<<endl<<"Po sortowaniu: ";
	for(int i=0;i<n;i++)
		cout<<tablica[i]<<" ";
}
int main()
{
	int n;
	cout<<"Ile liczb chcesz wylosowac"<<endl;
	cin>>n;
	int *tablica;
	tablica=new int[n];
	losowanie_i_sortowanie(tablica,n);
	delete[] tablica;
	
	cout<<endl;
	system("Pause");
	return 0;
}