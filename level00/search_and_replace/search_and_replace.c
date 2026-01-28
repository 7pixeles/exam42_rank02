/**
 * ============================================================================
 * File			search_and_replace.c
 * Author		Ayua Carreño Carvajal
 * Created on	Wed Jan 28 2026
 * GitHub		https://github.com/7pixeles
 *
 * Process		- ft_strlen: devuelve la longitud de una cadena
				- main:
					- Comprueba que hay exactamente 3 argumentos
					- Asigna cadena original, carácter a buscar y a reemplazar
					- Verifica que los caracteres a buscar y reemplazar sean de longitud 1
					- Recorre la cadena:
						- Si encuentra el carácter a buscar, lo reemplaza
						- Imprime cada carácter
					- Imprime salto de línea al final
 * ============================================================================
 */

#include <unistd.h>
#include <stdlib.h>

int ft_strlen(char *s)
{
	int i = 0;
	while(s[i])
	{i++;}
	return (i);
}

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		write(1, "\n", 1);
		return (0);
	}
	char *str = argv[1];
	char *find = argv[2];
	char *replace = argv[3];
	int i = 0; 
	if (ft_strlen(find) != 1 || ft_strlen(replace) != 1)
	{
		write(1, "\n", 1);
		return (0);
	}
	while(str[i])
	{
		if (str[i] == find[0])
			str[i] = replace[0];
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}