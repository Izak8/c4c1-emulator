#include "../include/parse.h"

unsigned char* parse(FILE* fp)
{
    unsigned char* buf = {0};
    int buf_size = 0;         
    int buf_position = 0;
    
    int c = 0;    //Value of the current character in stream fp
    
    while((c = fgetc(fp)) != EOF)
    {
        //While file is open

        //Check buffer_size
        //Allocate new byte if at buf_size = 0
        if(buf_position > buf_size)
        {
            buf = realloc(buf, buf_size + 1);
        }
        else
        {
            buf = malloc(1);
        }
        //Check if current char is \n
        //Break and store \0 in buf if true
        if(c == '\n')
        {
            buf[buf_position] = '\0';
            break;
        }
        //Otherwise, read current char
        //Store in buf
        buf[buf_position++] = c;
    }

    return buf;
}

unsigned char** tokenize(unsigned char* src)
{
    //tokenize
}