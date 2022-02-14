#ifndef __CAR_H__
#define __CAR_H__

#include "DynamicObj.h"
#include<string>

class Car : public DynamicObj {
	public
		Car(string name, int position = 0);
};
#endif 
