/*=======================================================================================
** File Name:  temp_mon_msg.h
**
** Title:  Message Definition Header File for TEMP_MON Application
**
** $Author:    Jane Smith
** $Revision: 1.1 $
** $Date:      2017-01-13
**
** Purpose:  To define TEMP_MON's command and telemetry message defintions 
**
** Modification History:
**   Date | Author | Description
**   ---------------------------
**   2017-01-13 | Jane Smith | Build #: Code Started
**
**=====================================================================================*/
    
#ifndef _TEMP_MON_MSG_H_
#define _TEMP_MON_MSG_H_

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
** TEMP_MON command codes
*/
#define TEMP_MON_NOOP_CC                 0
#define TEMP_MON_RESET_CC                1
#define TEMP_MON_SET_COLD_LIMIT_CC       2
#define TEMP_MON_SET_HOT_LIMIT_CC        3

/*
** Local Structure Declarations
*/
typedef struct
{
    uint8              TlmHeader[CFE_SB_TLM_HDR_SIZE];
    uint8              usCmdCnt;
    uint8              usCmdErrCnt;
    uint16             usPadding;
    int32              iTempValue;
    int16              sTempDirection;
    int16              sTempRange;
} TEMP_MON_HkTlm_t;


#endif /* _TEMP_MON_MSG_H_ */

/*=======================================================================================
** End of file temp_mon_msg.h
**=====================================================================================*/
    
