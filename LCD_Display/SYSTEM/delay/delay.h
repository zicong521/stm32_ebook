#ifndef __DELAY_H
#define __DELAY_H 			   
#include <sys.h>	  
//////////////////////////////////////////////////////////////////////////////////  
//STM32F4工程模板-库函数版本
//淘宝店铺：http://mcudev.taobao.com			
//********************************************************************************
//修改说明
//无
////////////////////////////////////////////////////////////////////////////////// 	 
void delay_init(u8 SYSCLK);
void delay_ms(u16 nms);
void delay_us(u32 nus);

uint32_t get_ms(void);
void HAL_IncTick(void);

#endif





























