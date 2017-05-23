/*
 * spi.c
 *
 *  Created on: May 22, 2017
 *      Author: ahmed.adel
 */

#include"spi_config.h"
#include "wiringPiSPI.h"
#include "wiringPi.h"

void SPI_Init (void)
{
	pinMode (CS_PIN, OUTPUT);
	wiringPiSPISetup(SPI_CHANNEL, SPI_SPEED);
}

void SPI_Write (unsigned char* p,int length)
{
	digitalWrite (CS_PIN, LOW);
	wiringPiSPIDataRW(SPI_CHANNEL, p, length);
	digitalWrite (CS_PIN, HIGH);

}

void SPI_Read (unsigned char* p,int length)
{
	digitalWrite (CS_PIN, LOW);
	wiringPiSPIDataRW(SPI_CHANNEL, p, length);
	digitalWrite (CS_PIN, HIGH);

}
