#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include "lab1.h"

#define size 32
#define max_val 65535


uint16_t a[size],b[size],c[size];
uint16_t result;
uint16_t hls_result;


int main (void)
{
	int i;

	for ( i = 0; i < size; i++){
		a[i] = rand() % max_val;
		b[i] = rand() % max_val;
		c[i] = rand() % max_val;
	}

	for (i = 0; i < size; i++){
		result = a[i] * b[i] + c[i];
		hls_result = lab1(a[i],b[i],c[i]);
		if (result == hls_result){
			std::printf("Pass\n\r");
		}
		else
			std::printf("Fail\n\r");
	}

}
