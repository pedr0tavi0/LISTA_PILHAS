 #include <iostream>
#include "estrutura_pilha3.h"
#include <cstdlib>
#include <math.h>
using namespace std;


void Exibir(Pilha *P, bool *erro, int qtd);



void Exibir(Pilha *P, bool *erro, int *qtd){
	int valor,soma = 0,maior, menor;
	float media = 0;
	int *vet;
	vet = (int*)malloc(*qtd*sizeof(int));
	for(int i = 0; i < *qtd; i++){
		valor = Pop(P,erro);
		vet[i] = valor;
		cout <<"------------------------------"<<endl;
		cout << "Valor do elemento: " << vet[i] << endl;
    	soma = soma + vet[i];
    	
	}
	maior = vet[0];
	menor = vet[0];
	for(int j = 0; j < *qtd; j++){
		
		
		if(vet[j] > maior){
			maior = vet[j];
			
		}
		if(vet[j] < menor){
			menor = vet[j];
			
		}
		
		
	}media = (soma/ *qtd);
	cout <<"-----------------------------------------"<<endl;
	cout << "O maior elemento da pilha é: " << maior << endl;
	cout <<"-----------------------------------------"<<endl;
	cout << "O menor elemento da pilha é: " << menor << endl;
	cout <<"-----------------------------------------"<<endl;
	cout << "A media dos elementos da pilha é: " << media << endl;
	
	
	
	
free(vet);	
}

int main() {
	setlocale(LC_ALL,"Portuguese");
	Pilha P;
	elem elemento;
	int quanti;
	bool erro;
	
	cout << "Insira a quantidade de elementos da pilha: ";
	cin >> quanti;
	
	
	Create(&P);
	
	for(int i = 0; i < quanti; i++){
		cout << "Insira o elemento na pilha: ";
		cin >> elemento;
		Push(&P, &elemento, &erro);
	}
	Exibir(&P,&erro,&quanti);
		
	}
