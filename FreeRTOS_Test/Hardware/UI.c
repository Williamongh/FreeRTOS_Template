#include "include.h"


void vLED_Init(void)	
{
		/*����һ��GPIO_InitTypeDef���͵Ľṹ��*/
		GPIO_InitTypeDef GPIO_InitStructure;
		RCC_APB2PeriphClockCmd( RCC_APB2Periph_GPIOC, ENABLE); 
		/*ѡ��Ҫ���Ƶ�GPIOB����*/														  
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_13;							
		
		/*��������ģʽΪͨ���������*/
		GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;   

		/*������������Ϊ50MHz */   
		GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	
		/*���ÿ⺯������ʼ��GPIOF7*/
		GPIO_Init(GPIOC, &GPIO_InitStructure);
		

		/* �ر�����led��	*/
		GPIO_SetBits(GPIOC, GPIO_Pin_13);
		
}
