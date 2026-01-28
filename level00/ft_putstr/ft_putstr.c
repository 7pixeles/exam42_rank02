/**
 * ============================================================================
 * File 		ft_putstr.c
 * Author		Ayua Carreño Carvajal
 * Created on	Wed Jan 28 2026
 * GitHub		https://github.com/7pixeles
 *
 * Process		Recorre la cadena imprimiendo el carácter en cada vuelta
 * ============================================================================
 */

#include <unistd.h>

void ft_putstr(char *str)
{
	int i = 0;
	while (str[i]){
		write(1, &str[i], 1);
		i++;
	}
}

