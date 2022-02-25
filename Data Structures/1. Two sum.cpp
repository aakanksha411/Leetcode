﻿class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     vector<pair<int,int>> v;
     vector<int> p;
     for(int i=0;i<nums.size();i++){
        v.push_back(make_pair(nums[i],i));  
     }
     sort(v.begin(),v.end());
     int i=0,j=v.size()-1;
     while(i<j){
         if(v[i].first+v[j].first==target){
           p.push_back(v[i].second);
           p.push_back(v[j].second);
           break;
         }
         else if((v[i].first+v[j].first)>target){
             j--;
         }
         else{
             i++;
         }
     }
     return p;   
    }
};