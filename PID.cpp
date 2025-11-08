#include "PID.h"


PID::PID(double Ts): _Ts{Ts} {}


// TODO: implement feedforward logic using theta
double PID::feedforward(double theta) {
    return 0.0;
}


void PID::setpoint(double theta_s)
{
    _theta_s = theta_s;
}


void PID::coeff(double kp, double ki, double kd)
{
    _kp = kp;
    _ki = ki;
    _kd = kd;
}
