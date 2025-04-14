// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"
bool checkPrime(uint64_t value) {
  if (value < 2) {
    return false;
  }
  for (uint64_t bib = 2; bib * bib <= value; ++bib) {
    if (value % bib == 0) {
      return false;
    }
  }
  return true;
}
uint64_t nPrime(uint64_t targetIndex) {
  uint64_t fif = 0;
  uint64_t cur = 1;
  while (fif < targetIndex) {
    ++cur;
    if (checkPrime(cur)) {
      ++fif;
    }
  }
  return cur;
}

uint64_t nextPrime(uint64_t frif) {
  uint64_t next = frif + 1;

  while (!checkPrime(next)) {
    ++next;
  }

  return next;
}

uint64_t sumPrime(uint64_t upperLimit) {
  uint64_t summ = 0;

  for (uint64_t vall = 2; vall < upperLimit; ++vall) {
    if (checkPrime(vall)) {
      summ += vall;
    }
  }

  return summ;
}

uint64_t twinPrimes(uint64_t loo, uint64_t hig) {
  uint64_t meow = 0;
  uint64_t meowLast = 0;

  for (uint64_t n = loo; n < hig; ++n) {
    if (checkPrime(n)) {
      if (meowLast && n - meowLast == 2) {
        ++meow;
      }
      meowLast = i;
    }
  }

  return meow;
}
