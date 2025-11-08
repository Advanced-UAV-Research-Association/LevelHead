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


// TODO: implement feedforward logic using theta
double PID::feedforward(double theta)
{
    return 0.0;
}
