#include "car.h"


void Car::accelerate() {
  speed++;
}

void Car::decelerate() {
  speed--;
}

int Car::getSpeed() {
  return speed;
}
