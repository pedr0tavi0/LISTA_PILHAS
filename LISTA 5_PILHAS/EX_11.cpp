#include <iostream>
#include "estrutura_pilha3.h"
#include <cstdlib>

using namespace std;



int main() {
	
	
	Pilha P;
	bool erro;
	elem elemento;
	int quanti, *vet,Y;
	
	cout << "Insira a quantidade de elementos da sua pilha: ";
	cin >> quanti;
	vet = (int*)malloc(quanti*sizeof(int));
	
	Create(&P);
	
		for(int i =0; i < quanti; i++){
			cout << "Insira o elemento que deseja: ";
			cin >> elemento;
			Push(&P, &elemento, &erro);
			
		}
	
		for(int y = 0; y < quanti; y++){
		cout << "Elemento: " << P.itens[y]<<endl;	
		}
		cout << "----------------------" << endl;
	
	

		for(int j = 0; j < quanti; j++){
		        Y = Pop(&P, &erro);
			    vet[j] = Y;	
		}

	Empty(&P);
	
		
	for(int k = 0; k < quanti; k++){	
		Push(&P,&vet[k],&erro);
		cout << "Elemento: " << P.itens[k]<<endl;;
	}
	free(vet);
}
