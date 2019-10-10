#include <stdio.h>
#include <float.h>
#include "DataUnionDLL.h"

void printInt(union Dato dato) {
	printf("Your integer %d storage size is %zu bytes. \n\n", dato.entero,
		sizeof(dato));
}

void printChar(union Dato dato) {
	printf("Your string %s storage size is %zu bytes.\n\n", dato.str, sizeof(dato));
}

void printDouble(union Dato dato) {
	printf("Your double %f storage size is %zu bytes, I can read any number "
		"from %g to %g in this data type. \n\n", dato.real, sizeof(dato),
		DBL_MIN, DBL_MAX);
}
