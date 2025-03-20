# 1765M - Minimum LCM

Suppose **a ≤ b**.

## Understanding the Optimal Solution

Let's show that if **b mod a ≠ 0**, the answer is suboptimal.

If **b mod a = 0**, then:

**LCM(a, b) = b**

So, the answer is less than **n**.

However, if **b mod a ≠ 0**, then:

**LCM(a, b) ≥ 2b**

Since **b** is at least **n/2**, the answer is at least **n**.

## Finding the Optimal Solution

Now, we know that in the optimal answer, **b mod a = 0**.  
This also means that:

**n mod a = 0**

Since **n = a + b**, we only need to search for **a** among the divisors of **n**.

## Time Complexity

We can iterate through all divisors of **n** in **O(√n)** time.
