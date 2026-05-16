class Solution {
public:
    int f(int low, int high, vector<int> &nums) {
        
        // Base case 1:
        // If only one element is left, that element is the minimum.
        if (low == high)
            return nums[low];

        // Base case 2:
        // Invalid range, return a very large value so it does not affect min().
        else if (low > high)
            return 1e9;

        // Calculate middle index.
        int mid = (low + high) / 2;

        // Case 1:
        // If the current subarray is already sorted,
        // then the first element is the minimum.
        if (nums[low] < nums[high])
            return nums[low];

        // Case 2:
        // Check if mid itself is the pivot point.
        // Example: [4,5,1,2,3]
        //              ^
        //             mid
        // If previous element is greater than nums[mid],
        // then nums[mid] is the minimum.
        else if (mid > 0 && nums[mid - 1] > nums[mid])
            return nums[mid];

        // Case 3:
        // Check if the element right after mid is the pivot.
        // Example: [4,5,6,1,2,3]
        //                ^
        //             mid+1
        // If nums[mid] > nums[mid + 1],
        // then nums[mid + 1] is the minimum.
        else if (mid < nums.size() - 1 && nums[mid] > nums[mid + 1])
            return nums[mid + 1];

        // Case 4:
        // If nums[mid] > nums[high],
        // it means the minimum lies in the right half.
        else if (nums[mid] > nums[high])
            low = mid + 1;

        // Case 5:
        // Otherwise, minimum lies in the left half.
        else {
            
            // Special handling for duplicates:
            // If low, mid, and high are all equal,
            // we cannot determine which half contains the minimum.
            // So we recursively search both halves.
            if (nums[low] == nums[mid] && nums[mid] == nums[high]) {
                int firstHalf = f(low, mid, nums);
                int secondHalf = f(mid + 1, high, nums);
                return min(firstHalf, secondHalf);
            }

            // Search left half.
            high = mid - 1;
        }

        // Recursive call on the reduced search space.
        return f(low, high, nums);
    }

    int findMin(vector<int>& nums) {
        // Start searching in the entire array.
        return f(0, nums.size() - 1, nums);
    }
};