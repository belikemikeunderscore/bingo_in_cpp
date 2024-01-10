#include <iostream>
#include "cardgen.h"
using namespace std;

int selection;

int main(){
    cout << "Bem vindo ao bingo!\n";
    cout << "1) Jogar\n";
    cout << "2) Gerar Cartões\n";
    cin >> selection;
        if (selection == 1){
            cout << "seleção 1\n";
        } 
        else if (selection == 2) gen();
}