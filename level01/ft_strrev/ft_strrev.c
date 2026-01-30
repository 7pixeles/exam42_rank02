/**
 * ============================================================================
 * File 		ft_strrev.c
 * Author		Ayua Carreño Carvajal
 * Created on	Thu Jan 29 2026
 * GitHub		https://github.com/7pixeles
 *
 * Process		- ft_strlen: devuelve la longitud de una cadena
				- ft_strrev:
					- Calcula el último índice de la cadena
					- Intercambia caracteres desde los extremos al centro
					- Invierte la cadena in place
					- Devuelve la cadena modificada
				OBSERVACIONES:: Invertir in place evita reservas de memoria
				innecesarias y simplifica el código.
 * ============================================================================
 */

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

char *ft_strrev(char *str)
{
	int len = ft_strlen(str) - 1;
	char aux;
	int i = 0;
	while (i < len)
	{
		aux = str[i];
		str[i] = str[len];
		str[len] = aux;
		len--;
		i++;
	}
	return (str);
}
