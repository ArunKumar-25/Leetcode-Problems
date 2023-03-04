class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long n = nums.size(), i, p, q, j, ans = 0, l;
        p = q = 0;
        while (p < n) {
            while (p < n && (nums[p] < minK || nums[p] > maxK))
            p++;
            q = p;
            while (q < n && (nums[q] >= minK && nums[q] <= maxK))
            q++;
            i = l = p;
            while (i < q) {
                while (i < q && (nums[i] != minK && nums[i] != maxK))
                i++;
                if (i < q) {
                    j = i;
                    if (nums[i] == minK) {
                        while (j < q && nums[j] != maxK)
                        j++;
                        if (j < q)
                        ans += (i-l+1)*(q-j);
                    } else {
                        while (j < q && nums[j] != minK)
                        j++;
                        if (j < q)
                        ans += (i-l+1)*(q-j);
                    }
                }
                l = ++i;
            }
            p = q;
        }
        return ans;
    }
};