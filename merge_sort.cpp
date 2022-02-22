// MERGE SORT

// will use recursion
// firtly find the mid using two pointers l ans r
// first from l to m
// then m+1 to r
// then merge both arrays 

// #include<iostream>
// using namespace std;
// void merge(int arr[],int l,int mid,int r){
//     int n1=mid-l+1;
//     int n2=r-mid;
//     int a[n1];
//     int b[n2]; // temp arrays
//     for(int i=0;i<n1;i++){
//         a[i]=arr[l+i];
//     }
//     for(int i=0;i<n1;i++){
//         b[i]=arr[mid+1+i];
//     }
//     int i=0;
//     int j=0;
//     int k=l;
//     while(i<n1&&j<n2){
//         if(a[i]<b[j]){
//             arr[k]=a[i];
//             k++;i++;
//         }
//         else{
//             arr[k]=b[j];
//             k++;j++;
//         }
//     }
//     while(i<n1){
//         arr[k]=a[i];
//         k++;i++;
//     }
//     while(j<n2){
//         arr[k]=b[j];
//         k++;j++;
//     }
// }
// void mergesort(int arr[],int l,int r){
//     if(l<r){
//         int mid=(l+r)/2;
//         mergesort(arr,l,mid);
//         mergesort(arr,mid+1,r);
        
//         merge(arr,l,mid,r);
//     }
// }
// int main(){
//     int arr[]={5,4,3,1,2};
//     mergesort(arr,0,4);
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// void merge(int arr[],int l,int r,int mid){
//     int n1=mid-l+1;
//     int n2=r-mid;
//     int a[n1];
//     int b[n2];
//     for(int i=0;i<n1;i++){
//         a[i]=arr[l+i];
//     }
//     for(int i=0;i<n1;i++){
//         b[i]=arr[mid+1+i];
//     }
//     int i=0;
//     int j=0;
//     int k=l;
//     while(i<n1&&j<n2){
//         if(a[i]>b[j]){
//             arr[k]=b[j];
//             k++;
//             j++;

//         }
//         else{
//             arr[k]=a[i];
//             k++;
//             i++;
//         }
//     }
//     while(i<n1){
//         arr[k]=a[i];
//         k++;
//         i++;
//     }
//     while(j<n2){
//         arr[k]=a[i];
//         k++;
//         i++;
//     }
// }
// void mergesort(int arr[],int l,int r){
//     if(l<r){
//         int mid=(l+r)/2;
//         mergesort(arr,l,mid);
//         mergesort(arr,mid+1,r);
//         merge(arr,l,r,mid);
//     }
// }
// int main(){
//     int arr[]={5,4,2,1,3};
//     mergesort(arr,0,4);
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }