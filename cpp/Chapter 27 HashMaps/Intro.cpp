class Solution {
    public:
        __int128_t fact(__int128_t n){
            if(n==0) return 1;
            return n*fact(n-1);
        }
        __int128_t combi(__int128_t n , __int128_t r){
            if(n<2) return 0;
            return fact(n)/(fact(n-r)*fact(r));
        }
        __int128_t rev(__int128_t n){
            __int128_t sum = 0;
            while(n>0){
                __int128_t r = n%10;
                sum = sum*10 + r;
                n = n/10;
            }
            return sum;
        }
        __int128_t countNicePairs(vector<int>& nums) {
            unordered_map<__int128_t,__int128_t> m;
            for(__int128_t i = 0; i<nums.size(); i++){
                __int128_t x = nums[i] - rev(nums[i]);
                m[x]++;
            }
            __int128_t count = 0;
            for(auto x:m){
                __int128_t f = x.second;
                count += combi(f,2);
            }
            return count;
        }
    };