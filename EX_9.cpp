#include <iostream>
#include <math.h>
#include <iostream>
#include <string.h>
#include <cstdlib>

using namespace std;

int exibir(char* frase1, char* frase2){
    int aux, tamanho;
    aux = strcmp(frase1, frase2);


    if(aux == 0){
        tamanho = strlen(frase1);
        return tamanho;
    }else if(aux == -1){
        tamanho = strlen(frase1);
        return tamanho;
    }else if(aux == 1){
        tamanho = strlen(frase2);
        return tamanho;
    }

}


int main() {
    char frase1[50], frase2[50];
    char aux[50];
    char *ptr;
    int tam;
    ptr = frase1;
    cout << "Insira uma frase: ";
    gets(frase1);
    tam = strlen(frase1);
    for(int i= 0; i<tam; i++){
        if(ptr[i] == ' '){

            tam--;
        }
    }

    cout << "Numero de caracteres: "<< tam << endl;

    cout << "Insira uma segunda frase: ";
    gets(frase2);

    tam = strlen(frase2);
    cout << " O tamanho da frase 2 e: " << tam << endl;
    strcpy(aux, frase2);


    tam = exibir(frase1,frase2);
    cout << "O tamanho da maior frase e: " << tam;

}





