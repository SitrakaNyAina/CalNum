#include<iostream>
#include<cmath>
using namespace std;
struct Quater{
	double re;
	double i;
	double j;
	double k;
	Quater(double re = 0.0, double i = 0.0, double j = 0.0, double k = 0.0) : re(re), i(i), j(j), k(k) {}
};
double norm(Quater nbr){
	return sqrt(nbr.re*nbr.re+nbr.i*nbr.i+nbr.j*nbr.j+nbr.k*nbr.k);
}
Quater invert(Quater nbr){
	double denom = norm(nbr)*norm(nbr);
	return {nbr.re / denom,
		nbr.i / denom,
		nbr.j / denom,
		nbr.k / denom};
}
Quater somme(Quater nbr1, Quater nbr2){
	return {nbr1.re + nbr2.re,
		nbr1.i + nbr2.i,
		nbr1.j + nbr2.j,
		nbr1.k + nbr2.k};
}
Quater soust(Quater nbr1, Quater nbr2){
        return {nbr1.re - nbr2.re,
                nbr1.i - nbr2.i,
                nbr1.j - nbr2.j,
                nbr1.k - nbr2.k};
}
Quater mult(Quater nbr1, Quater nbr2){
	return {nbr1.re*nbr2.re - nbr1.i*nbr2.i - nbr1.j*nbr2.j - nbr1.k*nbr2.k,
		nbr1.re*nbr2.i + nbr1.i*nbr2.re + nbr1.j*nbr2.k - nbr1.k*nbr2.j,
		nbr1.re*nbr2.j - nbr1.i*nbr2.k + nbr1.j*nbr2.re + nbr1.k*nbr2.i,
		nbr1.re*nbr2.k + nbr1.i*nbr2.j - nbr1.j*nbr2.i + nbr1.k*nbr2.re};
}
Quater div(Quater nbr1, Quater nbr2){
	return mult(nbr1, invert(nbr2));
}
int main(){
	return 0;
}
