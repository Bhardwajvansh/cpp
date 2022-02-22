// it is a size of "N+1" because the lastelement is a null character

// #include<iostream>
// using namespace std;
 
// int main(){
//     char arr[100]="apple";
//     int i=0;
//     while(arr[i]!='\0'){
//         cout<<arr[i]<<" ";
//         i++;
//     }   
//     return 0;
// }


// #include<iostream>
// using namespace std;
 
// int main(){
//     char arr[100];
//     cin>>arr;          // this will print without characters without space between them
//     cout<<arr;
//     return 0;
// }



//largest word in a sentence
//generally the compiler stores the value given with spaces into differet variables
//getline() helps us to get a value in term of a sentence


// #include<bits/stdc++.h>
// using namespace std; 
// int main(){
//     int n;
//     cin>>n;
//     cin.ignore();
//     char arr[n+1];
//     cin.getline(arr,n);
//     cin.ignore();
//     int i=0;
//     int currlen=0,maxlen=0;
//     int st=0,maxst=0;
//     while(1){
//         if(arr[i]==' ' || arr[i]=='\0'){
//             if(currlen>maxlen){
//                 maxlen=currlen;
//                 maxst=st;
//             }
//             currlen=0;
//             st=i+1;
//         }
//         else{
//             currlen++;
//         }
//         if(arr[i]=='\0'){
//             break;
//         }
//         i++;
//     }
//     cout<<maxlen<<" ";
//     for(int i=0;i<maxlen;i++){
//         cout<<arr[i+maxst];
//     }
//     return 0;
// }