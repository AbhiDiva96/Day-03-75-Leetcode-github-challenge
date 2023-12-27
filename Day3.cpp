#include<bits/stdc++.h>
 using namespace std;

 int minCost(string colors, vector<int>& neededTime) {
          int n = colors.size();
          int ans =0;
          int i=0;
          
          while(i<n){
              int sum = neededTime[i];
              int maxi = neededTime[i];

              char cur = colors[i++];

              while(i<n && colors[i] == cur){
                  maxi = max(maxi, neededTime[i]);
                   sum += neededTime[i++];
              }
              ans += (sum - maxi);
          }
          return ans;
    }


int main(){
  int t;
  cin>>t;
  while(t--){
      string colors;
      cin>> colors;
      int n;
      cin>>n;
      vector<int> neededTime(n);

      for(int i=0; i<n; i++){
         cin>> neededTime[i] ;
      }

      int result = minCost(colors , neededTime);
      cout << result << endl;
  }
return 0;}
