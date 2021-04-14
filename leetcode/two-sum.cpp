#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    vector<int> twoSum(vector<int> const &nums,int target){
      for(int i=0;i<nums.size();++i){
        for(int j=0;j<nums.size();++j){
          if(nums[j]==target-nums[i]){
            return {i,j};
          }
        }
      }
      return {};
    }
};

int main() {
  Solution s;
  vector<int> arr={2,7,11,25};
  vector<int> a = s.twoSum(arr,9);
  cout<<a;
  for (int i=0;i<arr.size();++i){
    cout<<arr.at(i);
  }
  return 0;
}

