class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int i = 0, j = nums.size() - 1;
        if (nums.empty()) {
            return {-1, -1};
        }
        if (nums.size() == 1) {
            if (nums[0] == target) {
                return {0, 0};
            } else {
                return {-1, -1};
            }
        }
        
        if (nums[j] < target || nums[i] > target) {
            return {-1, -1};
        }
        
        while (j >= i) {
            int mid = i + ((j - i) / 2);
            if (nums[mid] > target) {
                j = mid - 1;
            } else if (nums[mid] < target) {
                i = mid + 1;
            } else {
                i = mid;
                j = mid;
                while (i >= 0 && nums[i] == target) {
                    i--;
                }
                while (j < nums.size() && nums[j] == target) {
                    j++;
                }
                return {i + 1, j - 1};
            }
        }
        return {-1, -1};
    }
};
