#include "stm32f10x.h"


void delay (uint32_t y){

uint32_t x =0;
	while(y>x){
	x++;
	}

}




int main (){

	
// ENABLE CLOCK GPIOA
	RCC->APB2ENR|=RCC_APB2ENR_IOPAEN;

//Port configuration register low 
GPIOA->CRL=GPIO_CRL_MODE; //0X33333333; *clear
GPIOA->CRL=GPIO_CRL_MODE0_1 ;//0X00000002;  *set register	
	
	while(1){
/* led blink  PA0 */
	GPIOA->ODR|=1<<0;//SET bit 0 OF ODR_______led on
		delay(2000000);
	GPIOA->ODR&=~(1<<0); // RESET bit  0 OF ODR__________led off
		delay(2000000);

	
	
	}

}
