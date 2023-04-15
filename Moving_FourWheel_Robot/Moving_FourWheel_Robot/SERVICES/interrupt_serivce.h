/*
 * interrupt_serivce.h
 *
 * Created: 4/14/2023 1:37:19 PM
 *  Author: MOHAMED ABDELSALAM
 */ 

#ifndef INTERRUPT_SERIVCE_H_
#define INTERRUPT_SERIVCE_H_
/************************************************************************/
/* interrupt declaration                                                */
/************************************************************************/

/*External Interrupt Vectors*/
/****************************/
/*External Interrupt Request 0*/
#define EXT_INT_0      __vector_1
/*External Interrupt Request 1*/
#define EXT_INT_1		__vectot_2
/*External Interrupt Request 2*/
#define EXT_INT_2		__vector_3
/*External Interrupt Request 9*/
#define TIMER0_COMP		__vector_10
/*External Interrupt Request 10*/
#define TIMER0_OVF    __vector_11




#endif /* INTERRUPT_SERIVCE_H_ */