/**
 * ============================================================================
 * File 		ft_strdup.c
 * Author		Ayua Carreño Carvajal
 * Created on	Thu Jan 29 2026
 * GitHub		https://github.com/7pixeles
 *
 * Process		- ft_strdup:
					- Calcula la longitud de la cadena origen
					- Reserva memoria para la copia
					- Copia la cadena carácter por carácter
					- Añade el terminador nulo
					- Devuelve la nueva cadena
 * ============================================================================
 */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int len = 0;
	while (src[len])
		len++;
	char *cpy = malloc((len + 1) * sizeof(char));
	if (!cpy)
		return (NULL);
	int i = 0;
	while(src[i])
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}