#include <vector>
#include <iostream>
using namespace std;

int main()
{
    vector<int> nums{3, 1, 2};
    int low = 0;
    int high = nums.size() - 1;

    while (low < high)
    {
        int mid = low + (high - low) / 2;
        cout << "Currently low is : " << low << " and high is : " << high << " and mid is : " << mid << "\n";

        if (nums[high] < nums[low])
        {
            low = mid;
            cout << "Currently low is : " << low << "begin updated to " << mid << "\n";
            cout << "Now is nums[low] :" << nums[low] << "\n";
        }
        else
        {

            cout << "Currently high is :" << high << endl;
            high = mid;
            cout << "begin updated to" << mid << "\n";
        }
    }
    cout << "samlltest element is :" << nums[low] << "\n";
}