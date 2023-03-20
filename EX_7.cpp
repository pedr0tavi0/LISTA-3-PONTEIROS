#include <iostream>
#include <math.h>
#include <cstdlib>
#include <string.h>
#include <locale.h>
using namespace std;


struct Produto{
	char nome[15];
	float preco;
};



int main() {
	Produto *ptr=NULL, p[2], p2[2];
	ptr=p ;
	cout <<"### Inserindo Valor do Produto ###"<< endl;
	for(int i=0; i<2; i++){
		cout <<"insira o nome do produto:" << endl;
		cin >> ptr->nome;
		cout<<"insira o valor do produto:" << endl;
		cin >> ptr->preco;
		ptr++;
		
	}
	ptr= p2;
	for(int j=0; j<2; j++){
		strcpy(ptr->nome,p[j].nome);
		ptr->preco = p[j].preco;
		ptr++;
	}
	ptr=p2;
	cout <<"### Valor do Produto com reajuste ###" << endl;
	for(int j=0; j<2; j++){
	  cout << "produto = "<< ptr->nome << endl;
	  cout << "preco = R$" << ptr->preco +(ptr->preco * 0.0478) << endl;
	  ptr++;
	}
	
	
	return 0;
}
