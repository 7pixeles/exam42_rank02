/**
 * ============================================================================
 * File 		do_op.c
 * Author		Ayua Carreño Carvajal
 * Created on	Thu Jan 29 2026
 * GitHub		https://github.com/7pixeles
 *
 * Process		- main:
					- Comprueba que haya exactamente 3 argumentos
					- Convierte los operandos a enteros
					- Obtiene el operador aritmético
					- Ejecuta la operación correspondiente
					- Imprime el resultado seguido de salto de línea

	OBSERVACIONES: No hay control de división o módulo entre cero.
	En estos ejercicios suele ignorarse, pero en código real 
	sería un error grave.
 * ============================================================================
 */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	if (argc != 4)
	{
		write(1, "\n", 1);
		return (0);
	}
	int op1 = atoi(argv[1]);
	int op2 = atoi(argv[3]);
	char op = argv[2][0];
	int res = 0;
	if (op == '+')
		res = op1 + op2;
	else if (op == '-')
		res = op1 - op2;
	else if (op == '*')
		res = op1 * op2;
	else if (op == '/')
		res = op1 / op2;
	else if (op == '%')
		res = op1 % op2;
	printf("%d\n", res);
}
