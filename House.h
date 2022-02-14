#ifndef __HOUSE_H__
#define __HOUSE_H__

#include "StaticObj.h"
#include<string>

class House : public StaticObj {
	public
		House(string name, int position = 0);
};
#endif 