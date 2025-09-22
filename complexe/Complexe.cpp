#include<iostream>
#include<cmath>
using namespace std;

struct complexe{
	double re;
	double im;
};
double norm(complexe nbr){
	return sqrt(nbr.re * nbr.re + nbr.im * nbr.im);
}
double arg(complexe nbr){
	return atan2(nbr.re, nbr.im);
}
void affiche(complexe nbr){
	if(!nbr.re && !nbr.im){
		cout<<"0 ";
	}else if(! nbr.im ){
		cout<<showpos<<nbr.re<<" ";
	}else if( ! nbr.re ){
		cout<<showpos<<nbr.im<<"i"<<" ";
	}else{
		cout<<showpos<<nbr.re<<nbr.im<<"i"<<" ";
	}
	cout<<noshowpos<<"le carré sa module est: "<<norm(nbr) * norm(nbr)<<" ,et son argument est: "<<arg(nbr)<<endl;
}
complexe invert(complexe nbr){
	double denom = norm(nbr);
	denom = denom*denom;
	return {nbr.re/denom,
		-nbr.im/denom
		};
}
complexe somme(complexe nbr1, complexe nbr2){
	return{nbr1.re + nbr2.re,
		nbr1.im + nbr2.im
		};
}
complexe soust(complexe nbr1, complexe nbr2){
	return{nbr1.re - nbr2.re,
		nbr1.im - nbr2.im
		};
}
complexe mult(complexe nbr1, complexe nbr2){
	return{nbr1.re * nbr2.re - nbr1.im * nbr2.im,
		nbr1.re * nbr2.im + nbr1.im * nbr2.re,
		};
}
complexe div(complexe nbr1, complexe nbr2){
	return mult(nbr1, invert(nbr2));
}
int main(){
	complexe a, b;
	a.re = 1;
	a.im = 1;
	affiche(somme(a,a));
	affiche(soust(a,a));
	affiche(mult(a,a));
	affiche(div(a,a));
	return 0;
}
