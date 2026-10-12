   // Two Sum (unordered_map)
   // Time: O(?)   Space: O(?)
   // Why better than sort + two pointers: ?
   #include <iostream>
   #include <vector>
   #include <unordered_map>
   using namespace std;

   vector<int> twoSum(const vector<int>& nums, int target) {
       	unordered_map<int, int>mp;
	vector<int> ans(2, -1);
	int s = nums.size();
	for(int i = 0; i < s; i++)
	{
		if(mp.find(target - nums[i]) != mp.end())
		{
			ans[0] = mp[target - nums[i]];
			ans[1] = i;
			break;
		}
		else
		{
			mp[nums[i]] = i;
		}
	}
	return ans;
   }

   int main() {
       auto print = [](const vector<int>& v) {
           if (v.empty()) cout << "no answer\n";
           else cout << v[0] << " " << v[1] << "\n";
       };
       print(twoSum({2, 7, 11, 15}, 9));   // normal
       print(twoSum({3, 3}, 6));           // duplicates
       print(twoSum({1, 2, 3}, 100));      // no answer
   }
