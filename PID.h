#ifndef PID_H
#define PID_H

class PID
{
	public:
		explicit PID(double timestep);

		void setpoint(double setpoint);
		void coeff(double kp, double ki, double kd);
		double feedforward(double theta);

	private:
		double _kp{0.0};
		double _ki{0.0};
		double _kd{0.0};

		double _timestep{0.0};
		double _setpoint{0.0};
};

#endif // PID_H
