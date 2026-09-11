#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
vector<int> twoSum(vector<int>& arr, int target)
{
    unordered_map<int, int> mp;

    for(int i = 0; i < arr.size(); i++)
    {
        int needed = target - arr[i];

        if(mp.find(needed) != mp.end())
        {
            return {mp[needed], i};
        }

        mp[arr[i]] = i;
    }

    return {};
}
int main() {
    vector<int> arr={2,7,11,15};
int target=9;
vector<int> ans= twoSum(arr,target);
cout<<ans[0]<<" "<<ans[1]<<endl;
return 0;
}