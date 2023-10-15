#include <iostream>
#include <vector>
#include <map>
using namespace std;


class Solution {
public:
    int strStr(string haystack, string needle) {
        int hayStackSize = haystack.size();
        int needleSize = needle.size();

        if(needle.empty() || haystack == needle)
        {
            return 0;
        }
        if(hayStackSize < needleSize)
        {
            return -1;
        }

        int j;
        bool compareState = true;
        for(int i = 0; i < hayStackSize; i++)
        {
            compareState = true;
            for(j = 0; j < needleSize; j++)
            {
                if(haystack[i] != needle[j])
                {
                    compareState = false;
                    break;
                }

                while(haystack[i] == needle[j] && j < needleSize)
                {
                    int m = i;
                    int n = j;
                    int currentHaystack = haystack[m];
                    int currentNeedle = needle[n];
                    if(currentHaystack != currentNeedle)
                    {
                        compareState = false;
                        break;
                    }
                    j = n;
                    m++;
                    n++;
                }
            }
            if(j >= needleSize &&  i < hayStackSize && compareState)
            {
                return i;
            }
            else if(j >= needleSize &&  i >= hayStackSize)
            {
                return 0;
            }
        }
        return -1;
    }
};

int main() {
    Solution a;
    
    int res = a.strStr("abc", "c");
    cout << "res = " << res;

    return 0;
}