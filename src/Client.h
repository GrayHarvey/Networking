#pragma once

#include <SFML/Network.hpp>

#include <iostream>

#include <atomic>

#include <thread>

public:
	void connect();
	void imput();
	void run();
	std::atomic<bool> running = flase;
	std::atomic<bool> connected = false;


private:
	std::unique_ptr<sf::TcpSocket> socket;
