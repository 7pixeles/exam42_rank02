/**
 * ============================================================================
 * File 		rot_13.c
 * Author		Ayua Carreño Carvajal
 * Created on	Wed Jan 28 2026
 * GitHub		https://github.com/7pixeles
 *
 * Process		- Comprueba que hay exactamente 1 argumento
				- Recorre la cadena carácter por carácter
				- Aplica ROT13 a letras (A-M, a-m +13; N-Z, n-z -13)
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
		if ((str[i] >= 'a' && str[i] <= 'm')
			|| (str[i] >= 'A' && str[i] <= 'M'))
			str[i] = str[i] + 13;
		else if ((str[i] >= 'n' && str[i] <= 'z')
			|| (str[i] >= 'N' && str[i] <= 'Z'))
			str[i] = str[i] - 13;
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}
