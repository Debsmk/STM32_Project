/*
 * ap.c
 *
 *  Created on: Jun 29, 2025
 *      Author: sa200
 */


#include "ap.h"





void apInit(void)
{


}


void apMain(void)
{
  while(1) // 메인에서 나가면 안되니까 무한루프
    {

   // HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, GPIO_PIN_SET);   // 1
   //  HAL_Delay(500);
   //  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, GPIO_PIN_RESET); // 0
   //  HAL_Delay(500);
   //HAL_Delay(5000);
    ledToggle(_DEf_LED1);
    delay(500);

    }
}
