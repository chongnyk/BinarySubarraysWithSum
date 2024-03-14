class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int, int> subarrs;
        subarrs[0]++;
        int sum = 0;
        int subarrsSize = 0;

        for(int num : nums){
            sum += num;
            if(subarrs.find(sum - goal) != subarrs.end()){
                subarrsSize += subarrs[sum - goal];
            }
            subarrs[sum]++;
        }

        return subarrsSize;
    }
};
