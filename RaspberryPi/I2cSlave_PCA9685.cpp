/*
 * I2cSlave_PCA9685.cpp
 *
 *  Created on: Mar 22, 2014
 *      Author: fabien papleux
 */

#include <iostream>
#include "I2cSlave.h"
#include "I2cSlave_PCA9685.h"

using namespace std;

I2cSlave_PCA9685::I2cSlave_PCA9685 (int addr)
: I2cSlave(addr)
{
	cout << "i2cSlave_PCA9685 constructor" << endl;
}

