#include <stdio.h>
#include "main.h"
#include "types.h"
#include "errors.h"

static char * error_msgs[] = 
{
	MSG_ERROR_CMD_INVALID_NUMBER_OF_ARGUMENTS,
	MSG_ERROR_CMD_INVALID_FORMAT_DATE_FLAG,
	MSG_ERROR_CMD_INVALID_FORMAT_DATE
};


status_t show_error_msg(status_t st_error)
{
	size_t position_error;
	
	position_error = st_error - INITIAL_POSITION_MSG_ERROR;
	
	if((position_error  >= sizeof (error_msgs)) / sizeof (error_msgs[0]))
	   return ERROR_INVALID_ERROR_STATUS;
	
	fprintf(stderr,"%s\n", error_msgs[position_error]);
	
	return OK;
}