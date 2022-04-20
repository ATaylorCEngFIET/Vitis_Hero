#include "stdint.h"
#include "lab2.h"

void lab2 (uint16_t loop, uint16_t a[32], uint16_t b[32], uint16_t c[32], uint16_t result[32])
{
	uint16_t i;
	lab2_label0:for (i = 0; i < loop; i++){
		result[i] = a[i] * b[i] + c[i];
	}
}
