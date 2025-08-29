/*
sujet:
	Écrivez un programme qui crée un tableau de 10 nombres entiers.
	Remplissez le tableau avec des valeurs aléatoires, puis affichez le contenu du tableau.
*/
#include<iostream>
#include<random>

using namespace std;
int main()
{
	int tab[10];
	int i;
	int j;
	default_random_engine re;
	uniform_int_distribution<int>distrib{ 1};
	i = 0;
	j = 0;
	for(i ;i < 10; i++)
	{
		tab[i] = distrib(re);
	}
	for(j ;j < 10;j++)
	{
		cout<<tab[j]<<" | ";
	}
	cout<<endl;
	return 0;
}
