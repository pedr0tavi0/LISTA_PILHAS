#include <iostream>
#include <cstdlib>
#include <locale>
#include "estrutura_pilha.h"
using namespace std;

int main() {
	int num_elem = 20, *vetor;
	elem elemento;
	bool erro;
	
	
	vetor = (int*)malloc(20*sizeof(int));
	Pilha P1, P2, P3;
	
	Create(&P1);
	Create(&P2);
	Create(&P3);
				for(int i = 0; i < 20; i++){
					cout << "Insira um numero inteiro positivo ou negativo: ";
					cin >> vetor[i];
					if(vetor[i] % 2 == 0 ){
						elemento = vetor[i];
						
						Push(&P1, &elemento, &erro );
						cout << "Elemento inserido na Pilha1! " << endl;
					}else{
						elemento=vetor[i];
						Push(&P2, &elemento, &erro);
						cout << "Elemento inserido na Pilha2! " << endl;
					}
					
					
					}
	

	 vetor =(int*)realloc(vetor,(P1.topo)*sizeof(int));
	 int x = P1.topo;
	 
		 for(int i = 0; i <= x; i++){
			vetor[i] = P1.itens[i];	
		}
		
	Empty(&P1);
	for(int i =0; i <= x; i++){
		
		if(vetor[i] <= -1){
			
			
			Push(&P3, &vetor[i], &erro);
			cout << "Elemento inserido na Pilha3! " << endl;
		}else{
			Push(&P1, &vetor[i], &erro);
		}
	} 
	
	vetor =(int*)realloc(vetor,(P2.topo) *sizeof(int));
	int y = P2.topo;
	
		for(int i = 0; i <= y ; i++){
			vetor[i] = P2.itens[i];
			
		}
		
	Empty(&P2);
	for(int i = 0; i <= y; i++ ){
		
		
		if(vetor[i] >= 0){
			
			Push(&P3, &vetor[i], &erro);
			
			cout << "Elemento inserido na Pilha3! " << endl;
			
		}else{
			Push(&P2, &vetor[i], &erro);
			cout << "Elemento inserido na Pilha2! " << endl;
		}
		
		
	}
	cout << "####Pilha 1####: " << endl;
	for(int i = 0; i < P1.topo + 1; i++){
		cout << "Elemento " << i + 1 << ": " << P1.itens[i] << endl;
	}
	cout << "----------------------------" << endl;
	cout << "####Pilha 2####:  " << endl;
	for(int i = 0; i < P2.topo +1; i++){
	cout << "Elemento " << i + 1 << ": " << P2.itens[i] << endl;
	}
	cout << "----------------------------" << endl;
	cout << "####Pilha 3####: " << endl;
	for(int i = 0; i < P3.topo + 1; i++){
	cout << "Elemento " << i + 1 << ": " << P3.itens[i] << endl;
	}
	
	free(vetor);
}
