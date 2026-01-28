/**
 * ============================================================================
 * File 		ft_strlen.c
 * Author		Ayua Carreño Carvajal
 * Created on	Wed Jan 28 2026
 * GitHub		https://github.com/7pixeles
 *
 * Process		Recorre la cadena y devuelve el iterador.
 * ============================================================================
 */

int ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
	{i++;}
	return (i);
}