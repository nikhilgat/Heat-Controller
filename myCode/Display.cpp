/**
 * @file Display.cpp
 * @brief Implementation of the Display class methods
 * Created on: 12 Nov 2025
 * Author: Nikhil Gatla
 */
#include "Display.h"
#include <iostream>

using namespace std;

/**
 * @brief Default constructor
 */
Display::Display()
{
}

/**
 * @brief Displays the current temperature
 *
 * @param temp : [IN] The current temperature value
 */
void Display::displayCurrentTemp(float temp)
{
	cout << "Current Temperature: " << temp << " degrees" << endl;
}

/**
 * @brief Displays the desired temperature
 *
 * @param temp : [IN] The desired temperature value
 */
void Display::displayDesiredTemp(float temp)
{
	cout << "Desired Temperature: " << temp << " degrees" << endl;
}

/**
 * @brief Displays the heating status
 *
 * @param heating : [IN] True if heating is ON; otherwise false
 */
void Display::displayHeatingStatus(bool heating)
{
	if (heating)
	{
		cout << "Heating Status: ON" << endl;
	}
	else
	{
		cout << "Heating Status: OFF" << endl;
	}
}
