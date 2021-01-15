#include <iostream>
#include <cstdlib>

using namespace std;


int main()
{
	int n;
	cout<<"Podaj liczbe"<<endl;
	cin>>n;
	if(n>1){
		int d=2;
		cout<<"Czynniki pierwsze liczby "<<n<<": ";
		while(n>1)
		{
			while(n%d==0)
			{
				cout<<d<<", ";
				n=n/d;
			}
			d++;
		}
	}
	else{
		cout<<"Podano bledna liczbe";
	}
	
	cout<<endl;
	system("Pause");
}