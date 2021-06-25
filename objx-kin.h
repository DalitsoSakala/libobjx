#pragma once
#include "objx-vec.h"

namespace phys{
 struct KinematicObj{
   Vec v0;
   Vec v1;
   Vec v;
   float elapsed;
   Vec accel;
   Vec disp;
   KinematicObj();
 };
}
