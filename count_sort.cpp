// find the count of every element
// calculate the position of each element
// add up the number of elements in the array to get the positon of the elements
// from the last element start putting the values and decrement the values of number of elements

// #include<iostream>
// using namespace std;
// void countsort(int arr[],int n){
//     int k=arr[0];
//     for(int i=0;i<n;i++){
//         k=max(k,arr[i]);
//     }
//     int count[100]={0};
//     for(int i=0;i<n;i++){
//         count[arr[i]]++;
//     }
//     for(int i=1;i<=k;i++){
//         count[i]+=count[i-1];
//     }
//     int ans[n];
//     for(int i=n-1;i>=0;i-- ){
//         ans[--count[arr[i]]]=arr[i];
//     }
//     for(int i=0;i<n;i++){
//         arr[i]=ans[i];
//     }
// }
// int main(){
//     int arr[]={1,3,2,3,4,1,6,4,3};
//     countsort(arr,9);
//     for(int i=0;i<9;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// void countsort(int arr[],int n){
//     int mx=arr[0];
//     for(int i=0;i<n;i++){
//         mx=max(mx,arr[i]);
//     }
//     int count[100]={0};
//     for(int i=0;i<n;i++){
//         count[arr[i]]+=1;
//     }
//     for(int i=1;i<=mx;i++){
//         count[i]=count[i]+count[i-1];
//     }
//     int ans[n];
//     for(int i=n-1;i>=0;i--){
//         ans[--count[arr[i]]]=arr[i];
//     }
//     for(int i=0;i<n;i++){
//         arr[i]=ans[i];
//     }
// }
// int main(){
//     int arr[]={2,3,1,2,3,2,1};
//     countsort(arr,7);
//     for(int i=0;i<7;i++){
//         cout<<arr[i]<<" ";
//     }    
//     return 0;
// }