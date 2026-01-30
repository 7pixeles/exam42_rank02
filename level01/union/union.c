/**
 * ============================================================================
 * File 		union.c
 * Author		Ayua Carreño Carvajal
 * Created on	Thu Jan 29 2026
 * GitHub		https://github.com/7pixeles
 *
 * Process		- ft_putchar: imprime un carácter
				- ft_strjoin:
					- Concatena la segunda cadena al final de la primera
				- is_dup:
					- Comprueba si un carácter ya apareció antes en la cadena
				- main:
					- Comprueba que haya exactamente 2 argumentos
					- Concatena ambas cadenas en una sola
					- Recorre la cadena resultante
					- Imprime cada carácter si no está duplicado
					- Imprime un salto de línea al final

	OBSERVACIONES: 
	- ft_strjoin no realiza reserva memoria, puede causar errores en examen, 
	aunque en el simulador no saltó error.
	- Alternativa: recorrer primero una cadena y luego otra
 * ============================================================================
 */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

char *ft_strjoin(char *s1, char *s2)
{

	int i = 0;
	while (s1[i])
	{
		i++;
	}
	int j = 0;
	while (s2[j])
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	return (s1);
}

int is_dup(char *str, char c, int i)
{
	int is_dup = 0;
	while (i >= 0)
	{
		i--;
		if (c == str[i])
			is_dup = 1;
	}
	return (is_dup);
}

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		ft_putchar('\n');
		return (0);
	}
	char *word = argv[1];
	char *str = argv[2];
	int i = 0;
	char *aux = ft_strjoin(word, str);
	while (aux[i])
	{
		if (!is_dup(aux, aux[i], i))
			ft_putchar(word[i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}