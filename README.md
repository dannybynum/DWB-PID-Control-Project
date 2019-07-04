[//]: # (Image References)

[image1]: ./Trials.png "Table of Trials"

# Danny's PID Controller Project
From Self-Driving Car Engineer Nanodegree Program

---

## Effect of Kp, Ki, Kd terms, and Tuning Trails

As expected the vehicle control was very sensitive to the Kp term - I had to keep lowering this in order to stop oscillations.  If this value was too low though then the car did not respond well for sharp turns.

Also as expected, the Kd term was critical for helping damp out the oscillations - through trial and error I found that a ratio of 6X (d to p) was a good number for this project.

As suggested in the video walk-thru the i term was not needed because there was no significant steering bias in this project/simulator.

Here is a detailed listing of the trials completed to get the final Hyperparameter values that successfully drove the car around the track:
![alt text][image1]


## Video walk-thru reference
The following video walk-thru of the code and suggestions for the solution was very useful in completing this project:
https://youtu.be/YamBuzDjrs8