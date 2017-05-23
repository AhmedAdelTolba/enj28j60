/*
 * wiringPiSPI.h
 *
 *  Created on: May 22, 2017
 *      Author: ahmed.adel
 */

#ifndef WIRINGPISPI_H_
#define WIRINGPISPI_H_

void wiringPiSPISetup (int,int);
void wiringPiSPIDataRW(int, char*, int);

#endif /* WIRINGPISPI_H_ */
