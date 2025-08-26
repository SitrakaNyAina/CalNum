/*
sujet:
	Ecrivez un programme qui effectue des opérations arithmétiques de base:
   addition, soustraction, multiplication et division sur deux nombres entiers.
	Affichez les résultats
*/
#include<iostream>
using namespace std;
int main()
{
	int number_a;
	int number_b;
	cout<<"Entrez un nombre entier a: ";
	cin>>number_a;
	cout<<"Entez un nombre entier b: ";
	cin>>number_b;
	cout<<number_a<<" + "<<number_b<<" = "<<number_a + number_b<<endl;
        cout<<number_a<<" - "<<number_b<<" = "<<number_a - number_b<<endl;
        cout<<number_a<<" * "<<number_b<<" = "<<number_a * number_b<<endl;
	if(number_b != 0)
	{
        //attetion ceci renvoi la partie entière de a/b
		cout<<number_a<<" / "<<number_b<<" = "<<number_a / number_b<<endl;
	}else
	{
		cout<<"impossible une divion sur 0"<<endl;
	}
	return 0;
}
