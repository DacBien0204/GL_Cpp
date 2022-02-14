#include "BaseObj.h"
#include "Car.h"
#include "House.h"
#include "Motorbike.h"
#include "Tree.h"
#include <iostream>
#include <list>
using namespace std;

int main() {
	list<shared_ptr<BaseObj>> listObj;
	listObj.push_back(make_shared<Tree>("Tree,8"));
	listObj.push_back(make_shared<House>("House,3"));
	listObj.push_back(make_shared<Car>("Car"));
	listObj.push_back(make_shared<Motorbike>("Motorbike"));

	for (auto obj : listObj) {
		obj->printPosition();
		obj->move();
		obj->printPosition();
	}
	listObj.clear();
	return 0;
}