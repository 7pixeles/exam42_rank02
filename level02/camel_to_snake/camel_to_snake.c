/**
 * ============================================================================
 * File 		camel_to_snake.c
 * Author		Ayua Carreño Carvajal
 * Created on	Fri Jan 30 2026
 * GitHub		https://github.com/7pixeles
 *
 * Process		- ft_strlen: devuelve la longitud de la cadena
				- count_upper: cuenta el número de letras mayúsculas
				- ft_putstr: imprime la cadena seguida de salto de línea
				- str_dup:
					- Recorre la cadena original
					- Si encuentra mayúscula, la convierte a minúscula
					- Inserta '_' antes de la letra convertida
					- Copia el carácter actual en la nueva cadena
					- Devuelve la cadena convertida a snake_case
				- main:
					- Comprueba que haya exactamente 1 argumento
					- Calcula longitud y número de mayúsculas
					- Reserva memoria suficiente para la cadena resultante
					- Convierte la cadena a snake_case usando str_dup
					- Imprime la nueva cadena
					- Libera la memoria utilizada
	
	OBSERVACIONES:: En esta versión, strdup no reserva memoria, se reserva en el main

 * ============================================================================
 */

#include <stdlib.h>
#include <unistd.h>

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

int count_upper(char *str)
{
	int i = 0;
	int count = 0;
	while(str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
			count++;
		i++;
	}
	return (count);
}

void ft_putstr(char *str)
{
	int i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

char *str_dup(char *from, char *to)
{
	int i = 0;
	int k = 0;
	while (from[i])
	{
		if (from[i] >= 65 && from[i] <= 90)
		{
			from[i] += 32;
			to[k] = '_';
			k++;
		}
		to[k] = from[i];
		k++;
		i++;
	}
	return (to);
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	int str_len = ft_strlen(argv[1]);
	int count_upp = count_upper(argv[1]);
	char *aux = malloc((str_len + count_upp + 1) * sizeof(char));
	if (!aux)
		return(0);
	char *new_str = malloc(ft_strlen(aux) + 1 * sizeof(char));
	if (!new_str)
		return(0);
	new_str = str_dup(argv[1], aux);
	ft_putstr(new_str);
	free(new_str);

	return (0);
}