#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector <int> mergeVec;
        double median;
        int m, n;
        mergeVec.insert(mergeVec.end(), nums1.begin(),nums1.end());
		mergeVec.insert(mergeVec.end(), nums2.begin(),nums2.end()); 

        // 排序
        sort(mergeVec.begin(), mergeVec.end()); 
        int length = mergeVec.size();
        if(length % 2 == 1) //奇数
        {
            median = mergeVec[length / 2];
            return median;
        }
        else
        {
            m = (length / 2) - 1;
            n = length / 2;
            median = (mergeVec[m] + mergeVec[n]) / 2.0;
            return median;
        }
    }
};

int main() {
    Solution a;
    vector<int> m;
    m.push_back(1);
    m.push_back(3);

    vector<int> n;
    n.push_back(2);
    // n.push_back(4);

    double res = a.findMedianSortedArrays(m, n);
    cout << "res = " << res;

    return 0;
}