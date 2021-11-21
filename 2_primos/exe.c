

#include <stdio.h>

int main()
{
    printf("Desafio 1");
    
    for(int i=0; i<10000; i++){
        if (i%2 != 0){
            printf("número: %d", i);
            printf("\n");
        }
    }
    
    return 0;
}
