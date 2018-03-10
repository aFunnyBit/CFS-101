/*=======================================================================================
** File Name:  temp_io_msg.h
**
** Title:  Message Definition Header File for TEMP_IO Application
**
** $Author:    Jane Smith
** $Revision: 1.1 $
** $Date:      2017-01-13
**
** Purpose:  To define TEMP_IO's command and telemetry message defintions 
**
** Modification History:
**   Date | Author | Description
**   ---------------------------
**   2017-01-13 | Jane Smith | Build #: Code Started
**
**=====================================================================================*/
    
#ifndef _TEMP_IO_MSG_H_
#define _TEMP_IO_MSG_H_

/*
** Pragmas
*/

/*
** Include Files
*/



/*
** Local Defines
*/

/*
** TEMP_IO command codes
*/
#define TEMP_IO_NOOP_CC                 0
#define TEMP_IO_RESET_CC                1
#define TEMP_IO_SET_CURRENT_TEMP_CC     2
#define TEMP_IO_SET_DELTA_VALUE_CC      3

/*
** Local Structure Declarations
*/
typedef struct
{
    uint8              TlmHeader[CFE_SB_TLM_HDR_SIZE];
    uint8              usCmdCnt;
    uint8              usCmdErrCnt;

    /* TODO:  Add declarations for additional housekeeping data here */

} TEMP_IO_HkTlm_t;


#endif /* _TEMP_IO_MSG_H_ */

/*=======================================================================================
** End of file temp_io_msg.h
**=====================================================================================*/
    
