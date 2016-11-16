#include "include.h"

void vTask1(void *pvPara)
{
		u32 a=0;
		portTickType xLastWakeTime;
		xLastWakeTime = xTaskGetTickCount();


		for(;;)
		{
			a++;
			if(a>5)
				LED1(LED_OFF);
			else 
				LED1(LED_ON);
			
			if(a==10)
					a=0;
			
			vTaskDelayUntil( &xLastWakeTime, ( 1000 / portTICK_RATE_MS ) );
		}
}

void vTask2(void *pvPara)
{

//		portTickType xLastWakeTime;
//		xLastWakeTime = xTaskGetTickCount();

		for(;;)
		{
//				LED1(LED_ON);
//				vTaskDelayUntil( &xLastWakeTime, ( 300 / portTICK_RATE_MS ) );
				printf("abc\n");
		}
}
