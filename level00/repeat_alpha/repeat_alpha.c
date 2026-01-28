/**
 * ============================================================================
 * File 		repeat_alpha.c
 * Author		Ayua Carreño Carvajal
 * Created on	Wed Jan 28 2026
 * GitHub		https://github.com/7pixeles
 *
 * Process		Para cada carácter de la cadena:
					- Si es alfanumérico, calcular cuántas veces imprimirlo (rep)
					según si es mayúscula o minúscula (str[i] - 'A') || (str[i] - 'a')
					- Imprimir el carácter rep veces
					- Si no es alfanumérico, imprimirlo tal cual
				Al final, imprimir salto de línea
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
	int rep = 0; // Contador para la posición en la tabla ascii
	char *str = argv[1];
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				rep = str[i] - 'a';
			if (str[i] >= 'A' && str[i] <= 'Z')
				rep = str[i] - 'A';
			while (rep > 0)
			{
				write(1, &str[i], 1);
				rep--;
			}
		}
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}