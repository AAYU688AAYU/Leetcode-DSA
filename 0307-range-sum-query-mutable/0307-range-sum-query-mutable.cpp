class NumArray {
public:
    vector<int> seg;
    int n;

    NumArray(vector<int>& nums) {
        n = nums.size();

        seg.resize(4 * n);

        build(0, 0, n - 1, nums);
    }

    void build(int index, int st, int end, vector<int>& nums) {
        if (st == end) {
            seg[index] = nums[st];
            return;
        }

        int mid = st + (end - st) / 2;

        build(2 * index + 1, st, mid, nums);
        build(2 * index + 2, mid + 1, end, nums);

        seg[index] = seg[2 * index + 1] + seg[2 * index + 2];
    }

    int sumRange(int left, int right, int st, int end, int index) {
        if (end < left || right < st) {
            return 0;
        }

        if (left <= st && end <= right) {
            return seg[index];
        }

        int mid = st + (end - st) / 2;

        return sumRange(left, right, st, mid, 2 * index + 1) +
               sumRange(left, right, mid + 1, end, 2 * index + 2);
    }

    int sumRange(int left, int right) {
        return sumRange(left, right, 0, n - 1, 0);
    }

    void update(int index, int st, int end, int pos, int val) {
        if (st == end) {
            seg[index] = val;
            return;
        }

        int mid = st + (end - st) / 2;

        if (pos <= mid) {
            update(2 * index + 1, st, mid, pos, val);
        } else {
            update(2 * index + 2, mid + 1, end, pos, val);
        }

        seg[index] = seg[2 * index + 1] + seg[2 * index + 2];
    }

    void update(int index, int val) { update(0, 0, n - 1, index, val); }
};