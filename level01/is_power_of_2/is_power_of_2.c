/**
 * ============================================================================
 * File 		is_power_of_2.c
 * Author		Ayua Carreño Carvajal
 * Created on	Thu Jan 29 2026
 * GitHub		https://github.com/7pixeles
 *
 * Process		- is_power_of_2:
					- Divide el número entre 2 mientras sea par
					- Comprueba si el resultado final es 1
					- Devuelve 1 si es potencia de 2, 0 si no
					
	OBSERVACIONES: Una alternativa más directa sería usar operaciones a nivel de bits
 * ============================================================================
 */

int	is_power_of_2(unsigned int n)
{
	while (n > 0 && (n % 2 == 0))
		n = n / 2;
	if (n == 1)
		return (1);
	else
		return (0);
}
