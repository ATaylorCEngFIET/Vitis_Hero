#include "stdint.h"
#include "stdio.h"
#include "stdlib.h"
#include <string.h>

typedef int16_t ip_type;
typedef int16_t op_type;

void sensor_filter( ip_type input[16], op_type *output);
