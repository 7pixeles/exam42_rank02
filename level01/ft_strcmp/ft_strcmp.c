/**
 * ============================================================================
 * File 		ft_strcmp.c
 * Author		Ayua Carreño Carvajal
 * Created on	Thu Jan 29 2026
 * GitHub		https://github.com/7pixeles
 *
 * Process		- ft_strcmp:
					- Recorre ambas cadenas carácter por carácter
					- Compara los valores ASCII en cada posición
					- Devuelve la diferencia al primer desacuerdo
					- Devuelve 0 si las cadenas son iguales
 * ============================================================================
 */

int ft_strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}
