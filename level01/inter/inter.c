/**
 * ============================================================================
 * File 		inter.c
 * Author		Ayua Carreño Carvajal
 * Created on	Thu Jan 29 2026
 * GitHub		https://github.com/7pixeles
 *
 * Process		- ft_putchar: imprime un carácter por salida estándar
				- is_dup: comprueba si un carácter ya apareció antes en la cadena
				- is_match: devuelve 1 si dos caracteres son iguales
				- main:
					- Comprueba que haya exactamente 2 argumentos
					- Recorre la primera cadena
					- Busca coincidencias del carácter en la segunda
					- Imprime el carácter si hay coincidencia y no es duplicado
					- Imprime un salto de línea al final
 * ============================================================================
 */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int is_dup(char *word, char c, int i)
{
	int is_dup = 0;
	while (i >= 0)
	{
		i--;
		if (c == word[i])
			is_dup = 1;
	}
	return (is_dup);
}

int is_match(char c, char k)
{
	if (c == k)
		return (1);
	else
		return (0);
}

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		ft_putchar('\n');
		return (0);
	}
	char *word = argv[1];
	char *str = argv[2];
	int i = 0;
	while (word[i])
	{
		int k = 0;
		int match = 0;
		while (str[k])
		{
			match = is_match(str[k], word[i]);
			if (match == 0)
				k++;
			else
				break;
		}
		if (match == 1 && !is_dup(word, word[i], i))
			ft_putchar(word[i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}