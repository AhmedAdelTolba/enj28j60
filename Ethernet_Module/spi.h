/*
 * spi.h
 *
 *  Created on: May 22, 2017
 *      Author: ahmed.adel
 */

#ifndef SPI_H_
#define SPI_H_

void SPI_Init (void);
void SPI_Write (unsigned char* p,int length);
void SPI_Read (unsigned char* p,int length);

#endif /* SPI_H_ */
