/**
 * ============================================================================
 * File 		ft_strcpy.c
 * Author		Ayua Carreño Carvajal
 * Created on	Wed Jan 28 2026
 * GitHub		https://github.com/7pixeles
 *
 * Process		- Copia la cadena s2 en s1 carácter por carácter
				- Añade el carácter nulo al final
				- Devuelve s1
 * ============================================================================
 */

char	*ft_strcpy(char *s1, char *s2)
{
	int i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	// s1[i + 1] = s2[i];
	return (s1);
}