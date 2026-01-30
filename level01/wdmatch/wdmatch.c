/**
 * ============================================================================
 * File 		wdmatch.c
 * Author		Ayua Carreño Carvajal
 * Created on	Thu Jan 29 2026
 * GitHub		https://github.com/7pixeles
 *
 * Process		- ft_putstr: imprime una cadena sin salto de línea
				- main:
					- Comprueba que haya exactamente 2 argumentos
					- Recorre la primera cadena carácter por carácter
					- Busca cada carácter en orden dentro de la segunda
					- Cuenta coincidencias respetando el orden
					- Imprime la primera cadena si todas coinciden
					- Imprime un salto de línea al final
 * ============================================================================
 */

#include <unistd.h>

void ft_putstr(char *str)
{
	int i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	char *word = argv[1];
	char *str = argv[2];
	int len = 0;
	while (word[len])
	{
		len++;
	}
	int i =  0;
	int count = 0;
	while (word[i])
	{
		int k = 0;
		while (str[k])
		{
			if (str[k] != word[i])
				k++;
			else
			{
				count++;
				break;
			}
		}
		i++;
	}
	if (count == len)
		ft_putstr(word);
	write(1, "\n", 1);
	return (0);
}