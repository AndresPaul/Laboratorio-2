class FeicoDiscount:public Discount
{
  public:
  FeicoDiscount(): Discount()
  {

  }
  double computeDiscount(Car* c)
  {
    return c->feicoPrice();
  }
};