#include "PID.h"


PID::PID(double timestep): _timestep{timestep} {}


void PID::setpoint(double setpoint)
{
    _setpoint = setpoint;
}


void PID::coeff(double kp, double ki, double kd)
{
    _kp = kp;
    _ki = ki;
    _kd = kd;
}


// super basic pid control
double PID::feedforward(double theta)
{
	double error = theta - _setpoint;
	
	_integrator += error * _timestep;
	double diff = (error - _prevError) / _timestep;

	// pid control
	return _kp * error + _integrator + diff;
}
