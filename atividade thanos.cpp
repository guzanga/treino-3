#include <iostream>
#include <stdlib.h> 
#include <time.h>       

using namespace std;

main () {
	
	setlocale(LC_ALL, "Portuguese");
	int i;
	int arvores;
	int numeros, num;
	string op;
	int esconde;
	srand (time(NULL));
	
	cout <<"selecione a dificuldade: f, m, d ";
	cin >>op;
	
	if(op == "f"){
		numeros = 15;	
	}
	else if (op == "m"){
		
		numeros = 10;	
	}
	else if (op == "d") {
			numeros = 5; 
	}
		
		cout <<"Era uma vez um rapaz chamado thanos, ele procurava dono do posto paulistinha , com proposito de ter gasosa barata, o dono com medo foge e se esconde atrás de arvores 50, thanos não desiste e vai a procura do dono. Ajude thanos com seu objetivo. Boa sorte ";
		
		arvores = 50;
		esconde = rand() % arvores + 0;	
		for( i=0; i < numeros;  i++){
			
	
			cout << "escolha uma arvore suspeita entre 0 a 49:" << endl;	 
			cin >> num;
			if(num == esconde){
				cout << " voce trouxe o dono ao thanos, parabens victory!!!!" << endl;
				break;
			}
			else if (num > esconde) {
				cout << " ele está mais para a esquerda" << endl;
			}
			else {
				cout << " ele está mais para a direita" << endl;
			}
		}
	if (i >= numeros) {
		cout << " voce perdeu, agr tera que comprar gasosa para o thanos por um ano inteiro. (=" << endl;
	}
		
		
		
	}
	


