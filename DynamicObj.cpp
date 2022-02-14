#include "DynamicObj.h"
#include <iostream>
using namespace std;

DynamicObj::DynamicObj(string name, float velocity, int position) :BaseObj(name, position) {
	this->velocity = velocity;
}

void DynamicObj::move() {
	position += velocity;
}