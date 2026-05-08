#include <stdio.h>

//Escreva um algoritmo que solicite ao usuario dois valores reais e apresente:
//1) A soma entre eles
//2) A subtracao do primeiro pelo segundo
//3) A multiplicacao entre eles
//4) A divisao do primeiro pelosegundo
//5) A exponenciacao(primeiro valor base e segundo valor, expoente)
//6) Calcular exponenciacao com recursividade
//7) Calcular o fatorial do primeiro valor e termial do segundo valor
//8) Pesquisar sobre parametros com valor default na assinatura das funcoes
//Obs.: Utilizar a chamada de funcoes e usar estrutura de repeticao no item 5

float Somar(float Num1, float Num2) {
	float Resultado;
	Resultado = Num1 + Num2;
	return(Resultado);
}

//Assinatura da funcao pq foi implementado apos ser chamada
float Subtrair(float A, float B);
float Multiplicar(float Num1, float Num2);

float Dividir(float Num1, float Num2) {
	float Resultado;
	Resultado = Num1/Num2;
	return(Resultado);
}


float Exponenciar(int base, int expoente) {
	int Resultado=1;
	for (int i=1; i<=expoente; i++) 
	 Resultado = Resultado*base;
	return(Resultado);
}


int main() {
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
	printf("\n %0.1f Elevado a %0.1f: %0.1f", vlr1, vlr2, Exponenciar(vlr1, vlr2));
	
}



float Subtrair(float A, float B) {
	return(A - B);
}

float Multiplicar(float Num1, float Num2) {
	float Resultado;
	Resultado = Num1*Num2;
	return(Resultado);
}
