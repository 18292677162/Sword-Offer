class Solution {
public:
    int Fibonacci(int n) {
        int left = 1;
        int right = 1;
        if(0 >= n)
            return 0;
        if(1 == n || 2 == n)
            return 1;
        while(2 < n--){
            right += left;
            left = right - left;
        }
        return right;
    }
};