#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pi;
void topKFrequent(vector<int> &nums, int k)
{
    unordered_map<int, int> mp;
    for (int num : nums)
    {
        mp[num]++;
    }
    priority_queue<pi, vector<pi>, greater<pi>> minHeap;
    for (auto entry : mp)
    {
        int number = entry.first;
        int frequency = entry.second;

        minHeap.push({frequency, number});
        if (minHeap.size() > k)
        {
            minHeap.pop();
        }
    }
    vector<int> result;
    while (!minHeap.empty())
    {
        result.push_back(minHeap.top().second);
        minHeap.pop();
    }
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int k;
    cin >> k;
    topKFrequent(nums, k);
}
