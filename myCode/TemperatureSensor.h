/**
 * @file TemperatureSensor.h
 * @brief Declares the TemperatureSensor class for reading temperature
 * Created on: 12 Nov 2025
 * Author: Nikhil Gatla
 */

#ifndef TEMPERATURESENSOR_H_
#define TEMPERATURESENSOR_H_

/**
 * @class TemperatureSensor
 *
 * @brief This class represents a temperature sensor that reads and stores
 *        temperature values
 */
class TemperatureSensor
{
private:

	/** Current temperature reading */
	float currentTemperature;

public:

	/**
	 * @brief Default constructor which initializes the temperature sensor
	 *
	 * @attention Sets the current temperature to 0.0
	 */
	TemperatureSensor();

	/**
	 * @brief Reads the temperature from the sensor
	 *
	 * @return The temperature reading
	 */
	float readTemperature();

	/**
	 * @brief Returns the current stored temperature
	 *
	 * @return The current temperature value
	 */
	float getCurrentTemperature();
};

#endif /* TEMPERATURESENSOR_H_ */
