/*
 * DogLCD.h
 *
 *  Created on: 30 mars 2017
 *      Author: gama14au
 */

#ifndef DOGLCD_H_
#define DOGLCD_H_
/* Includes ------------------------------------------------------------------*/
#include "stm32l4xx_hal.h"
#include "string.h"

extern SPI_HandleTypeDef hspi2;
uint8_t allowWrite;

void printValues();
void sendDataAt3(const uint8_t Data[], uint8_t posX, uint8_t posY, uint8_t columns,uint8_t rows);
void printStartScreen();
void sendDataAt(uint8_t *Data, uint8_t posX, uint8_t posY, uint8_t columns, uint8_t rows);
void sendCommand(uint8_t Cmd);
void initLCD();
void clearScreen();
void setCursorPosition(uint8_t posX, uint8_t posY);
void sendChar(uint8_t inChar);
void sendFont6x8(uint8_t inChar);
void sendTextAt(uint8_t Data[], uint8_t posX, uint8_t posY);
uint8_t sendTextAt2(uint8_t Data[], uint8_t len, uint8_t posX, uint8_t posY);
void lcdSetBacklight(uint8_t mode);
void lcdPrintMessage(uint8_t message[], uint8_t length);

void extractOneTenHundredThousands(int value, uint8_t *ones, uint8_t *tens, uint8_t *hundreds, uint8_t *thousands, uint8_t *sign);
void writeSmallNumberAt(uint8_t value, uint8_t x, uint8_t y);
void writeBigNumberAt(uint8_t value, uint8_t x, uint8_t y);
void writeSignAt(uint8_t sign, uint8_t x, uint8_t y);


#endif /* DOGLCD_H_ */
