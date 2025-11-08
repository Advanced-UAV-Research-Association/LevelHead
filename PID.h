#ifndef PID_H
#define PID_H

class PID
{
	public:
		explicit PID(double Ts);

		void setpoint(double theta_s);
		void coeff(double kp, double ki, double kd);
		double feedforward(double theta);

	private:
		double _kp{0.0};
		double _ki{0.0};
		double _kd{0.0};

		double _Ts{0.0};
		double _theta_s{0.0};
};

#endif // PID_H
