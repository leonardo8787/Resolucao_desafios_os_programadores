#include<iostream>
#include<math.h>

using namespace std;

void verifica(int a, int b, int c){
    int result;
    result = pow(a,b);
    if (result == c){
        printf("%d true %d", c, b);
    } else {
        printf("%d false", c);
    }
}

int main() {
    
    int a, b, c;
    
    printf("Digite um número: ");
    cin>>a;
    
    printf("Digite um número(exponencial): ");
    cin>>b;
    
    printf("Digite um número(resultado): ");
    cin>>c;
    
    verifica(a,b,c);
    
    return 0;
}