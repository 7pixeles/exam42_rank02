/**
 * ============================================================================
 * File 		snake_to_camel.c
 * Author		Ayua Carreño Carvajal
 * Created on	Thu Jan 29 2026
 * GitHub		https://github.com/7pixeles
 *
 * Process		- ft_putstr: imprime una cadena sin salto de línea
				- main:
					- Comprueba que haya exactamente 1 argumento
					- Calcula longitud de la cadena y número de guiones bajos
					- Reserva memoria para la nueva cadena camelCase
					- Recorre la cadena original
					- Si encuentra '_', salta y convierte la siguiente letra a mayúscula
					- Copia el carácter actual a la nueva cadena
					- Imprime la nueva cadena seguida de salto de línea
	OBSERVACIONES: La lógica para convertir a mayúscula funciona solo si hay
	una letra después de _.
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
	// obtenemos la longitud y el número de _
	while (s[len])
	{
		if (s[len] == '_')
			count++;
		len++;
	}
	char *new = malloc((len + count + 1)* sizeof(char));
	// Recorremos s y comprobamos si el siguiente caracter es _.
	// Si es positivo, imprimimos '_' y avanzamos en new una posición
	int i = 0;
	int k = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '_')
		{
			i++;
			s[i] = s[i] - 32;
		}
		new[k] = s[i];
		k++;
		i++;
	}
	ft_putstr(new);
	write(1, "\n", 1);
	return (0);
}