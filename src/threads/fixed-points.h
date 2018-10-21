#define FRACTION (1 << 15)
//#define INT_MAX ((1 << 31) - 1)
//#define INT_MIN (-(1 << 31))

int int_to_float(int a);
int float_to_int_round(int a);
int float_to_int(int a);
int add_float(int a, int b);
int add_mixed(int a, int b);
int sub_float(int a, int b);
int sub_mixed(int a, int b);
int mult_float(int a, int b);
int mult_mixed(int a, int b);
int div_float(int a, int b);
int div_mixed(int a, int b);

int int_to_float(int a)
{
  return a*FRACTION;
}
int float_to_int_round(int a)
{
  return a>=0?((a + FRACTION/2)/FRACTION):((a-FRACTION/2)/FRACTION);
}
int float_to_int(int a)
{
  return a / FRACTION;
}
int add_float(int a, int b)
{
  return a + b;
}
int sub_float(int a, int b)
{
  return a - b;
}
int add_mixed(int a, int b)
{
  return a + int_to_float(b);
}
int sub_mixed(int a, int b)
{
  return a - int_to_float(b);
}
int mult_float(int a, int b)
{
  return ((int64_t) a) * b / FRACTION;
}
int mult_mixed(int a, int b)
{
  return a * b;
}
int div_float(int a, int b)
{
  return ((int64_t)a)*FRACTION/b;
}
int div_mixed(int a, int b)
{
  return a/b;
}