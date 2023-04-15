/*
 * BitMath.h
 *
 * Created: 4/12/2023 7:09:48 PM
 *  Author: Osama Elsaadany
 */ 


#ifndef BITMATH_H_
#define BITMATH_H_


#define SET_BIT(Reg,BitNumber)    (Reg|=(1<<BitNumber))
#define CLEAR_BIT(Reg,BitNumber)  (Reg&=~(1<<BitNumber))
#define TOGGLE_BIT(Reg,BitNumber) (Reg^=(1<<BitNumber))
#define GET_BIT(Reg,BitNumber)    ((Reg>>BitNumber)&1)
#define Read_Bit(reg,bit)         ((reg>>bit) & 1)
#define Set_Bit(reg,bit)          (reg|=1<<bit)
#define CLR_Bit(reg,bit)          (reg&=~(1<<bit))
#define TOG_BIT(reg,bit)          (reg=reg^(1<<bit))
#define WRITE_BIT(reg,bit,val)    (reg=(reg&(~(1<<bit))) | (val<<bit))


#endif /* BITMATH_H_ */