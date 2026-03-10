/**
 * @file ValveActuator.cpp
 * @brief Implementation of the ValveActuator class methods
 * Created on: 12 Nov 2025
 * Author: Nikhil Gatla
 */
#include "ValveActuator.h"

/**
 * @brief Default constructor which initializes the valve actuator
 *
 * @attention Sets the valve to OPEN state by default
 */
ValveActuator::ValveActuator()
{
	currentState = OPEN;
}

/**
 * @brief Opens the valve
 */
void ValveActuator::openValve()
{
	currentState = OPEN;
}

/**
 * @brief Closes the valve
 */
void ValveActuator::closeValve()
{
	currentState = CLOSED;
}

/**
 * @brief Checks if the valve is currently open
 *
 * @return True if valve is open; otherwise false
 */
bool ValveActuator::isValveOpen()
{
	if (currentState == OPEN)
	{
		return true;
	}
	else
		return false;
}
