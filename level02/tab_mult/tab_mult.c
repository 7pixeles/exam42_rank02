/**
 * ============================================================================
 * File 		tab_mult.c
 * Author		Ayua Carreño Carvajal
 * Created on	Fri Jan 30 2026
 * GitHub		https://github.com/7pixeles
 *
 * Process		- ft_atoi: convierte una cadena de dígitos a entero
                        - ft_putnbr: imprime un entero por salida estándar
                        - main:
                        - Comprueba que haya exactamente 1 argumento
                        - Convierte el argumento a número entero
                        - Inicializa contador m=1 y carácter i='1'
                        - Repite mientras m <= 9:
                                - Calcula res = n * m
                                - Imprime i, " x ", n, " = ", res
                                - Incrementa i y m
                                - Imprime salto de línea
                        - Si no hay 1 argumento, imprime solo salto de línea
 * ============================================================================
 */

#include <unistd.h>

int ft_atoi(char *nbr)
{
        int res = 0;
        int i = 0;
        while (nbr[i])
        {
                if (nbr[i] >= '0' && nbr[i] <= '9')
                        res = (res * 10) + (nbr[i] - '0');
                i++;
        }
        return (res);
}

void ft_putnbr(int nbr)
{
        char c;
        if (nbr > 9)
        {
                ft_putnbr(nbr/10);
        }
        c = nbr % 10 + '0';
        write(1, &c, 1);
}

int main(int argc, char *argv[])
{
        char *nbr = argv[1];
        char i = '1';
        int m = 1;
        int res = 0;
        int n = 0;
        if (argc == 2)
        {
                n = ft_atoi(nbr);
                while (m <= 9)
                {
                        res = n * m;
                        write(1, &i, 1);
                        write(1, " x ", 3);
                        ft_putnbr(n);
                        write(1, " = ", 3);
                        ft_putnbr(res);
                        i++;
                        m++;
                        write(1, "\n", 1);
                }
        }
		else
			write(1, "\n", 1);
        return (0);
}
