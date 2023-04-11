#include <iostream>
#include "estrutura_pilha3.h"
#include <cstdlib>
using namespace std;


void Comparar(Pilha *P1, Pilha *P2, int quant);


void Comparar(Pilha *P1, Pilha *P2, int quant){
	int cont;
	cout<<"-----------------------------------"<<endl;
	if(P1->topo > P2->topo){
		cout << "A Primeira Pilha é maior!! " << endl;
		
	}else if(P1->topo < P2->topo){
		cout << "A Segunda Pilha  é maior!!" << endl;
		
	}else{
		cout << "As Pilhas são do mesmo tamanho" << endl;
		for(int x = 0; x < quant; x++){
			for(int y = 0; y < quant ;y++){
				if(P1->itens[x] == P2->itens[y]){
					cont++;
				}
			}
			
				
			
		}
		cout<<"-----------------------------------------"<<endl;
		if(cont == quant){
			cout << "As Pilhas tem os mesmos elementos" << endl;
			
		}else{
			cout << "As Pilhas tem elementos diferentes" << endl;
		}
	}
}

int main() {
	setlocale(LC_ALL,"Portuguese");
	Pilha P1, P2;
	elem elemento;
	int tam;
	bool erro;
	
	Create(&P1);
	Create(&P2);
	cout << "Insira a quantidade de elementos da Primeira: ";
	cin >> tam;
	
	for(int i = 0; i < tam; i++){
		cout << "Insira o elemento: ";
		cin >> elemento;
		Push(&P1,&elemento,&erro);
		
		}
	cout << "Insira a quantidade de elementos da Segunda: ";
	cin >> tam;
	
	for(int i = 0; i < tam; i++){
		cout << "Insira o elemento: ";
		cin >> elemento;
		Push(&P2,&elemento,&erro);
		
		}
		
	Comparar(&P1, &P2, tam);
	
}
