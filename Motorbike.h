#ifndef __MOTORBIKE_H__
#define __MOTORBIKE_H__

#include "DynamicObj.h"
#include<string>

class Motorbike : public DynamicObj {
	public
		Motorbike(string name, int position = 0);
};
#endif 
