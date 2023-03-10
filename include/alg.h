// Copyright 2021 NNTU-CS
#ifndef INCLUDE_ALG_H_
#define INCLUDE_ALG_H_

int gcd(int a, int b)
{
  while (a > 0 && b > 0)
    {
        if (a > b)
            a %= b;

        else
            b %= a;
    }
    return a + b;
}


#endif  // INCLUDE_ALG_H_
