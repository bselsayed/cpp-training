#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int twoSum(int *, int, int);

int main()
{
    int nums[] = {4, 7, 11, 2, 15};
    int target = 26;
    int amount = sizeof(nums)/sizeof(int);
//   cout << amount << endl;

     twoSum(nums,target,amount);

    //cout << answer << endl;

    return 0;
}
int twoSum(int *nums, int target, int amount)
{
    for (int i = 0; i < amount; i++)
    {
        for (int j = 0; j < amount; j++)
        {
            if (nums[i] + nums[j] == target)
            {
 //               int ans[] = {i, j};
   //             return ans;
            	cout << "i = " << i << " j = " << j << endl;
            	return 1;
            }
        }
    }
    return 0;

}

