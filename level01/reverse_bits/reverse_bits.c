/**
 * ============================================================================
 * File 		reverse_bits.c
 * Author		Ayua Carreño Carvajal
 * Created on	Thu Jan 29 2026
 * GitHub		https://github.com/7pixeles
 *
 * Process		- reverse_bits (versión con bucle):
					- Inicializa un byte auxiliar a 0
					- Recorre 8 posiciones de bit (0 a 7)
					- Si el bit i del original está activo:
						- Activa el bit 7-i en el auxiliar
					- Devuelve el byte con los bits invertidos
 * ============================================================================
 */

unsigned char reverse_bits(unsigned char octet)
{

	unsigned char aux = 0;
	int i;

	for (i = 0; i < 8; i++)
	{
		if (octet & (1 << i))
			aux |= (1 << (7 - i));
	}
	return aux;

	// * FORMATO DESGLOSADO
/*
	if (octet & 128)
		aux = aux | 1;
	if (octet & 64)
		aux = aux | 2;
	if (octet & 32)
		aux = aux | 4;
	if (octet & 16)
		aux = aux | 8;
	if (octet & 8)
		aux = aux | 16;
	if (octet & 4)
		aux = aux | 32;
	if (octet & 2)
		aux = aux | 64;
	if (octet & 1)
		aux = aux | 128;
	return (aux);
	*/
}
