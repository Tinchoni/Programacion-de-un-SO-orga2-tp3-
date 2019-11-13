/* ** por compatibilidad se omiten tildes **
================================================================================
 TRABAJO PRACTICO 3 - System Programming - ORGANIZACION DE COMPUTADOR II - FCEN
================================================================================
  definicion de funciones del scheduler
*/

#ifndef __SCHED_H__
#define __SCHED_H__

#include "stdint.h"
#include "screen.h"
#include "tss.h"

uint32_t quantum;

void sched_init();

int16_t sched_nextTask();

int16_t GDTHandlerEntryByType(uint32_t type);
int16_t GDTEntryByType(uint32_t type);
void saltarDeHandlerATarea();


#endif	/* !__SCHED_H__ */
