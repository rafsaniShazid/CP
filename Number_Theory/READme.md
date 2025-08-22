
# Table of contents
1. [LCM](#1765m---minimum-lcm)

## 1765M - Minimum LCM
[See problem ](https://codeforces.com/contest/1765/problem/M) and also check the editorial

Suppose a ≤ b. Let's show that if b mod a ≠ 0, the answer is suboptimal.

- If b mod a = 0, then LCM(a, b) = b, so the answer is less than n.
- But if b mod a ≠ 0, then LCM(a, b) is at least 2b, and b is at least n/2, so in this case, the answer is at least n.

Now, we know that in the optimal answer, b mod a = 0. This also means that n mod a = 0, since n = a + b.

Thus, we need to search for a only among the divisors of n, and it is possible to iterate through all of them in O(√n).

## Maximum divisors of n approximately n^(1/3)
## Bitmasks- Checking any undesired bit is set or not
    Suppose targeted integer is x=10 ie. 1010
    so after doing OR operation of n bits we must make sure 
    0th and 2th bit is not set. So we do this (arr[i]|x)==x.
    1. If false, then we can't perform bitwise OR with that element.
       That will eventually set the undesired bits 
## Properties of gcd
1. gcd(a,b)<= min(a,b)
2. gcd(a,a) = a
3. gcd(a,0) = a;
## MOD property 
1. a<sub>i</sub> mod 2<sup>j</sup>
 corresponds to the last j
 digits in the binary representation of a<sub>i</sub>
## Properties of parity
1. Any even number >2 is a composite number.
## Periodicity 
A number is **good** if it is **not divisible by 2, 3, 5, or 7**.  
This implies:

- To decide whether a number is good, it is enough to know its **remainders modulo 2, 3, 5, and 7**.  
- By the **Chinese Remainder Theorem**, this is equivalent to knowing its remainder modulo:

$L = 2 \cdot 3 \cdot 5 \cdot 7 = 210$


- Therefore, if \(x\) is good, then \(x + L\) is also good, and vice versa.  

In other words, the pattern of good/bad numbers is **periodic with period 210**.

Read the solution of this [Problem](https://codeforces.com/problemset/problem/2125/C) & [Solution](https://codeforces.com/contest/2125/submission/335072733)
