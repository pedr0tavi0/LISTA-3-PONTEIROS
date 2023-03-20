#include <iostream>
#include <math.h>
#include <cstdlib>
#include <string.h>
#include <locale.h>
using namespace std;

struct Produto {
		char nome[30];
		int *codigo;         
		double  *preco; 
		char fornecedor[50];   
};


int main() {
	Produto p[5];
	cout<<"### INSERINDO PRODUTOS ###" << endl; 
	for(int i=0; i<5; i++){
		cout<<"insira o nome do produto:"<< endl;
		cin>>p[i].nome;
		cout
	}
	
	return 0;
}
