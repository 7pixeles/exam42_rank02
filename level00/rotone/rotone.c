/**
 * ============================================================================
 * File 		rotone.c
 * Author		Ayua Carreño Carvajal
 * Created on	Wed Jan 28 2026
 * GitHub		https://github.com/7pixeles
 *
 * Process		- Comprueba que hay exactamente 1 argumento
				- Recorre la cadena carácter por carácter
				- Si es letra, avanza 1 posición en el alfabeto
				- 'z' pasa a 'a', 'Z' pasa a 'A'
				- Imprime cada carácter modificado
				- Imprime un salto de línea al final
 * ============================================================================
 */

#include <unistd.h>

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	int i = 0;
	char *str = argv[1];
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (str[i] == 'z')
				str[i] = 'a';
			else if (str[i] == 'Z')
				str[i] = 'A';
			else
				str[i] = str[i] + 1;
		}
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}
