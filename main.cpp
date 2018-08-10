#include "lpc17xx.h"
#include "Serial.h"
#include "stdio.h"

int main()
{
	SER_Init();
	printf("Hello world\r\n");

	while (1)
	{
       //loop for ever.
	}
	
}