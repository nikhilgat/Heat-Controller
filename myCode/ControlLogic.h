/**
 * @file ControlLogic.h
 * @brief Declares the ControlLogic class for temperature control logic
 * Created on: 12 Nov 2025
 * Author: Nikhil Gatla
 */

#ifndef CONTROLLOGIC_H_
#define CONTROLLOGIC_H_

#include "TemperatureSensor.h"
#include "ValveActuator.h"

/**
 * @class ControlLogic
 *
 * @brief This class implements the control logic for the heating system
 */
class ControlLogic
{
private:

	/** Indicates if the system is currently heating */
	bool isHeating;

	/** The desired target temperature */
	float desiredTemperature;

	/** Pointer to the temperature sensor */
	TemperatureSensor *sensor;

	/** Pointer to the valve actuator */
	ValveActuator *actuator;

	/** Current temperature reading */
	float currentTemp;

public:

	/**
	 * @brief Parameterized constructor which initializes the control logic
	 *
	 * @param s : [IN] Pointer to TemperatureSensor object
	 * @param a : [IN] Pointer to ValveActuator object
	 *
	 * @attention Initializes heating to false and desired temperature to
	 * 			  20.0
	 */
	ControlLogic(TemperatureSensor *s, ValveActuator *a);

	/**
	 * @brief Updates the heating control based on current and desired
	 *        temperature
	 */
	void updateHeatingControl();

	/**
	 * @brief Sets the desired target temperature
	 *
	 * @param temp : [IN] The desired temperature value
	 */
	void setDesiredTemperature(float temp);

	/**
	 * @brief Checks if the system is currently heating
	 *
	 * @return True if heating; otherwise false
	 */
	bool isCurrentlyHeating();
};

#endif /* CONTROLLOGIC_H_ */
