#include "objx-kin.h"
#include "objx-vec.h"

using namespace phys;
KinematicObj::KinematicObj():
	v0(Vec()),
	v1(Vec()),
	v(Vec()),
	accel(Vec()),elapsed(0),
	disp(Vec())
	{}
