#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

   int singleNumber(vector<int>& nums) {
        int target;
        bool erase = false;
        int size = nums.size();
        for (int i = 0; i < size; i++) {
            if (erase == true) {
                i--;
                erase = false;
            }
            target = nums[i];
            for (int j = i + 1; j < size;j++) {
                if (target == nums[j]) {
                    nums.erase(nums.begin() + j);
                    j--;
                    size--;
                    erase = true;
                }
            }
            if (erase == true) {
                nums.erase(nums.begin() + i);
                size--;
            }
        }
        return nums[0];
    }


int main()
{
    vector<int> nums = { 4,1,2,1,2,4,5 };
    cout << singleNumber(nums);
}

