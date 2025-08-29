/*
sujet:
	Écrivez un programme qui demande à l’utilisateur d’entrer un nombre entier.
  Utilisez une instruction if pour déterminer si le nombre est positif, négatif ou nul.
	Affichez le résultat.
*/
#include<iostream>
using namespace std;
int main()
{
	int number;
	cout<<"Entrer un nombre entier: ";
	cin>>number;
	if(number > 0)
	{
		cout<<"Le nombre est positif"<<endl;
	}else if(number < 0)
	{
		cout<<"Le nombre est negatif"<<endl;
	}else
	{
		cout<<"Le nombre est nul"<<endl;
	}
	return 0;
}
