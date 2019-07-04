#include "PID.h"

/**
 * TODO: Complete the PID class. You may add any additional desired functions.
 */

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp_, double Ki_, double Kd_) {
  /**
   * TODO: Initialize PID coefficients (and errors, if needed)
   */
	//only need "this->" when local name is same as class name, and we added underscore here for values coming into function
	//this->Kp = Kp_;
	//this->Ki = Ki_;
	//this->Kd = Kd_;

	//setting the private class variables Kp,Ki, Kd equal to initialized values in main being passed in
	Kp = Kp_;
	Ki = Ki_;
	Kd = Kd_;

	//Initialize private class variables to 0 in init
	p_error = 0;
	i_error = 0;
	d_error = 0;

}

void PID::UpdateError(double cte) {
  /**
   * TODO: Update PID errors based on cte.
   */

	//from video walk-thru
	d_error = cte - p_error;  //use p_error before it gets updated
	p_error = cte;
	i_error += cte;
	

}

double PID::TotalError() {
  /**
   * TODO: Calculate and return the total error
   */

  //from video walk-thru
  double calc1 = Kp * p_error + Ki * i_error + Kd * d_error;
  return calc1;
  
}