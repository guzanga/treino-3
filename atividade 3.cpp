#include <iostream>

using namespace std;

main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	string nome[200];
	int andar[200];
	string op;
	int i;
	int ap;
	
	 nome[0] = "joão";
	 andar[0] = 1;
	 
	 nome[1] = "maria";
	 andar[1] = 2;
	 
	 nome[2] = "paulo";
	 andar[2] = 3;
	 
	 nome[3] = " felipe";
	 andar[3] = 4;
	 
	 nome[4] ="luiz";
	 andar[4] = 5;

	 nome[5] ="marcos";
	 andar[5] = 6;
	 
	 nome[6] = "igor";
	 andar [6] =7;
	 
	 nome[7] = "marcelo";
	 andar [7] = 8;
	 
	 
	cout <<"Seu nome é:joão, maria, paulo, felipe, luiz, marcos, igor, marcelo?";
	cin >> op;
	
	for(i=0; i<200; i++){
		if (nome[i] == op ){
			break;
		}
		
	}
	
	
	cout <<"Qual andar deseja ir?";
	cin >> ap;
	
	if(ap == 2 || ap == 4 || ap == 6 || ap == 8 || ap == 10){
		
		if(andar[i]==ap){
			cout <<"ta liberado bb " << ap;
			
		}else{
			cout <<" nananinão " << ap; 
		}	
		
	}else{
		cout <<"talisberado ";
	}
		
}
