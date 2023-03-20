#include <iostream>
#include <math.h>
#include <cstdlib>
#include <string.h>
#include <locale.h>
using namespace std;
/*
a) O codigo compila? sim
b) Apos executar o codigo, qual sera o valor de inx?20
c) Apos executar o codigo, para onde parr estara apontando? para o conteudo do endereço 4 do vetor
*/


int main() {
	int arr[5] = { 10, 80, 40, 30, 20 };
	int *parr = &arr[4];
	int inx = 0;
	inx = *parr++;
	cout <<inx;
}
