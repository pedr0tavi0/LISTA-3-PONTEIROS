#include <iostream>
using namespace std;

//resposta mostra que todos os vvalores serao 20 pois temp esta apontando para os enderecos de count e sum tranformando o valor em 20

int main() {
int count = 30, 
*temp, sum = 2;
temp = &count;
*temp = 20;
temp = &sum;
*temp = count;
cout <<  "count ="<< count << "temp = "<< *temp << "sum = "<< sum;
	
}
