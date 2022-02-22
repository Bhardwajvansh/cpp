// two pointer technique

// 1. sort the srray
// 2.traverse and fix the 1st element of the triplet
// 3.find the other two element by X-arr[i]

// #include<bits/stdc++.h>
// using namespace std;
 
// int main(){
//     vector <int> arr={6,7,1,9,3,12}; 
//     int target=14;
//     sort(arr.begin(),arr.end());
//     bool x=false;
//     for(int i=0;i<6;i++){
//         int lo=i+1,hi=6-i;
//         while(lo<hi){
//             int current=arr[i]+arr[lo]+arr[hi];
//             if(current==target){
//                 x=true;
//             }
//             if(current<target){
//                 lo++;
//             }
//             else hi--;
//         }
//     }
//     if(x){
//         cout<<"YES";
//     }
//     else cout<<"NO";  
//     return 0;
// }


// maximum consicutive 1s

// #include<bits/stdc++.h>
// using namespace std;
 
// int main(){
//     vector<int> a={1,1,1,0,0,0,1,1,1,1,1,1,0,0,1,1,1,1};
//     int k=2;
//     int ans=INT_MIN;
//     int z=0,i=0;
//     for(int j=0;j<a.size();j++){
//         if(a[j]==0){
//             z++;
//         }
//         while(z>k){
//             if(a[i]==0){
//                 z--;
//             }
//             i++;
//         }
//         ans=max(ans,j-i+1);
//     }
//     cout<<ans;
//     return 0;
// }

// longest substring with non repeating characters

// #include<bits/stdc++.h>
// using namespace std;
 
// int main(){
//     string s="pwwkew";
//     int c=0;
//     int arr[26]={-1};
//     int ans=0;
//     for(int i=0;i<s.size();i++){
//         if(arr[s[i]-'a']==-1){
//             arr[s[i]-'a']++;
//             c++;
//         }       
//         ans=max(ans,c);
//         if(arr[s[i]-'a']!=-1){
//             c=0;
//             arr[s[i]-'a']=-1;
//         } 
//     }
//     cout<<ans;
//     return 0;
// }