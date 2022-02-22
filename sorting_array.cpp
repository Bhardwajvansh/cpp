//                                            slelection sort
// find the minimum element and replace it with the ist element.

// #include<iostream>
// using namespace std;
 
// int main(){
//     int arr[8]={2,6,3,4,8,7,2,1,};
//     int temp=0;
//     for(int i=0;i<7;i++){
//         for(int j=i+1;j<8;j++){
//             if(arr[i]>arr[j]){
//                 temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }
    
//     for(int i=0;i<8;i++){
//         cout<<arr[i]<<",";
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
 
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n-1;i++){
//         for(int j=i;j<n;j++){
//             if(arr[i]>arr[j]){
//                 int temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
//     return 0;
// }


//                                               bubble sort
// repeatedly sort adjascent elements if they are arranged wrong.

// #include<iostream>
// using namespace std;
 
// int main(){
//     int arr[5]={4,3,2,5,1};
//     int n=5;
//     for(int i=0;i<5;i++){
//         for(int j=0;j<=5-i;j++){
//             if(arr[j]>arr[j+1]){
//                 int temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }
//         }
//     }
    // for(int i=0;i<5;i++){
    //     cout<<arr[i]<<" ";
    // }
//     return 0;
// }


//                                               insertion sort
// insert an element from unsorted array into the correct position in the sorted array. starts from second element
// increase the position of the large element by one ultil the small element is int the write place

// #include<iostream>
// using namespace std;
 
// int main(){
//     int arr[5]={3,2,5,4,6};
//     int n=5;
//     for(int i=1;i<5;i++){
//         int a=arr[i];
//         int b=i-1;
//         while(arr[b]>a && b>=0){
//             arr[b+1]=arr[b];
//             b--;
//         }
//         arr[b+1]=a;
//     }
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }





// selection sort

// #include<iostream>
// using namespace std;
 
// int main(){
    // int n=5;
    // int arr[5]={2,3,5,4,1};
//     for(int i=0;i<n-1;i++){
//         for(int j=i;j<n;j++){
//             if(arr[i]>arr[j]){
//                 int temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }  
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
//     return 0;
// }

// bubble sort

// #include<iostream>
// using namespace std;
 
// int main(){
//     int n=5;
//     int arr[5]={2,3,5,4,1};
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]>arr[j]){
//                 int temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }