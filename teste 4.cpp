#include <iostream>
using namespace std;

int main() {
	
	setlocale(LC_ALL,"portuguese");
	
int num_herois, pont_combate, pont_poder, pontuacao_maxima = 0;
string nome_heroi, nome_heroi_maximo;


cout << "Quantos her�is deseja avaliar? ";
cin >> num_herois;

for (int i = 1; i <= num_herois; i++) {
    cout << "Digite o nome do her�i " << i << ": ";
    cin >> nome_heroi;
    
    cout << "Digite a pontua��o de habilidades de combate do her�i " << i << ": ";
    cin >> pont_combate;
    
    cout << "Digite a pontua��o de poderes especiais do her�i " << i << ": ";
    cin >> pont_poder;
    
    int pontuacao = pont_combate + pont_poder;
    
    if (pontuacao > pontuacao_maxima) {
        pontuacao_maxima = pontuacao;
        nome_heroi_maximo = nome_heroi;
    }
}

cout << "o her�i selecionado � " << nome_heroi_maximo << " com uma pontua��o de " << pontuacao_maxima << ".";


}

