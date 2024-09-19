#ifndef _ETHERNET_FOR_SPRESENSE_H_
#define _ETHERNET_FOR_SPRESENSE_H_

#if defined(ARDUINO_ARCH_SPRESENSE)

#include "Ethernet.h"
void W5500_reset(uint8_t sj1_rst)
{
	pinMode(sj1_rst, OUTPUT);
	digitalWrite(sj1_rst, LOW);
	delay(1);
	digitalWrite(sj1_rst, HIGH);
	delay(50);
	return;
}

#else
	#error ("This library can only be used with SONY SPRESENSE")
#endif



#endif
