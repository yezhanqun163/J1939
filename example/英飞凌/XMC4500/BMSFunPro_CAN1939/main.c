/*
 * main.c
 *
 *  Created on: 2016 Jun 25 09:47:28
 *  Author: JVT
 */

#include  "includes.h"

void HIB_InitHibernat(void);


osThreadDef (thread_CANComm, osPriorityHigh, 1, 1024); //period：100ms


int main(void)
{
      DAVE_Init();

      thread_CANComm_ID = osThreadCreate(osThread(thread_CANComm), NULL);

      osKernelStart();
}

