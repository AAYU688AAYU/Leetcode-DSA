class Solution {
public:
    void update(vector<int>& seg, int idx, int l, int r, int pos) {
        if(l == r) {
            seg[idx]++;
            return;
        }

        int mid = l + (r - l) / 2;

        if(pos <= mid)
            update(seg, 2 * idx + 1, l, mid, pos);
        else
            update(seg, 2 * idx + 2, mid + 1, r, pos);

        seg[idx] = seg[2 * idx + 1] + seg[2 * idx + 2];
    }

    int query(vector<int>& seg, int idx, int l, int r, int ql, int qr) {
        if(qr < l || r < ql)
            return 0;

        if(ql <= l && r <= qr)
            return seg[idx];

        int mid = l + (r - l) / 2;

        return query(seg, 2 * idx + 1, l, mid, ql, qr) +
               query(seg, 2 * idx + 2, mid + 1, r, ql, qr);
    }

    int countRangeSum(vector<int>& nums, int lower, int upper) {
        int n = nums.size();

        vector<long long> prefix(n + 1, 0);

        for(int i = 0; i < n; i++)
            prefix[i + 1] = prefix[i] + nums[i];

        vector<long long> values;

        for(long long x : prefix) {
            values.push_back(x);
            values.push_back(x - lower);
            values.push_back(x - upper);
        }

        sort(values.begin(), values.end());
        values.erase(unique(values.begin(), values.end()), values.end());

        int m = values.size();

        vector<int> seg(4 * m);

        int ans = 0;

        for(long long x : prefix) {
            long long left = x - upper;
            long long right = x - lower;

            int l = lower_bound(values.begin(), values.end(), left) - values.begin();
            int r = upper_bound(values.begin(), values.end(), right) - values.begin() - 1;

            if(l <= r)
                ans += query(seg, 0, 0, m - 1, l, r);

            int pos = lower_bound(values.begin(), values.end(), x) - values.begin();

            update(seg, 0, 0, m - 1, pos);
        }

        return ans;
    }
};