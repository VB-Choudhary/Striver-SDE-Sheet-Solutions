//SORT COLORS
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0;
        int mid = 0;
        int high = nums.size() - 1;

        while (mid <= high) {
            if (nums[mid] == 0) {
                // Move 0 to the left section
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            } 
            else if (nums[mid] == 1) {
                // 1 stays in the middle section
                mid++;
            } 
            else { // nums[mid] == 2
                // Move 2 to the right section
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};