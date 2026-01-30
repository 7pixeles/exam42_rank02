/**
 * ============================================================================
 * File 		last_word.c
 * Author		Ayua Carreño Carvajal
 * Created on	Thu Jan 29 2026
 * GitHub		https://github.com/7pixeles
 *
 * Process		- ft_strlen: devuelve la longitud de la cadena
				- ft_isspace: devuelve 1 si el carácter es espacio, tab o fin
				- main:
					- Comprueba que haya exactamente 1 argumento
					- Encuentra el último carácter no espacio
					- Retrocede hasta el inicio de la última palabra
					- Imprime la última palabra seguida de salto de línea
 * ============================================================================
 */

#include <unistd.h>

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

int ft_isspace(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return(0);
	}
	char *str = argv[1];
	int len = ft_strlen(str) - 1;
	while (ft_isspace(str[len]))
	{
		len--;
	}
	while (len > 0)
	{
		if (ft_isspace(str[len]))
		{
			int i = len + 1;
			while (str[i] && !ft_isspace(str[i]))
			{
				write(1, &str[i], 1);
				i++;
			}
			write(1, "\n", 1);
			return (0);
		}
		len--;
	}
	write(1, "\n", 1);
	return (0);
}