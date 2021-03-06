/*
 *  Fire.h
 *
 */
#ifndef Fire_h
#define Fire_h

#include "Arduino.h"

class Fire
{
  public:
    Fire();
	Fire(unsigned long);	// Timer with set milliseconds
	void setCallback(void (*callback_function) () );
	bool fire();
	bool fireExpired();
	unsigned long lastFireTime;
	bool updateInterval(int);
	
  private:
	unsigned long _fireInterval = 1000;	// 1 second by default.
	void (*_callback)();
	bool _isCallbackEnabled = false;
};


#endif
