int exponent(double d) {
  union {
    double buffer;
    struct {
      unsigned long mantissa: 52;
      unsigned long exponent: 11;
      unsigned long sign: 1;
      }extract;
    } retval = {.buffer = d};
  return retval.extract.exponent;
}
