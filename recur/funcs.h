#include<iostream>
#include<vector>
#include<climits>
void print1toN(int n){
    if (n<1){return;}
    print1toN(n-1);\
    std::cout<<n;
}

int returnMinOfArr(std::vector<int>v){
    int min=INT_MAX;    int ans=-1;
    for (int i=0;i<v.size();i++){
        if (v[i]<min){
            min=v[i];   ans=i;
        }
    }   return ans;
}
std::vector<int>ans;
void swapElements(std::vector<int>&nums,int i,int j){
    int flag=nums[i];   nums[i]=nums[j];    nums[j]=flag;   return;}
void sortAnArr(std::vector<int>&nums){
    if (nums.size()<2){return;}
    // if (nums.size()==1){ans.push_back(nums[0])}
    int minIndex=returnMinOfArr(nums);
    swapElements(nums,0,minIndex);
    std::vector<int>SortedArr(nums.begin()+1,nums.end());
    sortAnArr(SortedArr);
    for (int i=1;i<nums.size();i++){
        nums[i]=SortedArr[i-1];
    }   return;
    
}