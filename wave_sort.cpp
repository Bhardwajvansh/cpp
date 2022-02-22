// wave sort

// arr[0]>=arr[1]<=arr[2]>=arr[3]=<arr[4].........

// #include<iostream>
// using namespace std;
// void swap(int arr[],int i,int j){
//     int temp=arr[i];
//     arr[i]=arr[j];
//     arr[j]=temp;
// }
// void wavesort(int arr[],int n){
//     for(int i=1;i<n-1;i+=2){
//         if(arr[i]>arr[i-1]){
//             swap(arr,i,i-1);
//         }
//         else if(arr[i]<arr[i+1]){
//             swap(arr,i,i+1);
//         }
//     }
// }
// int main(){
//     int arr[]={1,2,5,6,7,9,3};
//     wavesort(arr,7);
//     for(int i=0;i<7;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }




// counting inversions

// #include<iostream>
// using namespace std;
// long long merge(int arr[],int l,int mid,int r){
//     long long inv=0;
//     int n1=mid+1-l;
//     int n2=r-mid;
//     int a[n1];
//     int b[n2];
//     for(int i=0;i<n1;i++){
//         a[i]=arr[l+i];
//     }
//     for(int i=0;i<n1;i++){
//         b[i]=arr[mid+1+i];
//     }

//     int i=0;int j=0;int k=l;
//     while(i<n1&&j<n2){
//         if(a[i]<=arr[j]){
//             arr[k]=a[i];
//             k++;i++;
//         }
//         else{
//             arr[k]=b[i];
//             inv+=n1-i;   // as all remaining elements will be bigger than the element
//             j++;k++;
            
//         }
//     }
//     while(i<n1){
//         arr[k]=a[i];
//         i++;k++;
//     }
//     while(j<n2){
//         arr[k]=b[j];
//         j++;k++;
//     }
//     return inv;
//     }
// long long mergesort(int arr[],int l,int r){
//     long long inv=0;
//     if(l<r){
//         int mid=(l+r)/2;
//         inv+=mergesort(arr,l,mid);        
//         inv+=mergesort(arr,mid+1,r);        
//         inv+=merge(arr,l,mid,r);
//     }
//     return inv;
// }
// int main(){
//     int arr[]={3,2,1};
//     cout<<mergesort(arr,0,3);   
//     return 0;
// }