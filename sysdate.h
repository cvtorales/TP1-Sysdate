#ifndef SYSDATE__H
#define SYSDATE__H

#include <stdio.h>
#include "types.h"



#define SET_DATE_FORMAT_DDMMAAAA "%d-%m-%Y"
#define SET_DATE_FORMAT_AAAADDD "%Y-%j"
#define SET_DATE_FORMAT_AAAAMMDD "%Y-%m-%d"
#define SET_DATE_FORMAT_AAAAMMDDHHMMSS "%Y-%m-%d %H:%M:%S"
#define SET_DATE_FORMAT_AAAADDDHHMMSS "%Y-%j %H:%M:%S"



status_t perform_printer(date_format_t format, struct tm * time_tm );

#endif