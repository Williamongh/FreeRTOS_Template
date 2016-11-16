#include "include.h"

void Hardware_Init()
{
		vLED_Init();
		USART1_Init(115200);

		
}

void FreeRTOS_Init()
{
		xTaskCreate( vTask1, "Task 1", 100, NULL, 3, NULL );
		xTaskCreate( vTask2, "Task 2", 100, NULL, 2, NULL );			
	
	  vTaskStartScheduler();	
}
