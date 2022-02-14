#ifndef __STATICOBJ_H__
#define __STATICOBJ_H__

#include "BaseObj.h"
#include<string>


class StaticObj : public BaseObj {
	public
		StaticObj(string name, int position = 0);
	void move();
};
#endif