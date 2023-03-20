#include <iostream>
#include <math.h>
#include <cstdlib>
#include <string.h>
#include <locale.h>
using namespace std;




int main() {
	float decimal[10];
	float busca,*ptr=NULL,aux;
    ptr=decimal;
	cout << "###Informe os numeros###"<< endl;
	for(int i=0; i<10; i++){
	
		cout <<"digite o "<< i+1 << " numero decimal:"<< endl;
		cin >>*ptr;
		ptr++;
	}
	ptr = decimal;
	
	//boubble sort 
       for(int i = 0; i<10; i++){
         for(int j = 0; j < 9; j++){
             if(ptr[j] > (ptr[j+1])){

            aux = ptr[j];
            ptr[j] = ptr[j+1];
            ptr[j+1] = aux;


        }
    }
}
	ptr = decimal;
	cout << "insira numero de busca";
	cin >> busca;
	for(int i=0; i<10; i++){
		if(busca == *ptr){
			cout << "o numero foi encontrado"<< *ptr<< endl;
		}
		else{
			cout <<"numero nao foi encontrado";
		}
		
		 cout << "numeros:" << *ptr << endl;
		 ptr++;
    }
}

