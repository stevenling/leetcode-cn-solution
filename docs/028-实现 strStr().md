# 028 实现 strStr() 
来源：力扣（LeetCode）

链接：https://leetcode.cn/problems/implement-strstr

著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

## 一、题目描述
实现 strStr() 函数。

给你两个字符串 haystack 和 needle ，请你在 haystack 字符串中找出 needle 字符串出现的第一个位置（下标从 0 开始）。如果不存在，则返回  -1 。

说明：

当 needle 是空字符串时，我们应当返回什么值呢？这是一个在面试中很好的问题。

对于本题而言，当 needle 是空字符串时我们应当返回 0 。这与 C 语言的 strstr() 以及 Java 的 indexOf() 定义相符。

 

示例 1：

输入：haystack = "hello", needle = "ll"
输出：2
示例 2：

输入：haystack = "aaaaa", needle = "bba"
输出：-1
 

提示：

1 <= haystack.length, needle.length <= 104
haystack 和 needle 仅由小写英文字符组成
## 二、解法
### 2.1 解法一
定义 i, j 分别指向当前 haystack 和 needle 索引处。

先判断第一个索引是否相等，如果不相等 haystack 的索引往后移动。
比如 abcdef 与 bcd 匹配：
首先 i 指向 abcdef 的 a，j 指向 bcd 的 b，a 与 b 匹配，不相等，i 往后移动指向 b，然后匹配。

第一个索引匹配相等之后，各自向后移动匹配，不匹配那么 haystack 的索引往后移动。

代码实现
```cpp
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
                else if(haystack[i] == needle[j])
                {
                    int m = i + 1;
                    int n = j + 1;
                    while(n < needleSize)
                    {
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
```