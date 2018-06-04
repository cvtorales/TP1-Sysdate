
/* main.h */

#ifndef MAIN__H
#define MAIN__H

#include <stdio.h>
#include "types.h"


#define NUMBER_OF_ARGUMENTS 3

#define CMD_ARG_FORMAT_DATE_FLAG_POSITION 1
#define CMD_ARG_FORMAT_DATE_FLAG "-fmt"
#define CMD_ARG_FORMAT_DATE_POSITION 2

#define DATE_FORMAT_STR_DDMMAAAA "DDMMAAAA"
#define DATE_FORMAT_STR_AAAADDD "AAAADDD"    
#define DATE_FORMAT_STR_AAAAMMDD "AAAAMMDD"
#define DATE_FORMAT_STR_AAAAMMDDHHMMSS "AAAAMMDDHHmmSS"
#define DATE_FORMAT_STR_AAAADDDHHMMSS "AAAADDDHHmmSS"

status_t validate_arguments(int argc, char * argv[]);
status_t validate_date_format(char * format_argument, date_format_t * format);

#endif