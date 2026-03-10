/**
 * @file ControlLogic.cpp
 * @brief Implementation of the ControlLogic class methods
 * Created on: 12 Nov 2025
 * Author: Nikhil Gatla
 */
#include "ControlLogic.h"

/**
 * @brief Parameterized constructor which initializes the control logic
 *
 * @param s : [IN] Pointer to TemperatureSensor object
 * @param a : [IN] Pointer to ValveActuator object
 *
 * @attention Initializes heating to false and desired temperature to 20.0
 */
ControlLogic::ControlLogic(TemperatureSensor *s, ValveActuator *a)
{
	sensor = s;
	actuator = a;
	isHeating = false;
	desiredTemperature = 20.0;
	currentTemp = 0.0;
}

/**
 * @brief Updates the heating control based on current and desired
 * 		  temperature
 */
void ControlLogic::updateHeatingControl()
{
	currentTemp = sensor->getCurrentTemperature();
	if (currentTemp < desiredTemperature)
	{
		actuator->openValve();
		isHeating = true;
	}
	else if (currentTemp >= desiredTemperature)
	{
		actuator->closeValve();
		isHeating = false;
	}
}

/**
 * @brief Sets the desired target temperature
 *
 * @param temp : [IN] The desired temperature value
 */
void ControlLogic::setDesiredTemperature(float temp)
{
	desiredTemperature = temp;
}

/**
 * @brief Checks if the system is currently heating
 *
 * @return True if heating; otherwise false
 */
bool ControlLogic::isCurrentlyHeating()
{
	return isHeating;
}
