/**
 * ============================================================================
 * File 		rev_print.c
 * Author		Ayua Carreño Carvajal
 * Created on	Wed Jan 28 2026
 * GitHub		https://github.com/7pixeles
 *
 * Process		- Comprueba que hay exactamente 1 argumento
				- Calcula la longitud de la cadena
				- Recorre la cadena de atrás hacia adelante e imprime cada carácter
				- Imprime salto de línea al final
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
	char *str = argv[1];
	int len = 0;
	while (str[len])
		len++;
	while (len > 0)
	{
		len--;
		write(1, &str[len], 1);
	}
	write(1, "\n", 1);
}
