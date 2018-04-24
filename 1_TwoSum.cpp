//Rahul Vig
//LeetCode Problem 1
/*
Given an array of integers, return indices of the two numbers such that they add
to a specific target.
You may assume that each input would have exactly one solution,
and you may not use the same element twice.
*/

//Solved by brute-force, will implement hash map solutions at later date
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> sol;
        for(int i = 0; i < nums.size(); i++){
            for(int j = i+1; j < nums.size(); j++){
                if((nums[i] + nums[j]) == target){
                    sol.push_back(i);
                    sol.push_back(j);
                    return sol;
                }
            }
        }
    }
};
