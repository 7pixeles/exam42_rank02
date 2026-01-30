/**
 * ============================================================================
 * File 		alpha_mirror.c
 * Author		Ayua Carreño Carvajal
 * Created on	Thu Jan 29 2026
 * GitHub		https://github.com/7pixeles
 *
 * Process		main:
				- Comprueba que haya exactamente 1 argumento
				- Recorre la cadena carácter por carácter
				- Si es letra:
					- Sustituye por su opuesta en el alfabeto
					- Mantiene mayúsculas y minúsculas
				- Si no es letra, imprime el carácter tal cual
				- Imprime un salto de línea al final

	OBSERVACIONES: Usar tablas explícitas de letras es menos eficiente
	que un cálculo aritmético, pero aquí aporta claridad y evita errores sutiles.
 * ============================================================================
 */

#include <unistd.h>

#define l_abc "abcdefghijklmnopqrstuvwxyz"
#define l_rev "zyxwvutsrqponmlkjihgfedcba"
#define u_abc "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define u_rev "ZYXWVUTSRQPONMLKJIHGFEDCBA"

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	char *s = argv[1];
	int i = 0;
	while (s[i])
	{
		if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
		{
			int k = 0;
			if(s[i] >= 'a' && s[i] <= 'z')
			{
				while(l_abc[k])
				{
					if (l_abc[k] == s[i])
						write(1, &l_rev[k], 1);
					k++;
				}
			}
			else
			{
				while(u_abc[k])
				{
					if (u_abc[k] == s[i])
						write(1, &u_rev[k], 1);
					k++;
				}
			}
		}
		else
			write(1, &s[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}