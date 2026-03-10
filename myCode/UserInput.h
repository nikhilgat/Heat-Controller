/**
 * @file UserInput.h
 * @brief Declares the UserInput class for handling user input
 * Created on: 12 Nov 2025
 * Author: Nikhil Gatla
 */

#ifndef USERINPUT_H_
#define USERINPUT_H_

#include "ControlLogic.h"

/**
 * @class UserInput
 *
 * @brief This class handles user input for temperature settings
 */
class UserInput
{
private:

	/** Pointer to the control logic */
	ControlLogic *logic;

	/** User-entered temperature value */
	float userTemp;

public:

	/**
	 * @brief Parameterized constructor which initializes the user input
	 * 		  handler
	 *
	 * @param l : [IN] Pointer to ControlLogic object
	 */
	UserInput(ControlLogic *l);

	/**
	 * @brief Handles user input for desired temperature
	 */
	void handleInput();
};

#endif /* USERINPUT_H_ */
