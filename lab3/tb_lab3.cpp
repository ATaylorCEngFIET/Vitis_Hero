#include "lab3.h"

#define MAX_LINE_LENGTH 80

int main()
{
	FILE *fp;
    char line[80];
    ip_type input[16];
    op_type output;

    printf("HLS Example\n\r");
	// Open a file for the output results
	fp=fopen("input.dat","r");
	if (fp == NULL)
		printf("error opening file\n\r");
	int i = 0;
	while (fgets(line, MAX_LINE_LENGTH, fp) != NULL) {
	       input[i] = atoi(line); 						//convert string to integer format
	       i++;
	}
	fclose(fp);
	//run the sensor
	sensor_filter(input, &output);
	printf("Result from HLS module = %d \n\r",output);
}
