#include <iostream>
#include "estrutura_pilha2.h""
#include <cstdlib>
#include <locale.h>

using namespace std;



int main() {
	
	Pilha P1;
	bool erro;
	
	
	
	Create(&P1);    // Criando a pilha
	
	
	
	Push(&P1,"A",&erro);// Empilhando elemento 'A'
	
	
	Push(&P1, "B", &erro); // Empilhando elemento 'B'
	
	
	Push(&P1, "C", &erro);  // Empilhando elemento 'C'
	
	Push(&P1, "D", &erro); // Empilhando elemento 'D'
	
	
	
	Pop(&P1, &erro);  // Desempilhando
	Pop(&P1, &erro);  // Desempilhando
	

	Push(&P1, "K", &erro); //Empilhando K
	
	
	Push(&P1, "V", &erro); //Empilhando B
	
	Pop(&P1, &erro); // Desempilhando
	
	
	cout << "Elementos da Pilha: " << endl; // Imprime a pilha
	for(int i=0; i< (P1.topo + 1); i++)
	{
		cout << P1.itens[i] << endl;
	}	

	
}
