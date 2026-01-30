class Solution {
public:
    int solve(int n, int k){
        if(n == 1 && k == 1) return 0;

        // check k is on right side or left side
        int totalSize = pow(2, n-1);
        int leftDigits = totalSize/2;
        if(k<= leftDigits){
            return solve(n-1, k);
        } 

        // rightSize
        return 1 + solve(n-1, k-leftDigits);
    }

    int kthGrammar(int n, int k) {
        int times = 0;
        times = solve(n, k);
        return times % 2 == 0 ? 0 : 1; 
    }


};