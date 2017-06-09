/****************************************Copyright (c)**************************************************
**                               Guangzou ZLG-MCU Development Co.,LTD.
**                                      graduate school
**                                 http://www.zlgmcu.com
**
**--------------File Info-------------------------------------------------------------------------------
** File name: 			target.h
** Last modified Date:  2004-09-17
** Last Version: 		1.0
** Descriptions: 		header file of the specific codes for LPC2200 target boards
**				Every project should include a copy of this file, user may modify it as needed
**------------------------------------------------------------------------------------------------------
** Created by: 			Chenmingji
** Created date:   		2004-02-02
** Version:				1.0
** Descriptions: 		The original version
**
**------------------------------------------------------------------------------------------------------
** Modified by: 		Chenmingji
** Modified date:		2004-09-17
** Version:				1.01
** Descriptions: 		Renewed the template, added codes to surport more compilers 
**
**------------------------------------------------------------------------------------------------------
** Modified by:         Ganda
** Modified date:       2005-06-15
** Version:			    1.02	 
** Descriptions:        Add IntDisable() and IntEnable() Functions
**
**------------------------------------------------------------------------------------------------------
** Modified by: 
** Modified date:
** Version:	
** Descriptions: 
**
********************************************************************************************************/
#ifndef __TARGET_H 
#define __TARGET_H

    #ifdef __cplusplus
    extern "C" {
    #endif


    #ifndef IN_TARGET 

extern void Reset(void);
/*********************************************************************************************************
** Function name:			Reset
** Descriptions:			resets the target board.
** input parameters:		None
**
** Returned value:			None
**         
** Used global variables:	None
** Calling modules:			None
**
** Created by:				Chenmingji
** Created Date:			2004/02/02
**-------------------------------------------------------------------------------------------------------
** Modified by:
** Modified date:
**------------------------------------------------------------------------------------------------------
********************************************************************************************************/

extern void TargetInit(void);
/*********************************************************************************************************
** Function name:			TargetInit
**
** Descriptions:			Initialize the target board; it is called in a necessary place, change it as 
**							needed
**
** input parameters:		None
** Returned value:			None
**         
** Used global variables:	None
** Calling modules:			None
**
** Created by:				Chenmingji
** Created Date:			2004/02/02
**-------------------------------------------------------------------------------------------------------
** Modified by:
** Modified date:
**------------------------------------------------------------------------------------------------------
********************************************************************************************************/
    #endif

    #ifdef __cplusplus
    }
    #endif
 
#endif

// Add IntDisable() and IntEnable() Functions
// Add by Ganda from Chenxibing
// 2005-06-15
__swi(0x00) void SwiHandle1(int Handle);

#define IRQDisable()    SwiHandle1(0)
#define IRQEnable()     SwiHandle1(1)
#define FIQDisable()    SwiHandle1(2)
#define FIQEnable()     SwiHandle1(3)
//---end

/*********************************************************************************************************
**                            End Of File
********************************************************************************************************/

