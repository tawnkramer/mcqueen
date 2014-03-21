/*
 * I2cMaster.cpp
 *
 *  Created on: Mar 20, 2014
 *      Author: fabien papleux
 */

#include <iostream>
#include <fcntl.h>
#include "I2cMaster.h"

using namespace std;

/************************************************/
I2cMaster::I2cMaster (const char* path)
{
	int i;
	fd = -1;
	for (i = 0; i < 32; i++) slave[i] = 0;
	ready = -1;
	init(path);
}

/************************************************/
I2cMaster::~I2cMaster (void)
{
	close();
}

/************************************************/
void I2cMaster::init (const char* address)
{
	if ((fd = open(address, O_RDWR)) < 0) ready = -1; else ready = 1;
}

/************************************************/
void I2cMaster::close (void)
{
}

/************************************************/
int I2cMaster::isReady (void)
{
	return ready;
}



