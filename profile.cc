#include "profile.h"
#include <cmath>

const double Profile::GetTime(bool ignore_max_velocity) {
  double distance = goal.position - current.position;

  //senario #1, ignoring max velocity
  if (ignore_max_velocity) {
      return sqrt((2*distance)/kMaxAcceleration);
  }

  return 0.0;
}
