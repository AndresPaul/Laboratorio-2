#include <iostream>
#include "Discount.h"
#include "FeicoDiscount.h"
#include "ChristmasDiscount.h"

#include "SusukiCar.h"
#include "ToyotaCar.h"

using namespace std;
int main() 
{
  Discount* feico = new FeicoDiscount();
  Discount* christmas = new ChristmasDiscount();

  Car* suzuki= new SusukiCar();
  Car* toyota= new ToyotaCar();

  cout<<"DESCUENTOS SUZUKI"<<endl;
  double res1 = feico->computeDiscount(suzuki);
  cout<<"Descuento Feico "<<res1<<"%"<<endl;

  double res2 = christmas->computeDiscount(suzuki);
  cout<<"Descuento Navidad "<<res2<<"%"<<endl;
  cout<<endl;
  cout<<"DESCUENTOS TOYOTA"<<endl;
  double res3 = feico->computeDiscount(toyota);
  cout<<"Descuento Feico "<<res3<<"%"<<endl;

  double res4 = christmas->computeDiscount(toyota);
  cout<<"Descuento Navidad "<<res4<<"%"<<endl;
}