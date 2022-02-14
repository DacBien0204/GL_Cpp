#include "StaticObj.h"
#include <iostream>
using namespace std;

StaticObj::StaticObj(string name, int position) :BaseObj(name, position) {}

void StaticObj::move() {
	cout << "Static obj can not move" << endl;
}