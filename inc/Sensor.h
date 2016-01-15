/*								Sensor.h
!*******************************************************************************
!*
!*
!*
!*
!*
!*
!*
!*
!*
!*****************************************************************************/

/*                              INCLUDES
******************************************************************************/
#pragma once

/*                          CLASS DEFINITION
******************************************************************************/
class Sensor
{
	private:
		uint8_t pin;
		double LastReadData;
	    
	public:
		Sensor();
		virtual void read(void);
		double getValue() {return LastReadData;}
};