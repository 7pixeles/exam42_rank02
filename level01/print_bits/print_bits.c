/**
 * ============================================================================
 * File 		print_bits.c
 * Author		Ayua Carreño Carvajal
 * Created on	Thu Jan 29 2026
 * GitHub		https://github.com/7pixeles
 *
 * Process		- print_bits:
					- Recorre los bits de un byte de mayor a menor
					- Usa una máscara que empieza en 128 y se divide por 2
					- Imprime '1' si el bit está activo (&), '0' si no
 * ============================================================================
 */

#include <unistd.h>

void print_bits(unsigned char octet)
{
	int byte = 128;

	while (byte >= 1)
	{
		if (octet & byte)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		byte = byte / 2;
	}

	// * FORMATO DESGLOSADO:
/* 	if (octet & 64)
		write(1, "1", 1);
	else
		write(1, "0", 1);
	if (octet & 32)
		write(1, "1", 1);
	else
		write(1, "0", 1);
	if (octet & 16)
		write(1, "1", 1);
	else
		write(1, "0", 1);
	if (octet & 8)
		write(1, "1", 1);
	else
		write(1, "0", 1);
	if (octet & 4)
		write(1, "1", 1);
	else
		write(1, "0", 1);
	if (octet & 2)
		write(1, "1", 1);
	else
		write(1, "0", 1);
	if (octet & 1)
		write(1, "1", 1);
	else
		write(1, "0", 1); */
}