// Copyright 2021 NNTU-CS
int gcd(int a, int b) {
  while (b != 0) {
    int q = c % b;
    c = b;
    b = q;
  }
  return a;
}
