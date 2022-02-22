// to find whether the number is a power of 2 or not;

// #include<iostream>
// using namespace std;
 
// int main(){
//     int n,a;
//     cin>>n;
//     for(int i=1;i<n;i++){
//         if(n==(1<<i)){
//             cout<<"yes";
//             break;
//         }    
//         a=i;    
//     }
//     if(a==n-1 || n==1){
//         cout<<"no";
//     }
//     return 0;
// }


// when (n & n-1) = 0 it is a power of 2

// #include<iostream>
// using namespace std;
 
// int main(){
//     int n;
//     cin>>n;
//     if(!(n & n-1) && n){
//         cout<<"yes";
//     }
//     else
//         cout<<"no";

//     return 0;
// }


// program to count the nymber of 1s in the binary number

// (n&n-1) has same bits as n except the rightmost set bit

// #include<iostream>
// using namespace std;
 
// int main(){
//     int n;
//     cin>>n;
//     int c=0;
//     while(n){
//         n=n&(n-1);
//         c++;
//     }
//     cout<<"the number of 1s are "<<c;
//     return 0;
// }


// program to write all possible subsets of a subsets

// #include<iostream>
// using namespace std;
// void subset(int arr[],int n){
//     for(int i=0;i<(1<<n);i++){
//         for(int j=0;j<n;j++){
//             if(i&(1<<j)){
//                 cout<<arr[j]<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int arr[4]={1,2,3,4};
//     int n=4;
//     subset(arr,n);
    
//     return 0;
// }



// to get the element which is present only once while others are occuring twice
// we use XOR  (^)
//     x     y       xor
//     0     0        0
//     0     1        1
//     1     0        1
//     1     1        0

// #include<iostream>
// using namespace std;
// int unique(int arr[],int n){
//     int xorsum=0;
//     for(int i=0;i<n;i++){
//         xorsum=xorsum^arr[i];   // here the duplicate number will XOR to give 0 and the unique number will remain
//     }
//     return xorsum;
// }
// int main(){
//     int arr[]={1,2,3,4,1,2,3};
//     cout<<unique(arr,7);
//     return 0;
// }




// to get 2 unique elements which are present only once while others are occuring twice

// 1st do XOR of all elements. the product will be the XOR of the two uniqie numbers
// find the position of one in the product and take XOR of all the elements which have the bit value 1 at that position
// you will get the 1st unique value . now do the XOR of the 1st product and 1st unique number to get both of the unique values

// #include<iostream>
// using namespace std;
// int setbita(int n,int pos){
//     return (n&(1<<pos))!=0;
// }
// void unique(int arr[],int n){
//     int xorsum=0;
//     for(int i=0;i<n;i++){
//         xorsum=xorsum^arr[i];    // this way we will get the xor of all the numbers which will be the XOR of two unique numbers
//     }
//     int setbit=0;
//     int pos=0;
//     int tempxor=xorsum;
//     while(setbit!=1){
//         setbit=xorsum&1;
//         pos++;                  // this will give the value of 1 at the rightmost positioon 
//         xorsum=xorsum>>1;
//     }
//     int newxor=0;
//     for(int i=0;i<n;i++){
//         if(setbita(arr[i],pos-1)){     // this will check each element if it has setbit at the position and give the 1st unique number
//             newxor=newxor^arr[i];
//         }
//     }
//     cout<<newxor<<endl;
//     cout<<(tempxor^newxor);      // xor of every number and xor of 1st unique element will give the 2nd unique element
// }
// int main(){
//     int arr[]={1,2,3,1,2,3,5,7};
//     unique(arr,8);
//     return 0;
// }



// #include<iostream>
// using namespace std;
// bool setbit(int n,int pos){
//     return (n&(1<<pos))!=0;
// }
// void unique(int arr[],int n){
//     int xorsum=0;
//     for(int i=0;i<n;i++){
//         xorsum=xorsum^arr[i];
//     }
//     int prebit=xorsum;
//     int bit=0;
//     int pos=0;
//     while(bit!=1){
//         bit=1&xorsum;
//         pos++;
//         xorsum=xorsum>>1;
//     }
//     int newxor=0;
//     for(int i=0;i<n;i++){
//         if(setbit(arr[i],pos-1)){
//             newxor=newxor^arr[i];
//         }
//     }
//     cout<<newxor<<endl;
//     cout<<(newxor^prebit)<<endl;
// }
// int main(){
//     int arr[]={1,2,3,4,1,2,3,8,88,88,99,99,100,100,123425,123425};
//     unique(arr,16);

//     return 0;
// }



// find the unique number in an array where all the other are thrice
// we will make an array of 64 elements considering the 64 bits of integers
// we will chwck the binary representation of the elements
// we will fill our array with the +1 as 1 is encountered in the bit representation of the elements of the initial array
// number occuring thee time will have entries of multiple of three whereas the unique number will not have multiple of three

// as creating an array will occupy memory. so we can check if the %3!=0 we can set the bit to get the unique element

// #include<iostream>
// using namespace std;
// bool getbit(int n,int pos){
//     return (n&(1<<pos))!=0;
// }
// int setbit(int n,int pos){
//     return n|(1<<pos);
// }
// int unique(int arr[],int n){
//     int result=0;
//     for (int i=0;i<64;i++){
//         int sum=0;
//         for(int j=0;j<n;j++){
//             if(getbit(arr[j],i)){
//                 sum++;
//             }
//         }
//         if(sum%3!=0){
//             result=setbit(result,i);
//         }
//     }
//     return result;
// }
// int main(){
//     int arr[]={1,1,1,2,3,2,3,2,3,4};
//     cout<<unique(arr,10);
//     return 0;
// }


// #include<iostream>
// using namespace std;
// bool getbit(int n,int pos){
//     return (n&(1<<pos))!=0;
// }
// int setbit(int n,int pos){
//     return (n|(1<<pos));

// }
// int unique(int arr[],int n){
//     int result=0;
//     for(int i=0;i<64;i++){
//         int sum=0;
//         for(int j=0;j<n;j++){
//             if(getbit(arr[j],i)){
//                 sum++;
//             } 
//         }
//         if(sum%3!=0){
//             result=setbit(result,i);
//         }
//     }
//     return result;
// }
// int main(){
//     int arr[]={1,2,3,4,1,2,3,4,1,2,3,4,5};
//     cout<<unique(arr,13)<<endl;
//     return 0;
// }