/**
 * @file TemperatureSensor.cpp
 * @brief Implementation of the TemperatureSensor class methods
 * Created on: 12 Nov 2025
 * Author: Nikhil Gatla
 */
#include "TemperatureSensor.h"

/**
 * @brief Default constructor which initializes the temperature sensor
 *
 * @attention Sets the current temperature to 0.0
 */
TemperatureSensor::TemperatureSensor()
{
	currentTemperature = 0.0;
}

/**
 * @brief Reads the temperature from the sensor
 *
 * @return The temperature reading
 */
float TemperatureSensor::readTemperature()
{
	currentTemperature = 22.5;
	return currentTemperature;
}

/**
 * @brief Returns the current stored temperature
 *
 * @return The current temperature value
 */
float TemperatureSensor::getCurrentTemperature()
{
	return currentTemperature;
}
