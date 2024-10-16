#ifndef PHYSICSD_H
#define PHYSICSD_H

#include "core/object/ref_counted.h"

class physicsD : public RefCounted
{
	GDCLASS(physicsD, RefCounted);

public:
	physicsD();
	void increase();
	int getNumber();

protected:
	static void _bind_methods();

private:
		int a;
};

#endif //PHYSICSD_H
