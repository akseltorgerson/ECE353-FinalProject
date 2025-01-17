/*
 * task_bucky.h
 *
 *  Created on: Dec 5, 2020
 *      Author: Aksel Torgerson
 *      Author: Matthew Kesler
 */

#ifndef TASK_BUCKY_H_
#define TASK_BUCKY_H_

#include <main.h>

#define BASE_DELAY  1
#define BUCKY_QUEUE_LEN 3

typedef enum {
    BUCKY_LEFT,
    BUCKY_RIGHT,
    BUCKY_CENTER,
    BUCKY_JUMP,
    BUCKY_COLOR
} BUCKY_CMD_t;

typedef struct {
    BUCKY_CMD_t cmd;
    uint8_t     speed;
} BUCKY_MSG_t;

extern TaskHandle_t Task_Bucky_Handle;
extern TaskHandle_t Task_Jump_Handle;
extern QueueHandle_t Queue_Bucky;
extern SemaphoreHandle_t Sem_LCD_Draw;

/******************************************************************************
 * This function will initialize Queue_Bucky and initialize the LCD
 ******************************************************************************/
void bucky_init(void);

/******************************************************************************
 * This task manages the movement of Bucky. The accelerometer moves Bucky left
 * or right, and the button S2 makes Bucky jump. This task is also responsible
 * for general game flow.
 ******************************************************************************/
void Task_Bucky(void *pvParameters);

#endif /* TASK_BUCKY_H_ */
