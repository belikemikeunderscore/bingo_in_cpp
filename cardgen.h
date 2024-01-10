#include <iostream>
#include <ctime>
#include <fstream>
#include <cmath>
using namespace std;

int num[5][5];
int rndm;

int gen(){
srand((unsigned) time(0));
rndm = rand() % 100;


ofstream outputFile("cartão.txt");
if (outputFile.is_open()) {
    outputFile << rndm;
    cout << "ficheiro cartão foi criado nesta pasta";
    outputFile.close();
}


return 0;
    
}