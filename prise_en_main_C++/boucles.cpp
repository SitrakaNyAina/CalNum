/*
sujet:
	Écrivez un programme qui utilise une boucle for pour afficher les nombres de 1 à 10.
	Ensuite, utilisez une boucle while pour afficher les nombres de 10 à 1.
*/
#include<iostream>
using namespace std;
int main()
{
	int i;
	i = 1;
	for(i; i <= 10; i++)
	{
		cout<<i<<endl;
	}
	i = 10;
	while( i >= 1)
	{
		cout<<i<<endl;
		i--;
	}
	return 0;
}
