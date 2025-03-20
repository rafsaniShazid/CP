<h1>1. Some properties of LCM</h1>
    <h1>1765M - Minimum LCM</h1>

    <p>Suppose <code>a ≤ b</code>.</p>

    <h2>Understanding the Optimal Solution</h2>

    <p>Let's show that if <code>b mod a ≠ 0</code>, the answer is suboptimal.</p>

    <p>If <code>b mod a = 0</code>, then:</p>
    <p><strong>LCM(a, b) = b</strong></p>
    <p>So, the answer is less than <code>n</code>.</p>

    <p>However, if <code>b mod a ≠ 0</code>, then:</p>
    <p><strong>LCM(a, b) ≥ 2b</strong></p>
    <p>Since <code>b</code> is at least <code>n/2</code>, the answer is at least <code>n</code>.</p>

    <h2>Finding the Optimal Solution</h2>

    <p>Now, we know that in the optimal answer, <code>b mod a = 0</code>. This also means that:</p>
    <p><strong>n mod a = 0</strong></p>
    <p>Since <code>n = a + b</code>, we only need to search for <code>a</code> among the divisors of <code>n</code>.</p>

    <h2>Time Complexity</h2>

    <p>We can iterate through all divisors of <code>n</code> in <code>O(√n)</code> time.</p>




