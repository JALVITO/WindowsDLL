// DataUnionDLL.h
#pragma once

#ifdef DATAUNIONDLL_EXPORTS
#define DATAUNIONDLL_API __declspec(dllexport)
#else
#define DATAUNIONDLL_API __declspec(dllimport)
#endif

union Dato {
	int entero;
	double real;
	char str[101];
};

DATAUNIONDLL_API void printInt(union Dato dato);
DATAUNIONDLL_API void printChar(union Dato dato);
DATAUNIONDLL_API void printDouble(union Dato dato);