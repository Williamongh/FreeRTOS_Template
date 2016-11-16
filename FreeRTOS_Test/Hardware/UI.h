#ifndef  __UI_INIT__H
#define  __UI_INIT__H

#define LED1(a)	if (a)	\
									GPIO_SetBits(GPIOC,GPIO_Pin_13);\
								else		\
									GPIO_ResetBits(GPIOC,GPIO_Pin_13)
#define LED_ON  0
#define LED_OFF 1

								
void vLED_Init(void)	;



#endif
