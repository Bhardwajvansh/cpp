// max till i

// #include<iostream>
// using namespace std;
 
// int main(){
//     int n=5;
//     int arr[5]={2,3,5,1,7};
//     int mx=arr[0];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i;j++){
//             mx=max(arr[i],arr[j]);
//         }
//         cout<<"for "<<i<<" is "<<mx<<endl;
//     }    
//     return 0;
// }



// sum of all sum arrays;

// #include<iostream>
// using namespace std;
 
// int main(){
//     int arr[5]={1,2,0,7,2};
//     int n=5;
//     for(int i=0;i<n;i++){
//         int sum=0;
//         for(int j=i;j<n;j++){
//             sum=sum+arr[j];
//             cout<<sum<<endl;
//         }
//     }   
//     return 0;
// }


// longest arithematic subarray

// #include<iostream>
// using namespace std;
 
// int main(){
//     int n=9;
//     int arr[9]={1,2,3,4,5,6,7,8,10};
//     int diff,mx,x=0,c=2,i=0;
//     diff=arr[1]=arr[0];
//     while(i<n){
//         if((arr[i+1]-arr[i])==diff){
//             c++;
//         }       
//         else{
//             diff=arr[i+1]-arr[i];
//             mx=max(x,c);
//             x=c;
//             c=2;
//         }
//         i++;
//     }
//     cout<<mx+1<<endl;
//     return 0;
// }




// #include<iostream>
// using namespace std;
 
// int main(){
//     int n=9;
//     int arr[9]={1,2,3,4,5,6,7,8,10};
//     int pd,curr=2,ans=2,i=2;
//     pd=arr[1]-arr[0];
//     while(i<n){
//         if(arr[i]-arr[i-1]==pd){
//             curr++;
//         }
//         else{
//             pd=arr[i]-arr[i-1];
//             curr=2;
//         }
//         ans=max(ans,curr);
//         i++;
//     }
//     cout<< ans<<endl;
//     return 0;
// }



//record breakers

// #include<iostream>
// using namespace std;
 
// int main(){
//     int n=8;
//     int arr[8]={1,2,0,7,2,0,2,2};
//     int sum=0;
//     for(int i=0;i<n;i++){
//         if(i!=0 && i!=n && arr[i]>arr[i-1] && arr[i]>arr[i+1]){
//             sum=sum+1;
//         }
//         else{
//             continue;
//         }
//     }
//     cout<<sum;
//     return 0;
// }



//  1st occurance in an array;

// #include<bits/stdc++.h>
// using namespace std;
 
// int main(){
//     int n=7,a=INT_MAX,b=0;
//     int arr[7]={1,4,3,5,3,5,6};
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]==arr[j]){
//                 a=min(a,i);
//                 b=1;                
//                 break;
//             }
//         }
//         if(b==1){
//             break;
//         }
//     }
//     cout<<a;
//     return 0;
// }


//subarray with given sum;

// #include<iostream>
// using namespace std;
 
// int main(){
//     int n=5;
//     int arr[5]={1,2,3,5,7};
//     int s=12;
//     for(int i=0;i<n-1;i++){
//         int sum=0;
//         if(arr[i]==s){
//             cout<<i<<endl;
//         }
//         for(int j=i+1;j<n;j++){
//            sum=sum+arr[i]+arr[j];
//            if(sum==s){
//                cout<<i<<","<<j<<endl;
//            } 
//         }
//     }
//     return 0;
// }

// optimized way;

// #include<iostream>
// using namespace std;
 
// int main(){
//     int n=4;
//     int arr[4]={1,2,4,1};
//     int s=5;
//     int i=0,j=0,st=1,en=1,sum=0;
//     while(j<n && sum+arr[j]<=s){
//         sum+=arr[j];
//         j++;
//     }
//     if(sum==s){
//         cout<<i+1<<j;
//         return 0;
//     }
//     while(j<n){
//         sum+=arr[j];
//         while(sum>s){
//             sum-=arr[i];
//             i++;
//         }
//         if(sum==s){
//             st=i+1;
//             en=j+1;
//             break;
//         }
//         j++;
//     }
//     cout<<st<<" "<<en<<endl;
//     return 0;
// }

//smallest possible missing number

// #include<bits/stdc++.h>
// using namespace std;
 
// int main(){
//     int b=1,m=1e6+2;
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     bool arr[m];
//     for(int i=0;i<m;i++){
//         arr[i]=false;
//     }
//     for(int i=0;i<n;i++){
//         if(a[i]>0){
//             arr[a[i]]=true;
//         }
//         else{
//             continue;
//         }
//     }
//     while(b){
//         if(arr[b]==false){
//             cout<<b;
//             break;
//         }
//         b++;
//     }
//     return 0;
// }


// printing all subarrays;

// #include<iostream>
// using namespace std;
 
// int main(){
//     int n=5;
//     int arr[5]={1,2,4,5,4};
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             for(int k=i;k<=j;k++){
//                 cout<<arr[k]<<" ";
//             }
//             cout<<endl;            }
//     }
//     return 0;
// }


// maximum subarray problem;


// #include<bits/stdc++.h>
// using namespace std;
 
// int main(){
//     int n=4;
//     int arr[4]={-1,4,7,2};
//     int m=INT_MIN;
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             int sum=0;
//             for(int k=i;k<=j;k++){
//                 sum=sum+arr[k];
//             }
//             m=max(sum,m);
//     }
//     }
//     cout<<m;
//     return 0;
// }


// cumulative sum approach
// store the sum of subarray in another array

