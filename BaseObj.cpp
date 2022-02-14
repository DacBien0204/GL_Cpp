#include "BaseObj.h"
#include<iostream>
using namespace std;

string BaseObj::getName() {
	return name;
}

int BaseObj::getPosition() {
	return position;
}

int BaseObj::getid() {
	return id;
}

void BaseObj::printPosition() {
	cout<<name<<"("<<id<<")" <<position<<endl;
}