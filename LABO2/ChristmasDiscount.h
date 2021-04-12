class ChristmasDiscount:public Discount
{
  public:
  ChristmasDiscount(): Discount()
  {

  }
  double computeDiscount(Car* c)
  {
    return c->christmasPrice();
  }
};