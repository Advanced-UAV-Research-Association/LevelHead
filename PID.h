#ifndef PID_H
#define PID_H

#include <iostream>
#include <vector>

class PID
{
	public:
		explicit PID(double timestep);

		void setpoint(double setpoint);
		void coeff(double kp, double ki, double kd);
		double feedforward(double theta);

	private:
		// coefficients
		double _kp{0.0};
		double _ki{0.0};
		double _kd{0.0};
		// accumulators
		double _integrator{0.0};

		double _timestep{0.0};
		double _setpoint{0.0};

		// buffer
		double _prevError{0.0};
		// static constexpr int Buffer_Size = 3;
		// std::vector<double> theta_buffer[Buffer_Size];
};

#endif // PID_H
