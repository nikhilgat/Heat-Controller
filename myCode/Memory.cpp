/**
 * @file Memory.cpp
 * @brief Implementation of the Memory class methods
 * Created on: 12 Nov 2025
 * Author: Nikhil Gatla
 */
#include "Memory.h"

/**
 * @brief Default constructor which initializes memory
 *
 * @attention Sets the desired temperature to 20.0 by default
 */
Memory::Memory()
{
	desiredTemperature = 20.0;
}

/**
 * @brief Stores the desired temperature
 *
 * @param temp : [IN] The temperature value to store
 */
void Memory::storeDesiredTemp(float temp)
{
	desiredTemperature = temp;
}

/**
 * @brief Retrieves the stored desired temperature
 *
 * @return The stored desired temperature value
 */
float Memory::getDesiredTemp()
{
	return desiredTemperature;
}
