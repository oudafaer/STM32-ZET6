#ifndef __SPI_H
#define __SPI_H
#include "sys.h"
//////////////////////////////////////////////////////////////////////////////////	 
//本程序只供学习使用，未经作者许可，不得用于其它任何用途
//ALIENTEK精英STM32开发板V3
//SPI驱动 代码	   
//正点原子@ALIENTEK
//技术论坛:www.openedv.com
//创建日期:2015/1/15
//版本：V1.1
//版权所有，盗版必究。
//Copyright(C) 广州市星翼电子科技有限公司 2009-2019
//All rights reserved	
//********************************************************************************
//升级说明
//20150120  V1.1 
//新增SPI1初始化相关函数，包括SPI1_Init、SPI1_SetSpeed和SPI1_ReadWriteByte等								  
//////////////////////////////////////////////////////////////////////////////////
				    
 													  
void SPI2_Init(void);			 //初始化SPI2口
void SPI2_SetSpeed(u8 SpeedSet); //设置SPI2速度   
u8 SPI2_ReadWriteByte(u8 TxData);//SPI2总线读写一个字节
void SPI1_Init(void);			 //初始化SPI1口
void SPI1_SetSpeed(u8 SpeedSet); //设置SPI1速度  		 
u8 SPI1_ReadWriteByte(u8 TxData);//SPI1总线读写一个字节
#endif

