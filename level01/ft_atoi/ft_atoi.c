/**
 * ============================================================================
 * File 		ft_atoi.c
 * Author		Ayua Carreño Carvajal
 * Created on	Thu Jan 29 2026
 * GitHub		https://github.com/7pixeles
 *
 * Process		- ft_atoi:
					- Ignora espacios iniciales
					- Detecta signo positivo o negativo
					- Convierte caracteres numéricos a entero
					- Aplica el signo y devuelve el resultado

	OBSERVACIONES: Implementacion clara sin dependencias externas y
	con control básico del signo (asumiendo la existencia de sólo un
	carácter determinante). 
	No gestiona desbordamientos (INT_MAX / INT_MIN), peor no
	es necesario en este ejercicio.
 * ============================================================================
 */

int ft_atoi(const char *str)
{
	int i = 0;
	int sign = 1;
	int res = 0;

	while (str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}

	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return(res * sign);
}