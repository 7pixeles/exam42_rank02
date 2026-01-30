/**
 * ============================================================================
 * File 		ft_strcspn.c
 * Author		Ayua Carreño Carvajal
 * Created on	Thu Jan 29 2026
 * GitHub		https://github.com/7pixeles
 *
 * Process		- ft_strcspn:
					- Recorre la cadena principal desde el inicio
					- Comprueba si cada carácter pertenece al conjunto reject
					- Se detiene al encontrar la primera coincidencia
					- Devuelve el número de caracteres iniciales válidos

	OBSERVACIONES: La función strcspn calcula cuántos caracteres consecutivos
	hay al inicio de una cadena que NO pertenecen a un conjunto dado.
 * ============================================================================
 */

#include <stdlib.h>

size_t ft_strcspn(const char *s, const char *reject)
{
	int i = 0;
	while(s[i])
	{
		int k = 0;
		while (reject[k])
		{
			if (s[i] == reject[k])
				return(i);
			k++;
		}
		i++;
	}
	return (i);
}
