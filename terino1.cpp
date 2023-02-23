#include <iostream>   

using namespace std;

main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	float gasolina;
	float etanol;
	string op;
	
	
	cout << "qual é o seu carro: BMW, AUDI, FIAT, FERRARI? ";
	cin >> op; 
	
	if(op == "BMW"){
		gasolina = 9.8;
		etanol = 8.9;
	}else if (op == "AUDI"){
		gasolina = 12.8;
		etanol = 10.9;
	}else if(op == "FIAT"){
		gasolina = 26.8;
		etanol = 24.9;
	}else if(op == "FERRARI"){
	
		gasolina = 13.8;
		etanol = 12.9;
	}
	cout <<" o seu carro pusui 2 ou 4 portas: "<< endl;
	cin >> op;
	if(op == "4"){
		gasolina = gasolina - 0.5;
		etanol= gasolina - 0.5;
	}
	
	cout << "o seu carro possui mais de duas pessoas? s/n "<< endl;
	cin >> op;
	if(op == "s"){
		etanol = etanol - 1.2;
		gasolina = gasolina - 1.2;
	}
	
	cout << " o seu carro possui bagajeiro? s/n "<< endl;
	cin>> op;
	if(op =="s"){
		etanol = etanol - 0.2;
		gasolina = gasolina - 0.2 ;
	}	
	
	cout << "após a analise esse é o consumo medio de etanol de seu carro: " << etanol;
	
	cout << "                                                       após a analise esse é o consumo medio de gasolina de seu carro: " << gasolina;
}
	
