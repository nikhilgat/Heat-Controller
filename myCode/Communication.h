/**
 * @file Communication.h
 * @brief Declares the Communication class for network connectivity
 * Created on: 12 Nov 2025
 * Author: Nikhil Gatla
 */

#ifndef COMMUNICATION_H_
#define COMMUNICATION_H_

/**
 * @class Communication
 *
 * @brief This class handles communication and connectivity status
 */
class Communication
{
private:

	/** Connection status indicator */
	bool isConnected;

public:

	/**
	 * @brief Default constructor which initializes communication
	 *
	 * @attention Sets connection status to false by default
	 */
	Communication();

	/**
	 * @brief Establishes connection
	 */
	void connect();

	/**
	 * @brief Disconnects communication
	 */
	void disconnect();

	/**
	 * @brief Checks the connection status
	 *
	 * @return True if connected; otherwise false
	 */
	bool getConnectionStatus();
};

#endif /* COMMUNICATION_H_ */
