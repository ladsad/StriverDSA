/*leetcode.com/problems/find-the-duplicate-number/*/
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int> count(nums.size(), 0); 
        int x;
        for (int i=0; i<nums.size(); i++){
            count[nums[i]]++;
            if (count[nums[i]]>1){
                x=nums[i];
                break;
            }
        }
        return x;
    }
};