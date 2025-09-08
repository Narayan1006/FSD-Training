#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> nums3(m + n);
        int i = 0, j = 0, k = 0;

        // Merge elements from nums1 and nums2 into nums3
        while (i < m && j < n) {
            if (nums1[i] <= nums2[j]) {
                nums3[k++] = nums1[i++];
            } else {
                nums3[k++] = nums2[j++];
            }
        }

        // Copy remaining elements from nums1
        while (i < m) {
            nums3[k++] = nums1[i++];
        }

        // Copy remaining elements from nums2
        while (j < n) {
            nums3[k++] = nums2[j++];
        }

        // Copy merged result back to nums1
        for (int x = 0; x < m + n; ++x) {
            nums1[x] = nums3[x];
        }
    }
    int main() {
    Solution sol;
    vector<int> nums1 = {1, 3, 5, 0, 0, 0};
    vector<int> nums2 = {2, 4, 6};
    int m = 3, n = 3;

    sol.merge(nums1, m, nums2, n);

    for (int num : nums1) {
        cout << num << " ";
    }
    // Output: 1 2 3 4 5 6
}
};


