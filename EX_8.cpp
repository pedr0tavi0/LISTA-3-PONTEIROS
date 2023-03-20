#include <iostream>
#include <math.h>
#include <cstdlib>
#include <string.h>
#include <locale.h>
using namespace std;




int main() {
	int vet[10], *ptr= NULL,aux, mx[3][3], *ptr2=NULL;
	ptr=vet;
	ptr2=mx[0];	
	for(int i=0; i<9; i++){
		cout << "insira um valor qualquer : "<< endl;
		cin >> *ptr;
		ptr++;
	}
	//bubble sort
	for(int j=0; j<9; j++){
		for(int k=0; k<8; k++){
		    if(vet[k] > vet[k+1]){
			aux=vet[k];
			vet[k] = vet[k+1];
			vet[k+1] = aux;
			
		    }
	    }
	}
	
	ptr = vet;
	for(int i=0; i <9; i++){
		cout<< "valores do vetor:"<< *ptr  <<endl;
		ptr++;
		
	}
	ptr=vet;
	for(int j=0; j<9; j++){
		
		ptr2=ptr;
		ptr2++;
		ptr++;
		cout <<"valores da matriz:"<<*ptr2 << endl;
		
		
	}
	
	
	

	return 0;
}
