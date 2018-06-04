#include <stdio.h>
#include <time.h> 
#include "main.h"
#include "types.h"
#include "sysdate.h"


status_t perform_printer(date_format_t format, struct tm * time_tm )
{
  char str_date[MAX_STR_DATE];

	switch(format)
	{
      case DATE_FORMAT_DDMMAAAA:
      	  strftime(str_date, sizeof(str_date), SET_DATE_FORMAT_DDMMAAAA, time_tm);
      		printf("%s\n", str_date);			
      		break;

      case DATE_FORMAT_AAAADDD:
      		strftime(str_date, sizeof(str_date), SET_DATE_FORMAT_AAAADDD, time_tm);
    			printf("%s\n", str_date);
    			break;
  
   		case DATE_FORMAT_AAAAMMDD:
  		    strftime(str_date, sizeof(str_date), SET_DATE_FORMAT_AAAAMMDD, time_tm);
      		printf("%s\n", str_date);
      		break;
  
    	case DATE_FORMAT_AAAAMMDDHHMMSS:
    	    strftime(str_date, sizeof(str_date), SET_DATE_FORMAT_AAAAMMDDHHMMSS, time_tm);
      		printf("%s\n", str_date);
      		break;
    
     	case DATE_FORMAT_AAAADDDHHMMSS:
    	    strftime(str_date, sizeof(str_date), SET_DATE_FORMAT_AAAADDDHHMMSS, time_tm);
    			printf("%s\n", str_date);
    			break;

  	  default:
    			break;

	}


  return OK;

}