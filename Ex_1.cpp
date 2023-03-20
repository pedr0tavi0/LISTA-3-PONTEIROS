#include <iostream>
#include <math.h>
#include <cstdlib>
#include <string.h>
#include <locale.h>
using namespace std;

	
struct Atletas{
	char nome[30],posicao[30];
	int idade;
	float altura;
};







int main() {
	setlocale(LC_ALL,"Portuguese");
	Atletas a1[5];
	 int aux;
	 float aux3;
	char aux1[20], aux2[20];
	       cout<<"###CADASTRO DOS ATLETAS###" <<endl;
		
		for(int i=0;i<5;i++){
			cout<<"insera seu nome:" << endl;
			cin >> a1[i].nome;
			cout<<"Qual sua posicao:"<< endl;
			cin >> a1[i].posicao;
			cout<<"Qual sua idade:"<<endl;
			cin >> a1[i].idade;
			cout<<"Qual sua altura:"<<endl;
			cin >> a1[i].altura;
			cout<<"------------------------------"<<endl;
	    } 
	     for(int i=0; i<5; i++){
	    	for(int j=0; j<4; j++){
	    		if(a1[j].idade < a1[j+1].idade){
	    			aux= a1[j].idade;
	    			strcpy(aux1,a1[j].nome);
	    			strcpy(aux2,a1[j].posicao);
	    			aux3=a1[j].altura;
	    			
	    			a1[j].idade = a1[j+1].idade;
	    		    strcpy(a1[j].nome,a1[j+1].nome);
			        strcpy(a1[j].posicao,a1[j+1].posicao);
			        a1[j].altura = a1[j+1].altura;
	    			
	    			a1[j+1].idade = aux;
	    			strcpy(a1[j+1].nome,aux1);
				    strcpy(a1[j+1].posicao,aux2);
				    a1[j+1].altura = aux3;
				    
	    				
			    }
			}
		}
		 for(int j=0;j<5;j++){
			cout< "\n";
			cout<<"###informações###" <<endl;
			cout<< "Nome: " << a1[j].nome << "\n";
			cout<< "POSICAO: " << a1[j].posicao<< "\n";
			cout<< "idade: "<< a1[j].idade << "\n";
			cout<< "altura: "<< a1[j].altura << "\n";
			cout << "---------------------------------------- \n";
			
		}
		
	}
		
	 
	
	

