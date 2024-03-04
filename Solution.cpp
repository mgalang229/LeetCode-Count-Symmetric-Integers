class Solution {
    bool is_symmetric(int x) {
        vector<int> vec;
        while (x > 0) {
            vec.push_back(x % 10);
            x /= 10;
        }
        int n = vec.size();
        if (n % 2 == 1) {
            return false;
        }
        int first = 0, second = 0;
        for (int i = 0; i < n / 2; i++) {
            first += vec[i];
            second += vec[n-1-i];
        }
        return first == second;
    }
    
public:
    int countSymmetricIntegers(int low, int high) {
        int cnt = 0;
        while (low <= high) {
            cnt += is_symmetric(low);
            low++;
        }
        return cnt;
    }
};
