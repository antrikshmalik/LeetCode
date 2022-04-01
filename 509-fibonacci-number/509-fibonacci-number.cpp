class Solution {
public:
    int recur(int n)
    {
        return recur(n-1) + recur(n-2);
    }
    int fib(int n) {
        if( n <= 1) return n;
        return fib(n-1) + fib(n-2);
    }
};