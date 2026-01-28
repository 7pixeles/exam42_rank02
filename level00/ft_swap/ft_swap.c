/**
 * ============================================================================
 * File 		ft_swap.c
 * Author		Ayua Carreño Carvajal
 * Created on	Wed Jan 28 2026
 * GitHub		https://github.com/7pixeles
 *
 * Process		Intercambia los valores de dos enteros usando un auxiliar
 * ============================================================================
 */

void ft_swap(int *a, int *b)
{
	int aux;
	aux = *a;
	*a = *b;
	*b = aux;
}