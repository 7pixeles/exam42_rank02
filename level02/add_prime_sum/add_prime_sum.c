/**
 * ============================================================================
 * File 		add_prime_sum.c
 * Author		Ayua Carreño Carvajal
 * Created on	Fri Jan 30 2026
 * GitHub		https://github.com/7pixeles
 *
 * Process		- ft_atoi:
					- Convierte una cadena de dígitos a entero
				- is_prim:
					- Comprueba si un número es primo
					- Devuelve 1 si es primo, 0 si no
				- ft_putnbr:
					- Imprime un entero por salida estándar
				- main:
					- Comprueba que haya exactamente 1 argumento
					- Convierte el argumento a número entero
					- Si el número es ≤ 0, imprime 0 y sale
					- Suma todos los números primos menores o iguales al número
					- Imprime la suma seguida de un salto de línea

 * ============================================================================
 */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int i = 0;
	int res = 0;

	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res);
}

int	is_prim(int nbr)
{
	int i;

	if (nbr < 2)
		return 0;
	for (i = 2; i * i <= nbr; i++)
	{
		if (nbr % i == 0)
			return 0;
	}
	return 1;
}

void ft_putnbr(int nbr)
{
	char c;
	if (nbr > 9)
		ft_putnbr(nbr / 10);
	c = nbr % 10 + '0';
	write(1, &c, 1);
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		write(1, "0\n", 2);
		return (0);
	}
	int nbr = ft_atoi(argv[1]);
	if (nbr <= 0)
	{
		write(1, "0\n", 2);
		return (0);
	}
	int sum = 0;
	while (nbr > 1)
	{
		if (is_prim(nbr))
			sum += nbr;
		nbr--;
	}
	ft_putnbr(sum);
	write(1, "\n", 1);
	return 0;
}
