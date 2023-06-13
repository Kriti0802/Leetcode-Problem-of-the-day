#include <bits/stdc++.h>
#include <vector>
using namespace std;
class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
    int num=0;
        int minn=INT_MAX;
        for(int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums2.size();j++)
            {
                if(nums1[i]==nums2[j])
                {
                    num=nums1[i];
                    minn=min(minn,num);
                }
                else{
                  num=min(nums1[i]*10+nums2[j],nums2[j]*10+nums1[i]);
                   
                // cout<<"nums= "<<num<<endl;
               minn=min(minn,num);
                }
                
            }
           
         
        }

        return minn;
    }
};