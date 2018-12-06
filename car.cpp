
#include "car.h"

struct CarImplementation
{
  enum CarType cartype;
  enum CarColor carcolour;
  double fill_level;
  double acceleration_rate;
  int speed;
};

Car get_car(enum CarType)
{
  return 0;
}

enum CarType get_type(Car car)
{
  return JEEP;
}

enum CarColor get_color(Car car)
{
  return BLUE;
}

double get_fill_level(Car car)
{
  return 0;
}

double get_acceleration_rate(Car car)
{
  return 0;
}
void set_acceleration_rate(Car car, double acceleration)
{

}

int get_speed(Car car)
{
  return 0;
}
void init()
{

}

void accelerate(Car Car)
{

}
