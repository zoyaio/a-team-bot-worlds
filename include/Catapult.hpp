#pragma once

#include "pros/adi.hpp"
#include "pros/motors.hpp"

class Catapult {
private:
	pros::Motor m_motor;
	pros::ADIDigitalIn potentiometer;

public:
    Catapult(int8_t left_back_motor_port, std::uint8_t port); 
	void spin_motor(int voltage_option, int shift_amount);
};
