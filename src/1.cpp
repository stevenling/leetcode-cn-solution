#include <iostream>
#include <vector>
#include <map>
using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> hashMap;
        vector<int> res;
        int size = nums.size();
        for (int i = 0; i < size; i++) {
            if (hashMap.count(nums[i]) == 0) {
                // 不存在这个元素
                hashMap[nums[i]] = i; // 键是 vector 的值，值是下标 
            }
            if (hashMap.count(nums[i]) == 1) {
                // 存在这个元素
                if(hashMap.count(nums[i] - target) == 1) {
                    res.push_back(i);
                    res.push_back(hashMap[nums[i] - target]);
                    return res;
                }
            }
        }
    }
};