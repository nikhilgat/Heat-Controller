/**
 * @file Communication.cpp
 * @brief Implementation of the Communication class methods
 * Created on: 12 Nov 2025
 * Author: Nikhil Gatla
 */
#include "Communication.h"

/**
 * @brief Default constructor which initializes communication
 *
 * @attention Sets connection status to false by default
 */
Communication::Communication()
{
	isConnected = false;
}

/**
 * @brief Establishes connection
 */
void Communication::connect()
{
	isConnected = true;
}

/**
 * @brief Disconnects communication
 */
void Communication::disconnect()
{
	isConnected = false;
}

/**
 * @brief Checks the connection status
 *
 * @return True if connected; otherwise false
 */
bool Communication::getConnectionStatus()
{
	if (isConnected == true)
	{
		return true;
	}
	else
	{
		return false;
	}
}
