// Copyright 2022 NNTU-CS
#include "alg.h"
#include <cstdint>
#include <cmath>
bool checkPrime(uint64_t value) {
bool pr = true;
if (value > 1) {
int i;
for (i = 2; i <= sqrt(value); i++) {
  if (value % i == 0) {
pr = false;
  break;
} else {
pr = true;
  }
}
} else {
pr = false;
}
return pr;
}
uint64_t nPrime(uint64_t n) {
int hs = 0, kp = 0;
while (kp != n) {
hs++;
if (checkPrime(hs))
kp++;
}
return hs;
return 0;
}
uint64_t nextPrime(uint64_t value) {
int next = value + 1;
while (!checkPrime(next)) {
next++;
}
return next;
return 0;
}
uint64_t sumPrime(uint64_t hbound) {
int i, s = 0;
for (i = 2; i < hbound; i++) {
  if (checkPrime(i)) {
    s += i;
  }
}
return s;
return 0;
}
