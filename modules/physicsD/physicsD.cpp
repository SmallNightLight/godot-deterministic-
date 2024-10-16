#include "physicsD.h"

physicsD::physicsD() { a = 1;};

void physicsD::_bind_methods() {
	ClassDB::bind_method(D_METHOD("increase"), &physicsD::increase);
	ClassDB::bind_method(D_METHOD("getNumber"), &physicsD::getNumber);
}

void physicsD::increase() { a++; };

int physicsD::getNumber() { return a; };