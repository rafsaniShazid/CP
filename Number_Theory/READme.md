
## Table of contents
1. [LCM](#1765m---minimum-lcm)

# 1765M - Minimum LCM
[See problem ](https://codeforces.com/contest/1765/problem/M) and also check the editorial

Suppose a ≤ b. Let's show that if b mod a ≠ 0, the answer is suboptimal.

- If b mod a = 0, then LCM(a, b) = b, so the answer is less than n.
- But if b mod a ≠ 0, then LCM(a, b) is at least 2b, and b is at least n/2, so in this case, the answer is at least n.

Now, we know that in the optimal answer, b mod a = 0. This also means that n mod a = 0, since n = a + b.

Thus, we need to search for a only among the divisors of n, and it is possible to iterate through all of them in O(√n).

## Maximum divisors of n apprximately n^(1/3)
  
