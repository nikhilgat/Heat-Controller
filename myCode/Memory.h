/**
 * @file Memory.h
 * @brief Declares the Memory class for storing temperature settings
 * Created on: 12 Nov 2025
 * Author: Nikhil Gatla
 */

#ifndef MEMORY_H_
#define MEMORY_H_

/**
 * @class Memory
 *
 * @brief This class handles storage of desired temperature settings
 */
class Memory
{
private:

	/** Stored desired temperature */
	float desiredTemperature;

public:

	/**
	 * @brief Default constructor which initializes memory
	 *
	 * @attention Sets the desired temperature to 20.0 by default
	 */
	Memory();

	/**
	 * @brief Stores the desired temperature
	 *
	 * @param temp : [IN] The temperature value to store
	 */
	void storeDesiredTemp(float temp);

	/**
	 * @brief Retrieves the stored desired temperature
	 *
	 * @return The stored desired temperature value
	 */
	float getDesiredTemp();
};

#endif /* MEMORY_H_ */
