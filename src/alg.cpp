// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"
bool checkPrime(uint64_t value) {
if (value > 1) {
int i;
for (i = 2; i <= value; i++) {
  if (value % i == 0) {
  return false;
  } else {
  return true;
  }
} else {
  return false;
}
}
uint64_t nPrime(uint64_t n) {
int pnomer = 1, nomer = 0;
while (nomer != n) {
  if (checkPrime(pnomer)) {
  nomer++;
  pnomer++;
  }
  return pnomer;
}
}
uint64_t nextPrime(uint64_t value) {
int next = value + 1;
while (!checkPrime(next)) {
next++;
}
return next;
}
uint64_t sumPrime(uint64_t hbound) {
int i, s = 0;
for (i = 2; i < hbound; i++) {
  if (checkPrime(i)) {
  s += i;
  }
  return s;
}
}
