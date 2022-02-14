#ifndef __DYNAMICOBJ_H__
#define __DYNAMICOBJ_H__

#include "BaseObj.h"
#include<string>


class DynamicObj : public BaseObj {
		float velocity;
	public
		DynamicObj(string name, float velocity, int position = 0);
		void move();
};
#endif 