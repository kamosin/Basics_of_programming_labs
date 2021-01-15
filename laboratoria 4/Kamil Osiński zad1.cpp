#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

void palindrom(string n)
{
	int i,j,k,indeks1,indeks2;
	bool czy_palindrom;
	int d=n.length();
	for(i=0;i<d-1;i++){
		for(j=i+3;j<=d;j++){
			indeks1=i;
			indeks2=j-1;
			czy_palindrom=true;
			while(indeks1<indeks2){
				if(n[indeks1]!= n[indeks2])
				{
					czy_palindrom=false;
					break;
				}
				
				indeks1++;
				indeks2--;
			}
			for(k=i;k<j;k++){
				if((char)n[k]==(char)32)
					czy_palindrom=false;
			}
			
			if(czy_palindrom)
			{
				for(k=i;k<j;k++){
					cout<<n[k];
				}
				cout<<", ";
				}
			}
		}
}
int main()
{
	string napis;
	cout<<"Podaj napis"<<endl;
	getline(cin,napis);
	cout<<"W podanym tekscie wystepuja nastepujace palindromy: ";
	palindrom(napis);
	
	cout<<endl;
	system("Pause");
}
