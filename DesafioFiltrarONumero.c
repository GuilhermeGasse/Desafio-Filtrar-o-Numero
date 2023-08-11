/* Filter the number
Oh, no! The number has been mixed up with the text. Your goal is to retrieve the number from the text, can you return the number back to its original state?

Task
Your task is to return a number from a string.

Details
You will be given a string of numbers and letters mixed up, you have to return all the numbers in that string in the order they occur. */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{	// String de tamanho máximo de 50.
	int const qtdCaracteres = 50;
	char string[qtdCaracteres];
	printf("\n");
	
	// Usuário preenche.
	printf("Digite uma string(até 50 caracteres): \n");
	scanf("%s", &string);
	printf("\n");
	
	// A string possui este tamanho exato.
	printf("A string tem %d caracteres.\n", strlen(string));
	
	// Verificação para encontrar números.
	VerificarNumeros();
	
	return 0;
 }
// Funçao para verificar a presença de numeros.
void VerificarNumeros(char textostring[], int qtdCaracteres)
{
	int i=0;
	
	
}
