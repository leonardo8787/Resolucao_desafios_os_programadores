#ifndef __Jogodavelha_hpp
#define __Jogodavelha_hpp

using namespace std;

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

class Jogodavelha{
    private:
        char casas[3][3]={' ',' ',' ',
                            ' ',' ',' ',
                            ' ',' ',' '};
        int cont_jogadas=0, jogada, linha, coluna, vez=0;
        char res;
    public:
        Jogodavelha();
        void setMarcar(char casas);
        char getMarcar();
        void Tabuleiro();
        void Jogada();
};

#endif