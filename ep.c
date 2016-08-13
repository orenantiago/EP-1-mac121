/*.n Renan Tiago dos Santos Silva
.u 9793606*/

#include <stdio.h>
#include <time.h>

/* A função abaixo recebe um inteiro n > 0 e retorna o número de passos 
* necessários para que n convirja em 1 seguindo as regras propostas
* pela conjectura de Collatz.
*/

int countCollatz(unsigned int n) {
	int counter = 0;

	while (n != 1) {
		if (n%2 != 0) {
			n = 3 * n + 1;
			
		}
		else if (n%2 == 0)
			n /= 2;
		
		counter += 1;
	}
	
	return counter;
}

/* A função main faz a leitura dos inteiros inicio e fim, onde inicio > 0
* e fim >= inicio, e imprime os números de passos que cada inteiro no intervalo
* [inicio, fim] necessita para convergir em 1 seguindo as regras propostas
* pela conjectura de Collatz.
*/
int main()
{
	clock_t begin = clock();

/* here, do your time-consuming job */
	unsigned int inicio, fim, i;

	scanf("%u %u", &inicio, &fim);

	for (i = inicio; i <= fim; i++)
		printf("%d\n", countCollatz(i));

	clock_t end = clock();
	double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	
	printf("TIME SPENT %lf SECONDS\n", time_spent);
	
	return 0;
}