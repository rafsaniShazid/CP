## Calculating Median
let's assume an array, arr={a<sub>1</sub>,a<sub>2</sub>,a<sub>3</sub>,..,a<sub>n</sub>}<br>
for each a<sub>i</sub> , suppose p is the number of left elements and q is the number of right elements.<br>
then the median elements will be the a<sub>i</sub> for which |p-q|<=1.<br>
so we can simply run a loop where, <br>
p = i and q = n-1-i. So the equation would be, |i-(n-1-i)|<=1.
[Check this problem](https://codeforces.com/contest/2098/submission/317510948)   
   
