// 0 1 2 sort
// devide into 4 parts
// starting to low will be for 0 in colour red
// low to mid for 1 in white color
// mid to high will be unknown and high to last will be for 2 with blue color
// every stem we will decrease unknown region


// #include<iostream>
// using namespace std;
// int swap(int arr[],int i,int j){
//     int temp=arr[i];
//     arr[i]=arr[j];
//     arr[j]=temp;
// }
// void dnfsort(int arr[],int n){
//     int low=0,mid=0,high=n-1;
//     while(mid<=high){
//     if(arr[mid]==1){
//         mid++;
//     }
//     else if(arr[mid]==0){
//         swap(arr,low,mid);
//         low++; mid++;
//     }
//     if(arr[mid]==2){
//         swap(arr,mid,high);
//         high--;
//     }
//     }
// }
// int main(){
//     int arr[]={0,1,2,1,0,2,2,1};
//     dnfsort(arr,8);
//     for(int i=0;i<8;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }