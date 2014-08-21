#ifndef ldc1000_h
#define ldc1000_h

#if defined(ARDUINO) && (ARDUINO >= 100)
#include <Arduino.h>
#else
#include <WProgram.h>
#endif

#define LDCLIB_VERSION "0.1"

#define LDCLIB_OK				0
#define LDCLIB_ERROR_CHECKSUM	-1
#define LDCLIB_ERROR_TIMEOUT	-2

class ldc1000
{
public:
	int proximtyData;
	int frequencyData;
};
#endif
//
// END OF FILE
//