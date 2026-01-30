class Solution {
public:
    int kthGrammar(int n, int k) {
        int times = 0;

        if(n==1) return 0;

        while(n!=1){
            int totalSize = pow(2, n-1);
            int leftDigits = totalSize/2;
            if (k > leftDigits) {
                times++;
                k = k - leftDigits;
            }
            n--;
        }

        return times % 2 == 0 ? 0 : 1; 
    }


};