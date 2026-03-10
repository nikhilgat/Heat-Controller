/**
 * @file main.cpp
 * @brief Main program for the Heat Controller system
 *
 * This program demonstrates a heating controller system composed of
 * functional components: temperature sensor, control logic, valve
 * actuator, user input, display, memory, and communication.
 *
 * Created on: 12 Nov 2025
 * Author: Nikhil Gatla
 */

#include <iostream>
#include "TemperatureSensor.h"
#include "ValveActuator.h"
#include "ControlLogic.h"
#include "UserInput.h"
#include "Display.h"
#include "Memory.h"
#include "Communication.h"

using namespace std;

/**
 * @brief Main function that demonstrates the heat controller system
 *
 * @return 0 on successful execution
 */
int main()
{
	// Create all functional components
	TemperatureSensor temperatureSensor;
	ValveActuator valveActuator;
	ControlLogic controlLogic(&temperatureSensor, &valveActuator);
	UserInput userInput(&controlLogic);
	Display display;
	Memory memory;
	Communication communication;

	// Establish communication
	communication.connect();

	cout<<"Heat Controller" <<endl;

	// Main control loop
	while (true)
	{
		// Read and display current temperature
		temperatureSensor.readTemperature();
		display.displayCurrentTemp(temperatureSensor.getCurrentTemperature());

		// Handle user input to adjust temperature
		userInput.handleInput();

		// Update heating control based on temperatures
		controlLogic.updateHeatingControl();

		// Display current heating status
		display.displayHeatingStatus(controlLogic.isCurrentlyHeating());
	}

	return 0;
}
