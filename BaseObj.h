#ifndef __BASEOBJ_H__
#define __BASEOBJ_H__

#include<string>
using namespace std;

class BaseObj {
	int id;
	string name;
protected:
	int position;
	public
		BaseObj(string name, int position = 0) {
		int = UID;
		UID++;
		this->name = name;
		this->position = position;
	};
		string getName();
		int getPosition();
		int getid();
		void printPosition();
		virtual void move() = 0;

};
#endif 

