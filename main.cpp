#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> evenOddBit(int n)
    {
        vector<int> res = {0, 0};
        int i = 0;
        while (n)
        {
            res[i] += n & 1;
            n >>= 1;
            i ^= 1;
        }
        return res;
    }
};

int main() {
    Solution sol;
    vector<int> res = sol.evenOddBit(5);
    for (int i : res)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}