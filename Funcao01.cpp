#include <stdio.h>

//Escreva um algoritmo que solicite ao usuario dois valores reais e apresente:
//1) A soma entre eles.... OK
//2) A subtracao do primeiro pelo segundo....OK
//3) A multiplicacao entre eles....OK
//4) A divisao do primeiro pelosegundo....OK
//5) A exponenciacao(primeiro valor base e segundo valor, expoente)....OK
//6) Calcular exponenciacao com recursividade....OK
//7) Calcular o fatorial do primeiro valor e termial do segundo valor....OK
//8) Pesquisar sobre parametros com valor default na assinatura das funcoes....OK
//Obs.: Utilizar a chamada de funcoes e usar estrutura de repeticao no item 5


//Assinatura da funcao
float Somar(float Num1, float Num2);
float Subtrair(float A, float B);
float Multiplicar(float Num1, float Num2);
float Dividir(float Num1, float Num2);
int Exponenciar(int base, int expoente);
int Exponenciar_Recursividade(int base, int expoente);
int Fatorial(int vlr1);
int Termializar(int vlr2);

int main() {
	
	//valores para solicitar ao usuario
	float vlr1, vlr2;
	
    // Solicitando ao usuario dois valores reais
	printf("Informe o primeiro valor: ");
	scanf("%f", &vlr1);
	printf("Informe o segundo valor: ");
	scanf("%f", &vlr2);	
	
	// Apresentando os resultados
	printf("\n Soma: %0.1f", Somar(vlr1, vlr2));
	printf("\n Subtracao: %0.1f", Subtrair(vlr1, vlr2));
	printf("\n Multiplicacao: %0.1f", Multiplicar(vlr1, vlr2));
	printf("\n Dividisao: %0.1f", Dividir(vlr1, vlr2));
	printf("\n %0.1f Elevado a %0.1f: %i", vlr1, vlr2, Exponenciar(vlr1, vlr2));
	printf("\n Exponenciacao recursiva: %i", Exponenciar_Recursividade(vlr1, vlr2));
	printf("\n Fatorial de %0.1f: %i", vlr1, Fatorial(vlr1));
	printf("\n Termial de %0.1f: %i", vlr2, Termializar(vlr2));
	
}



// funcao somar
float Somar(float Num1, float Num2) {
	float Resultado;
	Resultado = Num1 + Num2;
	return(Resultado);
}

// funcao subtrair
float Subtrair(float A, float B) {
	return(A - B);
}

// funcao multiplicar
float Multiplicar(float Num1, float Num2) {
	float Resultado;
	Resultado = Num1*Num2;
	return(Resultado);
}

// funcao dividir
float Dividir(float Num1, float Num2) {
	float Resultado;
	Resultado = Num1/Num2;
	return(Resultado);
}

// funcao exponenciar
int Exponenciar(int base, int expoente) {
	int Resultado=1;
	for (int i=1; i<=expoente; i++) 
	 Resultado = Resultado*base;
	return(Resultado);
}

// funcao exponenciar com recursividade
int Exponenciar_Recursividade(int base, int expoente) {
	if(expoente == 0) {
		return 1;
	} else {
		return base * Exponenciar_Recursividade(base,expoente - 1); // Recursividade
	}
}

// funcao fatorial
int Fatorial(int vlr1) {
	if (vlr1 == 0) {
		return 1;
	} else {
		return vlr1 * Fatorial(vlr1 - 1); // Recursividade
	}
}

// funcao de termial/termializar
int Termializar(int vlr2) {
	if (vlr2 == 0) {
		return 0;
	} else {
		return vlr2 + Termializar (vlr2 - 1); //Recursividade
	}
}
