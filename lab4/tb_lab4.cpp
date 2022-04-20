#include "lab4.h"

#include <stdio.h>
#define iterations 40

int main(void)
{

data_type set_point = -80.0;
data_type sample[iterations] = {-90.000,-88.988,-87.977,-86.966,-85.955,-84.946,-83.936,-82.928,-81.920,-80.912,-80.283,-79.926,
		-79.784,-79.774,-79.829,-79.898,-79.955,-79.993,-80.011,-80.017,-80.016,-80.010,-80.005,-80.002,-80.000,-79.999,
		-79.999,-79.999,-79.999,-80.000,-80.000,-80.000,-80.000,-80.000,-80.000,-80.000,-79.999,-80.000,-80.001,-80.000};



data_type kp = 19.6827; // w/k
data_type ki = 0.7420; // w/k/s
data_type kd = 0.0;
data_type op;

printf("testing cpp\r\n");


for (int i =0; i<iterations; i++){
	op = PID (set_point, kp, ki, kd, sample[i], 12.5, 40);
	printf("result %s\r\n", op.to_string(10,true).c_str());
}
return 0;
}
