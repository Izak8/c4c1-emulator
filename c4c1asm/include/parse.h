#ifndef PARSE_H
#define PARSE_H

/* C STANDARD LIBRARIES */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

/* FUNCTION DECLARATIONS */

unsigned char* parse(FILE* fp);
unsigned char** tokenize(unsigned char* src);

#endif