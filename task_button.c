/*
 * task_button.c
 *
 *  Created on: Dec 5, 2020
 *      Author: Aksel Torgerson
 *      Author: Matthew Kesler
 */

#include <main.h>

TaskHandle_t Task_Button_Handle;

void Task_Button(void *pvParameters) {

    while (1) {
        vTaskDelay(pdMS_TO_TICKS(10));
    }
}




