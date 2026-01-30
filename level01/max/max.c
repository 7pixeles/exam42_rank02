/**
 * ============================================================================
 * File 		max.c
 * Author		Ayua Carreño Carvajal
 * Created on	Thu Jan 29 2026
 * GitHub		https://github.com/7pixeles
 *
 * Process		- max:
					- Recorre un array de enteros de tamaño len
					- Compara cada elemento con el máximo actual
					- Devuelve el valor máximo encontrado
 * ============================================================================
 */

int max(int *tab, unsigned int len)
{
	unsigned int i = 0;
	int max = 0;
	while (i < len)
	{
		if (tab[i] < max)
			max = tab[i];
		i++;
	}
	return (max);
}
