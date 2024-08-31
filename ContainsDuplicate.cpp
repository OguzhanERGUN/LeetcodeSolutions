#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

	class Solution {
	public:
		unordered_map<int, int> hashMap;

		bool containsDuplicate(vector<int>& nums) {
			for (int i = 0; i < nums.size(); i++)
			{
				if (hashMap.find(nums[i]) != hashMap.end()) {
					return true;
				}
				hashMap[nums[i]] = i;
			}
			return false;
		}
	};

