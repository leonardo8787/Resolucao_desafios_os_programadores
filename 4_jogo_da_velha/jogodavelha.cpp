#include "Jogodavelha.hpp"
    
    Jogodavelha::Jogodavelha(){
        cout << "Jogo da velha" << endl;
        this->casas[3][3]=casas[3][3];
    }
    
    void Jogodavelha::setMarcar(char casas){
        this->casas[3][3]=casas;
    }
    char Jogodavelha::getMarcar(){
        return casas[3][3];
    }
    
    void Jogodavelha::Tabuleiro(){
        system("clear");
        printf("\t %c | %c | %c\n",casas[0][0],casas[0][1],casas[0][2]);
        printf("\t ------------\n");
        printf("\t %c | %c | %c\n",casas[1][0],casas[1][1],casas[1][2]);
        printf("\t ------------\n");
        printf("\t %c | %c | %c\n",casas[2][0],casas[2][1],casas[2][2]);
    }
    
    
    void Jogodavelha::Jogada(){
    do{
        cont_jogadas = 1;
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                casas[i][j] = ' ';
            }
        }
        do{
            Tabuleiro();
            cout<<endl;
            if(vez%2 == 0){
                cout<<"Jogador X"<<endl;
            }else{
                cout<<"Jogador O"<<endl;
            }
            printf("Digite a casa para marcar[1-3][1-3]\n");
            cout << "Linha" << endl;
            cin >> linha;
            cout << "Coluna" << endl;
            cin >> coluna;
            if(linha<1 || linha>3 && coluna<1 || coluna>3){
                linha = 0;
                coluna = 0;
            }else if(casas[linha-1][coluna-1] != ' '){
                linha = 0;
                coluna = 0;
            }else{
            if(vez%2==0){
                casas[linha-1][coluna-1] = 'X';
                }else{
                    casas[linha-1][coluna-1] = 'O';
                }
                cont_jogadas++;
                vez++;
            }

        if(casas[0][0]=='X' && casas[0][1]=='X' && casas[0][2]=='X'){cont_jogadas=11;}
        if(casas[1][0]=='X' && casas[1][1]=='X' && casas[1][2]=='X'){cont_jogadas=11;}
        if(casas[2][0]=='X' && casas[2][1]=='X' && casas[2][2]=='X'){cont_jogadas=11;}
        if(casas[0][0]=='X' && casas[1][0]=='X' && casas[2][0]=='X'){cont_jogadas=11;}
        if(casas[0][1]=='X' && casas[1][1]=='X' && casas[2][1]=='X'){cont_jogadas=11;}
        if(casas[0][2]=='X' && casas[1][2]=='X' && casas[2][2]=='X'){cont_jogadas=11;}
        if(casas[0][0]=='X' && casas[1][1]=='X' && casas[2][2]=='X'){cont_jogadas=11;}
        if(casas[0][2]=='X' && casas[1][1]=='X' && casas[2][0]=='X'){cont_jogadas=11;}

        if(casas[0][0]=='X' && casas[0][1]=='X' && casas[0][2]=='X'){cont_jogadas=12;}
        if(casas[1][0]=='X' && casas[1][1]=='X' && casas[1][2]=='X'){cont_jogadas=12;}
        if(casas[2][0]=='X' && casas[2][1]=='X' && casas[2][2]=='X'){cont_jogadas=12;}
        if(casas[0][0]=='X' && casas[1][0]=='X' && casas[2][0]=='X'){cont_jogadas=12;}
        if(casas[0][1]=='X' && casas[1][1]=='X' && casas[2][1]=='X'){cont_jogadas=12;}
        if(casas[0][2]=='X' && casas[1][2]=='X' && casas[2][2]=='X'){cont_jogadas=12;}
        if(casas[0][0]=='X' && casas[1][1]=='X' && casas[2][2]=='X'){cont_jogadas=12;}
        if(casas[0][2]=='X' && casas[1][1]=='X' && casas[2][0]=='X'){cont_jogadas=12;}
        
        }while(cont_jogadas <= 9);
        
        if(cont_jogadas==10){cout << "Jogo empatado\n"; }
        if(cont_jogadas==11){cout << "X vencedor\n"; }
        if(cont_jogadas==12){cout << "O vencedor\n"; }
        
        printf("Deseja jogar novamente? [s-n]\n");
        cin >> res;
    }while(res == 's');
        
        
    }