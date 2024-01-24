
#include <iostream>
#include <vector>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        unsigned int k = 1;
        for (auto first = nums.begin(), second = nums.begin() + 1; second < nums.end(); ++second) {
            if (*first != *second) {
                first++;
                *first = *second;
                k++;
            }
        }
        for (int i = nums.size() - k; i > 0; --i) {
            nums.pop_back();
        }
        return k;
    }
};

int main()
{

    std::vector<int> nums{ 1,1,2 };
    //std::vector<int> nums{ 0,0,1,1,1,2,2,3,3,4 };
    Solution s;
    s.removeDuplicates(nums);
    return 0;
}