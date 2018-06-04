
#ifndef ERRORS__H
#define ERRORS__H

#include <stdio.h>
#include "types.h"

#define INITIAL_POSITION_MSG_ERROR 2
#define MSG_ERROR_CMD_INVALID_NUMBER_OF_ARGUMENTS "Cantidad de argumentos inválida."
#define MSG_ERROR_CMD_INVALID_FORMAT_DATE_FLAG "Se ha ingresado una bandera incorrecta."
#define MSG_ERROR_CMD_INVALID_FORMAT_DATE "El formato de fecha ingresado es inválido."



status_t show_error_msg(status_t st_error);

#endif