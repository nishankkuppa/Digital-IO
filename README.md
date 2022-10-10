# Digital-IO

This report explores digital input and output on the Arduino board, reading and setting logic-level signals from ports, and IC chips for complex computations. Most of the experiments in this lab required manipulation of a dual 7-segment LED display. Code was written using both the “classic” Arduino functions and the more advanced port manipulation method. It was observed that while port manipulation has its merits, in practicality it is extremely tedious and not necessary for most general purposes.

This lab involved the usage of a dedicated decoder chip (SN74LS47) to control the 7-segment LED display. The Arduino board manipulated this decoder chip through a breadboard circuit. The purpose of this decoder chip was to evaluate whether it is easier to program a dedicated decoder chip or program directly from Arduino pins. 
	
