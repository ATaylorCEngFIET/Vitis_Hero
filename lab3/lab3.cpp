#include "lab3.h"

void sensor_filter( ip_type input[16], op_type *output)
{
	int32_t accumulator=0;
	accum: for(int i = 0; i<16; i++)
	{
		accumulator += (int32_t ) input[i];
	}
	*output = accumulator / 16;
}
