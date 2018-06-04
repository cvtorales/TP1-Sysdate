#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "types.h"
#include "main.h"
#include "sysdate.h"
#include "errors.h"

char * array_date_format[MAX_DATE_FORMAT] =
{
  DATE_FORMAT_STR_DDMMAAAA,
  DATE_FORMAT_STR_AAAADDD,     
  DATE_FORMAT_STR_AAAAMMDD,
  DATE_FORMAT_STR_AAAAMMDDHHMMSS,
  DATE_FORMAT_STR_AAAADDDHHMMSS 
};


int main(int argc, char * argv[])
{
	time_t time_now;
	struct tm *time_tm;
	status_t st;
	date_format_t format;

	if((st = validate_arguments(argc, argv)) != OK)
	{
		show_error_msg(st);
		return st;
	}

	if((st = validate_date_format(argv[CMD_ARG_FORMAT_DATE_POSITION], &format)) != OK)
	{
		show_error_msg(st);
		return st;
	}	

	time_now = time(&time_now);
	time_tm = localtime(&time_now);

	if((st = perform_printer(format, time_tm)) != OK)
	{
		show_error_msg(st);
		return st;
	}	

	return EXIT_SUCCESS;
}


status_t validate_arguments(int argc, char * argv[])
{

	if(argv == NULL)
		return ERROR_NULL_POINTER;
			
	if(argc != NUMBER_OF_ARGUMENTS)
		return ERROR_INVALID_NUMBER_OF_ARGUMENTS;	

	if(strcmp(argv[CMD_ARG_FORMAT_DATE_FLAG_POSITION], CMD_ARG_FORMAT_DATE_FLAG))
		return ERROR_CMD_INVALID_FORMAT_DATE_FLAG; 

	return OK;
}



status_t validate_date_format(char * format_argument, date_format_t * format)
{
	size_t i;
	int formats_quantity = 0;
	
	if (format_argument == NULL || format == NULL)
		return ERROR_NULL_POINTER;
	
	for (i = 0; i < MAX_DATE_FORMAT; i++)
	{
		if (!strcmp (array_date_format[i], format_argument))
		{
			*format = (date_format_t) i;
			formats_quantity++;
		}
	}

	if(!formats_quantity)
		return ERROR_CMD_INVALID_FORMAT_DATE;

	return OK;
}

