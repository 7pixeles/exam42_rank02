/**
 * ============================================================================
 * File 		ulstr.c
 * Author		Ayua Carreño Carvajal
 * Created on	Wed Jan 28 2026
 * GitHub		https://github.com/7pixeles
 *
 * Process		- Comprueba que hay exactamente 1 argumento
				- Recorre la cadena:
					- Convierte minúsculas a mayúsculas y mayúsculas a minúsculas
					- Imprime cada carácter
				- Imprime salto de línea al final
 * ============================================================================
 */

#include <unistd.h>

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return(0);
	}
	int i = 0;
	char *str = argv[1];
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
