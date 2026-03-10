/**
 * @file ValveActuator.h
 * @brief Declares the ValveActuator class for controlling valve operations
 * Created on: 12 Nov 2025
 * Author: Nikhil Gatla
 */

#ifndef VALVEACTUATOR_H_
#define VALVEACTUATOR_H_

/**
 * @enum ValveState
 *
 * @brief Enum represents the states of the valve
 */
enum ValveState
{
	OPEN, CLOSED
};

/**
 * @class ValveActuator
 *
 * @brief This class represents a valve actuator that controls valve opening
 *        and closing
 */
class ValveActuator
{
private:

	/** Current state of the valve */
	ValveState currentState;

public:

	/**
	 * @brief Default constructor which initializes the valve actuator
	 *
	 * @attention Sets the valve to OPEN state by default
	 */
	ValveActuator();

	/**
	 * @brief Opens the valve
	 */
	void openValve();

	/**
	 * @brief Closes the valve
	 */
	void closeValve();

	/**
	 * @brief Checks if the valve is currently open
	 *
	 * @return True if valve is open; otherwise false
	 */
	bool isValveOpen();
};

#endif /* VALVEACTUATOR_H_ */
