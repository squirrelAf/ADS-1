// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
  if (value < 2) {
    return false;
  }

  for (uint64_t test = 2; test * test <= value; ++test) {
    if (value % test == 0) {
      return false;
    }
  }

  return true;
}

uint64_t nPrime(uint64_t targetIndex) {
  uint64_t fo = 0;
  uint64_t cur = 1;

  while (fo < targetIndex) {
    ++current;
    if (checkPrime(cur)) {
      ++fo;
    }
  }

  return cur;
}

uint64_t nextPrime(uint64_t from) {
  uint64_t next = from + 1;

  while (!checkPrime(next)) {
    ++next;
  }

  return next;
}

uint64_t sumPrime(uint64_t upperLimit) {
  uint64_t sum = 0;

  for (uint64_t val = 2; val < upperLimit; ++val) {
    if (checkPrime(val)) {
      sum += val;
    }
  }

  return sum;
}

uint64_t twinPrimes(uint64_t lo, uint64_t hi) {
  uint64_t twinPa = 0;
  uint64_t lastPri = 0;

  for (uint64_t i = lo; i < hi; ++i) {
    if (checkPrime(i)) {
      if (lastPri && i - lastPri == 2) {
        ++twinPa;
      }
      lastPri = i;
    }
  }

  return twinPa;
}
