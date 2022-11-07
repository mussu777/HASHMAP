#include <bits/stdc++.h>
using namespace std;
#include <map>


int maximumFrequency(vector<int> &arr, int n)
{
   unordered_map<int,int> count;
   int maxfreq=0;
   int maxAns=0;
   for(int i=0;i<arr.size();i++){
       count[arr[i]]++;
       maxfreq = max(maxfreq , count[arr[i]]);
   }
   for(int i=0;i<arr.size();i++){
       if(maxfreq==count[arr[i]]){
           maxAns=arr[i];
           break;
       }
   }
   return maxAns;
}