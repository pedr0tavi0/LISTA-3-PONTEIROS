#include <iostream>
#include <string.h>
using namespace std;

void exibir(char *arr,int tamanho){
	char *ptr =NULL;
	ptr = arr;
	for(int i= 0; i<tamanho; i++){
		cout<< *ptr;
		ptr++;
	}
}


int main() {
	char* nome1 = "Luis";
	char* nome2 = "Fernando";
	char* nome3 = "Vitoria";
	char* nome4 = "Leticia";
	char arr[50];
	strcpy(arr,nome1);
	strcat(arr," ");
	strcat(arr,nome2);
	strcat(arr," ");
	strcat(arr,nome3);
	strcat(arr," ");
	strcat(arr,nome4);
	
	
	int tam = strlen(arr);
	
	exibir(arr,tam);
	
}
