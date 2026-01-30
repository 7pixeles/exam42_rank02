/**
 * ============================================================================
 * File 		camel_to_snake.c
 * Author		Ayua Carreño Carvajal
 * Created on	Thu Jan 29 2026
 * GitHub		https://github.com/7pixeles
 *
 * Process		- ft_putstr: imprime una cadena sin salto de línea
				- main:
					- Comprueba que haya exactamente 1 argumento
					- Calcula longitud y número de mayúsculas
					- Reserva memoria para la cadena snake_case
					- Recorre la cadena original
					- Inserta '_' antes de cada mayúscula
					- Convierte mayúsculas a minúsculas
					- Imprime la nueva cadena y salto de línea
 * ============================================================================
 */

#include <stdlib.h>
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
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	char *s = argv[1];
	int len = 0;
	int count = 0;
	// obtenemos la longitud y el número de mayúsculas
	while (s[len])
	{
		if (s[len] >= 'A' && s[len] <= 'Z')
			count++;
		len++;
	}
	char *new = malloc((len + count + 2)* sizeof(char));
	// Recorremos s y comprobamos si el siguiente caracter es capital.
	// Si es positivo, imprimimos '_' y avanzamos en new una posición
	int i = 0;
	int k = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			s[i] = s[i] + 32;
			new[k] = '_';
			k++;
		}
		new[k] = s[i];
		k++;
		i++;
	}
	ft_putstr(new);
	write(1, "\n", 1);
	return (0);
}