int fastpow(int x, int n) {
  int res = 1;
  while (n) {
    if (n & 1) {
      res *= x;
    }
    x *= x;
    n >>= 1;
  }
  return res;
}