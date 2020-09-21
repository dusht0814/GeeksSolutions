#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    bool binarySearch(vector<int>&arr,int newTarget){
        int low=0,high=arr.size()-1;
        int mid;
        while(low<=high){
            mid=(low+high)/2;
            if(arr[mid]>newTarget){
                high=mid-1;
            }
            else if(arr[mid]<newTarget){
                low=mid+1;
            }
            else
                return true; 
        }
        return false;
    }
    
    vector<int> twoSum(vector<int>&arr,int target){
        vector<int>sol;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
            if(binarySearch(arr,target-arr[i])){
                sol.push_back(arr[i]);
                sol.push_back(target-arr[i]);
                break;
            }
        }
        return sol;
    }
};

int main() {
  int n;
  cin>>n;
  vector<int>arr(n);
  for(int i=0;i<n;i++){
      cin>>arr[i];
  }
  int target;
  cin>>target;
  Solution obj;
  vector<int>ans = obj.twoSum(arr,target);
  for(auto i:ans)
  cout<<i<<" ";
}
