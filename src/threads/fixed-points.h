#define FRACTION (1 << 15)

int int_fraction(int a);
int fraction_round(int a);
int fraction(int a);
int addition(int a, int b);
int addition_fraction(int a, int b);
int subtraction(int a, int b);
int subtraction_fraction(int a, int b);
int multiply(int a, int b);
int multiply_fraction(int a, int b);
int divison(int a, int b);
int divison_fraction(int a, int b);

int int_fraction(int a)
{
  return a*FRACTION;
}
int fraction_round(int a)
{
  return a>=0?((a + FRACTION/2)/FRACTION):((a-FRACTION/2)/FRACTION);
}
int fraction(int a)
{
  return a / FRACTION;
}
int addition(int a, int b)
{
  return a + b;
}
int addition_fraction(int a, int b)
{
  return a + int_fraction(b);
}
int subtraction(int a, int b)
{
  return a - b;
}
int subtraction_fraction(int a, int b)
{
  return a - int_fraction(b);
}
int multiply(int a, int b)
{
  return a * b;
}
int multiply_fraction(int a, int b)
{
  return ((int64_t) a) * b / FRACTION;
}
int divison(int a, int b)
{
  return a/b;
}
int divison_fraction(int a, int b)
{
  return ((int64_t)a)*FRACTION/b;
}
