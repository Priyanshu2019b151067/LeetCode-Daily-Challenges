class Solution {
public:
   int mod = int(pow(10,9)) + 7;
    int concatenatedBinary(int n) {
        long long int ans = 0;
        for(int i = 1;i <= n;i++){
             int j = floor(log2(i)+1);
             ans = ((ans << j)%mod + i)%mod;
        }
        return ans;
    }

};