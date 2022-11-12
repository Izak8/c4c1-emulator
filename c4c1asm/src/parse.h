#ifndef PARSE_H
#define PARSE_H

/* C STANDARD INCLUDES */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* LOCAL INCLUDES */
#include "../../include/c4c1_defs.h"

/* FUNCTION DECLARATIONS */

byte* parseLine(FILE* fp);
byte** tokenizeLine(byte* src);

#endif