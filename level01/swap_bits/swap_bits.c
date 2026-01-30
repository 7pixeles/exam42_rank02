/**
 * ============================================================================
 * File 		swap_bits.c
 * Author		Ayua Carreño Carvajal
 * Created on	Thu Jan 29 2026
 * GitHub		https://github.com/7pixeles
 *
 * Process		- swap_bits:
					- Toma un byte de 8 bits
					- Desplaza los 4 bits superiores a la posición inferior
					- Desplaza los 4 bits inferiores a la posición superior
					- Combina ambos con OR
					- Devuelve el byte con los 4 bits intercambiados
 * ============================================================================
 */

unsigned char swap_bits(unsigned char octet)
{
	return(octet >> 4 | octet << 4);
}
