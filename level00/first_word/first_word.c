/**
 * ============================================================================
 * File 		first_word.c
 * Author		Ayua Carreño Carvajal
 * Created on	Wed Jan 28 2026
 * GitHub		https://github.com/7pixeles
 *
 * Process		- ft_isspace: devuelve 1 si el carácter es espacio o tab, 0 si no
				- main:
					- Comprueba que hay exactamente 1 argumento
					- Ignora espacios iniciales de la cadena
					- Imprime caracteres hasta el siguiente espacio o fin
					- Imprime un salto de línea al final
 * ============================================================================
 */

#include <unistd.h>

int ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	int i = 0;
	char *str = argv[1];

	while (ft_isspace(str[i])) // Eliminamos basura previa
		i++;
	while ((!ft_isspace(str[i])) && str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
