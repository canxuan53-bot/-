#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;
vector<int>twosum(vector<int>& nums, int target) {
      unordered_map<int, int> hash_map;
   for(int i = 0; i < nums.size(); ++i) {
       int complement = target - nums[i];
       if(hash_map.count(complement)) {
          return {hash_map[complement], i}; 
       }
       hash_map[nums[i]] = i;
   }
   return {};
}
int main() {
    int n, target;
   cout << "请输入数组长度：";
   cin >> n;
   vector<int>nums(n);
   cout << "请输入一个数组:";
   for(int i = 0; i < n; ++i) {
      cin >> nums[i];
   }
   cout<<"请输入一个目标值：";
   cin >> target;
   vector<int>result = twosum(nums, target);
   if( !result.empty()) {
      cout << "[" << result[0] << "," << result[1] << "]" << endl;
   } else {
     cout << "未找到解" << endl;
   }
   return 0;
}
