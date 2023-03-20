#include <iostream>
#include <string.h>
#include <cstdlib>
#include <cmath>

using namespace std;

struct gm{
	char letras[10];
	int* inteiro;
	float* decimal;
	
	
};


int main() {
	gm mx[5];
	int mint[5];
	float mdec[5];
	char *p;
	p = mx->letras;
	mx->inteiro = mint;
	mx->decimal = mdec;
	
	for(int i = 0; i<5; i++){
	cout << "Insira um numero inteiro: " << endl;
	cin >> *mx->inteiro;
	*mx->inteiro = 100;
	mx->inteiro++;
	cout << "Insira um numero decimal: " << endl;
	cin >> *mx->decimal;
	*mx->decimal = 1.99;
	mx->decimal++;
	cout << "Insira uma letra: " << endl;
	cout<<"-----------------------------"<< endl;
	cin >> *p;
	strcpy(p,"w");
	p++;
	
	
	}
	
	
	mx->inteiro = mint;
	mx->decimal = mdec;
	p = mx->letras;
	for(int i = 0; i<5; i++){
		cout << *mx->inteiro<< endl;
		cout << *mx->decimal <<endl;
		cout << *p<< endl;
		mx->inteiro++;
		mx->decimal++;
		p++;
		
		
		
	}
	
	
}
