// PROJETO MEGA-SENA (MATHEUS BORGES)

#include <stdio.h>

int main()
{

	int a, b, numero, parar, repeticao;
	int acertos = 0, result[6], digitado[10];

	for (a = 0; a < 6; a++)
	{
		result[a] = 0;
	}
	// valores do gabarito inicados em 0

	printf("DIGITE OS NUMEROS DA SORTE: \n");

	for (a = 0; a < 6; a++)
	{
		scanf("%i", &numero);
		for (b = 0; b < 6; b++)
		{
			if (numero == result[b] || (numero < 1 || numero > 60))
			{
				repeticao = 1;
			}
		}
		// recebe e substitui os valores iguais do result

		if (repeticao == 1)
		{
			printf("\nO NUMERO %i EH INVALIDO, TENTE MAIS UMA VEZ: \n", numero);
			repeticao = 0;
			a -= 1;
		}
		else
		{
			result[a] = numero;
		}
	}

	for (a = 0; a < 10; a++)
	{
		digitado[a] = 0;
	}
	// valores do gabarito inicados em 0

	printf("DEPOIS DE FAZER AO MENOS 6 PALPITES, VOCE PODE TERMINAR O PALPITE DIGITANDO 0.\n");
	printf("DIGITE SEUS PALPITES: \n");

	for (a = 0; a < 10; a++)
	{
		scanf("%i", &numero);

		if (a >= 6 && numero == 0)
		{
			parar = 1;
		}
		for (b = 0; b < 10; b++)
		{
			if (numero == digitado[b] || (numero < 1 || numero > 60))
			{
				repeticao = 1;
			}
		}

		if (repeticao == 1)
		{
			printf("\n %i JA FOI SORTEADO, DIGITE NOVAMENTE: \n");
			repeticao = 0;

			a -= 1;
		}
		else
		{
			digitado[a] = numero;
		}
	}

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 6; b++)
		{
			if (digitado[a] == result[b])
			{
				acertos++;
			}
		}
	}

	// analisa a quantidade de acertos
	for (a = 0; a < 6; a++)
	{
		printf("RESULTADOS: [%i] %i\n", a, result[a]);
	}

	// print dos results
	printf("\n");
	if (acertos == 6)
	{
		printf("SEUS ACERTOS FOI IGUAL A UMA SENA (6 ACERTOS)! \n");
	}
	else if (acertos == 5)
	{
		printf("SEUS ACERTOS FOI IGUAL A UMA QUINA (5 ACERTOS)! \n");
	}
	else if (acertos == 4)
	{
		printf("SEUS ACERTOS FOI IGUAL A UMA QUADRA (4 ACERTOS)! \n");
	}
	else
	{
		printf("TENTE NOVAMENTE! NAO FOI DESSA VEZ! ");
	}

	return 0;
}
