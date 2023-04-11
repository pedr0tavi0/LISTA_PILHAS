#include <iostream>
#include "estrutura_pilha3.h"
#include <cstdlib>

using namespace std;


void Comparar(Pilha *P1, Pilha *P2);


void Comparar(Pilha *P1, Pilha *P2){
	cout <<"----------------------------------------------------"<<endl;
	if(P1->topo > P2->topo){
		cout << "A Primeira pilha é maior" << endl;
		
	}else if(P1->topo < P2->topo){
		cout << "A Segunda pilha é maior" << endl;
		
	}else{
		cout << " As suas Pilhas são do mesmo tamanho" << endl;
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
	cout << "Insira a quantidade de elementos da primeira pilha: ";
	cin >> tam;
	
	for(int i = 0; i < tam; i++){
		cout << "Insira os elemento: ";
		cin >> elemento;
		Push(&P1,&elemento,&erro);
		
		}
	cout <<"----------------------------------------------------"<<endl;
	cout << "Insira a quantidade de elementos da segunda pilha: ";
	cin >> tam;
	
	for(int y = 0; y < tam; y++){
		cout << "Insira os elemento: ";
		cin >> elemento;
		Push(&P2,&elemento,&erro);
		
		}
		
	Comparar(&P1, &P2);
	
}
