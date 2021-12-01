#include<stdio.h>

int gcd(int u, int v){
	int t;
	while(u>0){
		if(v>u){
			t=u;
			u=v;
			v=t;
		}
		u -= v;
	}
	return v;
}

struct fracao{
	int numerador, denominador;
};

struct fracao reduce(const struct fracao val){
	struct fracao result;
	int ratio = gcd(val.numerador, val.denominador);

	result.numerador = val.numerador/(float)ratio;
	result.denominador = val.denominador/(float)ratio;

	return result;
}

int main() {
	
	struct fracao val;
    int a, b;
    
    printf("Digite um número: ");
    scanf("%d", &a);
	val.numerador = a;
	printf("Digite um número: ");
	scanf("%d", &b);
	val.denominador = b;
	
	val=reduce(val);

	printf("%d/%d", val.numerador, val.denominador);

	return 0;
}
