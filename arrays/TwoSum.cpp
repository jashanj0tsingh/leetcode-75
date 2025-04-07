#include <iostream>
#include <ostream>
#include <unordered_map>
#include <vector>

#include <IProblem.h>

class TwoSum : IProblem {
public:
    void run() override {
        // input test case
        const std::vector<int> nums= {2,7,11,15};
        constexpr int target = 9;

        const auto indices = twoSum(nums, target);
        std::cout << "[" <<  indices[0] << "," << indices[1] << "]" << std::endl;
    }

private:
    static std::vector<int> twoSum(const std::vector<int>& nums, const int target) {
        std::unordered_map<int, int> map;
        int index = 0;
        for (const int num : nums) {
            int diff = target - num;
            if (map.find(diff) != map.end()) {
                return {index, map[diff]};
            }
            map[num] = index;
            ++index;
        }
        return {};
    }
};