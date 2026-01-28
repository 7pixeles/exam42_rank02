/**
 * ============================================================================
 * File 		fizzbuzz.c
 * Author		Ayua Carreño Carvajal
 * Created on	Wed Jan 28 2026
 * GitHub		https://github.com/7pixeles
 *
 * Process		- ft_putchar: imprime un carácter
				- ft_putnbr: imprime un número entero recursivamente
				- main:
					- Ignora argumentos
					- Recorre los números del 1 al 100:
						- Si es divisible por 3 y 5, imprime "fizzbuzz"
						- Si es divisible solo por 3, imprime "fizz"
						- Si es divisible solo por 5, imprime "buzz"
						- Si no, imprime el número
					- Imprime salto de línea tras cada valor
 * ============================================================================
 */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int n)
{
	if (n > 9)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}

int main(int argc, char *argv[])
{
	*argv = NULL; // En este programa no se van a pasar argumentos
	if (argc >= 1)
	{
		int n = 1;
		while (n <= 100)
		{
			if (n % 3 == 0 && n % 5 == 0)
				write(1, "fizzbuzz", 8);
			else if (n % 3 == 0)
				write(1, "fizz", 4);
			else if (n % 5 == 0)
				write(1, "buzz", 4);
			else
				ft_putnbr(n);
			ft_putchar('\n');
			n++;
		}
	}
}