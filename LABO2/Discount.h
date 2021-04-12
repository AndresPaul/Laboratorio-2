#include "Car.h"
class Discount
{
  public:
  Discount(){}
  virtual double computeDiscount(Car* c)=0;
};