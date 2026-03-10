/**
 * @file Display.h
 * @brief Declares the Display class for showing system information
 * Created on: 12 Nov 2025
 * Author: Nikhil Gatla
 */

#ifndef DISPLAY_H_
#define DISPLAY_H_

/**
 * @class Display
 *
 * @brief This class handles display of temperature and heating status
 */
class Display
{
public:

	/**
	 * @brief Default constructor
	 */
	Display();

	/**
	 * @brief Displays the current temperature
	 *
	 * @param temp : [IN] The current temperature value
	 */
	void displayCurrentTemp(float temp);

	/**
	 * @brief Displays the desired temperature
	 *
	 * @param temp : [IN] The desired temperature value
	 */
	void displayDesiredTemp(float temp);

	/**
	 * @brief Displays the heating status
	 *
	 * @param heating : [IN] True if heating is ON; otherwise false
	 */
	void displayHeatingStatus(bool heating);
};

#endif /* DISPLAY_H_ */
