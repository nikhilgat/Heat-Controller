/**
 * @file UserInput.cpp
 * @brief Implementation of the UserInput class methods
 * Created on: 12 Nov 2025
 * Author: Nikhil Gatla
 */
#include "UserInput.h"
#include <iostream>

using namespace std;

/**
 * @brief Parameterized constructor which initializes the user input handler
 *
 * @param l : [IN] Pointer to ControlLogic object
 */
UserInput::UserInput(ControlLogic *l)
{
	logic = l;
	userTemp = 0;
}

/**
 * @brief Handles user input for desired temperature
 */
void UserInput::handleInput()
{
	cout << "Enter desired temperature: ";
	cin >> userTemp;
	logic->setDesiredTemperature(userTemp);
}
