// Copyright 2021 NNTU-CS

int gcd(int t, int e) {
if (t == e) return t;
    return t > e ? gcd(t - e, e) : gcd (t, e - t);
}
