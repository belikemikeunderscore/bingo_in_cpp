#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <numeric>
#include <limits>
#include "cardgen.h"
using namespace std;

int selection;
int amountDeNumerosSort;
int poolselect;
int sorteados;
int numeroSorteado;
int anterior;
int contador;

void displayNumbers(const vector<int>& sortedNumbers) {

    int totalNumbers = sortedNumbers.size();

    int rows = totalNumbers / 5 + (totalNumbers % 5 != 0);

    int cols = 5;


    for (int row = 0; row < rows; ++row) {

        for (int col = 0; col < cols; ++col) {

            int index = row * cols + col;

            if (index < totalNumbers) {

                cout << setw(2) << sortedNumbers[index] << ' ';

            } else {

                cout << " ";

            }

        }

        cout << endl;

    }

}

int main(){
    srand(static_cast<unsigned>(time(0)));
    system("clear");
    cout << "Bem vindo ao bingo!\n";
    cout << "1) Jogar\n";
    cout << "2) Gerar Cartões\n";
    cin >> selection;
    system("clear");
        switch (selection){
            case 1:
                    int totalNumbers;
    cout << "Escolha o tipo de sorteio:\n1) 75 números\n2) 90 números\n3) 100 números\n";
    int choice;
    cin >> choice;

    switch (choice) {
        case 1:
            totalNumbers = 75;
            break;
        case 2:
            totalNumbers = 90;
            break;
        case 3:
            totalNumbers = 100;
            break;
        default:
            cout << "Escolha inválida!\n";
            return 1;
    }

    vector<int> allNumbers(totalNumbers);
    iota(allNumbers.begin(), allNumbers.end(), 1);

    vector<int> sortedNumbers;
    int previousNumber = -1;

    int drawMode;
    cout << "Escolha o modo de sorteio:\n1) Automático\n2) Manual\n";
    cin >> drawMode;

    while (true) {
        if (drawMode == 1) {
            random_shuffle(allNumbers.begin(), allNumbers.end());
            int drawnNumber = allNumbers.back();
            allNumbers.pop_back();

            sortedNumbers.push_back(drawnNumber);
            cout << "Número sorteado: " << drawnNumber << "\nNúmero anterior: " << previousNumber << endl;
        } else if (drawMode == 2) {
            char manualDraw;
            cout << "Pressione qualquer tecla para sortear um novo número (ou 'q' para sair): ";
            cin >> manualDraw;

            if (manualDraw == 'q' || manualDraw == 'Q') {
                break;
            }

            int drawnNumber = allNumbers.back();
            allNumbers.pop_back();

            sortedNumbers.push_back(drawnNumber);
            cout << "Número sorteado: " << drawnNumber << "\nNúmero anterior: " << previousNumber << endl;
        } else {
            cout << "Modo de sorteio inválido!\n";
            return 1;
        }

        previousNumber = sortedNumbers.back();
        displayNumbers(sortedNumbers);
    }
                cout << "Penis 2";
                break;
            


        } 
    gen();

}
