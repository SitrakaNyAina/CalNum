/*
sujet:
	Ecrivez une fonction qui prend deux nombres entiers en argument et retourne leur somme.
	Appelez cette fonction depuis votre programme principal et affichez le résultat
*/
#include<iostream>
using namespace std;
int somme(int number_a, int number_b)
{
	return number_a + number_b;
};
int main()
{
	int number_1;
	int number_2;
	//ce n'est demander mais on le fait 🤭
	cout<<"Entrez un nombre A: ";
	cin>>number_1;
	cout<<"Entrez un nombre B: ";
	cin>>number_2;
	cout<<"Leur somme est: "<<somme(number_1, number_2)<<endl;
	return 0;
}