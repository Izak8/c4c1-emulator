#include "parse.h"

extern byte* parseLine(FILE* fp)
{
    //Reads characters from a file stream specified by fp into a character array.
    //A '\n' character is stored as '\0', terminating the character array.
    //The function returns a pointer to the first character in the array.

    //The return type is a pointer to a 'byte' --> unsigned char (typedef).

    //Successive calls to the function will continue parsing each line of a file
    //until EOF is reached.

    //To parse a specific line, use fsetpos.

    //A buffer and some tracking variables
    byte* buf = {0};
    int buf_size = 0;         
    int buf_position = 0;

    int c = 0;    //Value of the current character
    
    while((c = fgetc(fp)) != EOF) //While file is open
    {
        //Allocate more space in buf for the next character
        if(buf_position > buf_size)
        {
            buf = realloc(buf, buf_size + 1);
        }
        else
        {
            //Base case when buf_size == 0
            buf = malloc(1);
        }
        //Check if current char is \n
        if(c == '\n')
        {
            //Break loop and store \0 as last character
            buf[buf_position] = '\0';
            break;
        }
        //Otherwise, store current char
        buf[buf_position++] = c;
        //Repeat..
    }

    return buf;
}

byte** tokenizeLine(byte* src)
{
    //return 0 for now
    return 0;
}