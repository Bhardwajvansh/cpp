// pattern question
// * * * *
// * * * *
// * * * *
// * * * *
// #include<iostream>
// using namespace std;
 
// int main(){
//     int l,b;
//     cout<<"enter l";
//     cin>>l;
//     cout<<"enter b";
//     cin>>b;
//     for(int i=0;i<b;i++){
//         cout<<"* ";
//         for(int j=0;j<l-1;j++){
//         cout<<"* ";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }   

// alternate-

// #include<iostream>
// using namespace std;

// int main(){
//     int l,b;
//     cout<<"enter l";
//     cin>>l;
//     cout<<"enter b";
//     cin>>b;
//     for(int i=0;i<b;i++){
//         for(int j=0;j<l;j++){
//         cout<<"* ";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }  


// * * * * *
// *       *
// * * * * *

// #include<iostream>
// using namespace std;
 
// int main(){
//     int l,b;
//     cout<<"enter l";
//     cin>>l;
//     cout<<"enter b";
//     cin>>b;
//     for(int i=1;i<=l;i++){
//         if(i==1 || i==l){
//             for(int j=1;j<=b;j++){
//                 cout<<"* ";
//             }
//             cout<<"\n";
//         }
//         else{
//             for(int j=1;j<=b;j++){
//                 if(j==1){
//                     cout<<"*";
//                 }
//                 else if(j==b){
//                     cout<<"*\n";
//                 }
//                 else{
//                     cout<<" ";
//                 }
//             }
//         }

//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
 
// int main(){
//     int l,b;
//     cout<<"enter l";
//     cin>>l;
//     cout<<"enter b";
//     cin>>b;
//     for(int i=1;i<=b;i++){
//         for(int j=1;j<=l;j++){
//             if(i==1||i==b||j==1||j==l){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//     cout<<"\n";

//     }
//     return 0;
// }


// *****
// ****
// ***
// **
// *

// #include<iostream>
// using namespace std;
 
// int main(){
//     int n;
//     cout<<"enter the value of n";
//     cin>>n;
//     while(n!=0){
//         for(int i=1;i<=n;i++){
//             cout<<"* ";
//         }
//         cout<<"\n";
//         n--;
//     }
//     return 0;
// }


//         *
//       * *
//     * * *
//   * * * *
// * * * * *

// pattern question
// * * * *
// * * * *
// * * * *
// * * * *
// #include<iostream>
// using namespace std;
 
// int main(){
//     int l,b;
//     cout<<"enter l";
//     cin>>l;
//     cout<<"enter b";
//     cin>>b;
//     for(int i=0;i<b;i++){
//         cout<<"* ";
//         for(int j=0;j<l-1;j++){
//         cout<<"* ";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }   

// alternate-

// #include<iostream>
// using namespace std;

// int main(){
//     int l,b;
//     cout<<"enter l";
//     cin>>l;
//     cout<<"enter b";
//     cin>>b;
//     for(int i=0;i<b;i++){
//         for(int j=0;j<l;j++){
//         cout<<"* ";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }  


// * * * * *
// *       *
// * * * * *

// #include<iostream>
// using namespace std;
 
// int main(){
//     int l,b;
//     cout<<"enter l";
//     cin>>l;
//     cout<<"enter b";
//     cin>>b;
//     for(int i=1;i<=l;i++){
//         if(i==1 || i==l){
//             for(int j=1;j<=b;j++){
//                 cout<<"* ";
//             }
//             cout<<"\n";
//         }
//         else{
//             for(int j=1;j<=b;j++){
//                 if(j==1){
//                     cout<<"*";
//                 }
//                 else if(j==b){
//                     cout<<"*\n";
//                 }
//                 else{
//                     cout<<" ";
//                 }
//             }
//         }

//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
 
// int main(){
//     int l,b;
//     cout<<"enter l";
//     cin>>l;
//     cout<<"enter b";
//     cin>>b;
//     for(int i=1;i<=b;i++){
//         for(int j=1;j<=l;j++){
//             if(i==1||i==b||j==1||j==l){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//     cout<<"\n";

//     }
//     return 0;
// }


//         *
//       * *
//     * * *
//   * * * *
// * * * * *
 
// #include<iostream>
// using namespace std;
 
// int main(){
//     int n;
//     cout<<"enter the value of n";
//     cin>>n;
//     for(int j=1;j<=n;j++){
//         int a=n-j;
//         int b=0;
//         while(a!=0){
//             cout<<" ";
//             a--;
//         }     
//         while(b!=j){
//             cout<<"*";
//             b++;
//         }    
//         cout<<"\n";
//     }
//     return 0;
// }


// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5

// #include<iostream>
// using namespace std;
 
// int main(){
//     int n;
//     cout<<"enter n";
//     cin>>n;
//     for(int j=1;j<=n;j++){
//         int a=0;
//         while(a!=j){
//             cout<<j<<" ";
//             a++;
//         }
//     cout<<"\n";
//     }
//     return 0;
// }



// 1
// 2 3
// 4 5 6
// 7 8 9 10

// #include<iostream>
// using namespace std;
 
// int main(){
//     int n;
//     cin>>n;
//     int count=1;
//     for(int i=0;i<=n;i++){
//         for(int j=0;j<=i;j++){
//             cout<<count<<" ";
//             count++;
//         }
//     cout<<"\n";
//     }
//     return 0;
// }

// *      *
// **    **
// ***  ***
// ********
// ********
// ***  ***
// **    **
// *      *

// #include<iostream>
// using namespace std;
 
// int main(){
//     int n;
//     cin>>n;
//     int m=n*2;
//     for(int i=1;i<=n;i++){
//         int a=0;
//         while(a<i){
//             cout<<"*";
//             a++;
//         }
//         while(i<=a && a<m-i){
//             cout<<" ";
//             a++;
//         }
//         while(a<m){
//             cout<<"*";
//             a++;
//         }
//         cout<<"\n";
//     }  
//     for(int i=n;i;i--){
//         int a=0;
//         while(a<i){
//             cout<<"*";
//             a++;
//         }
//         while(i<=a && a<m-i){
//             cout<<" ";
//             a++;
//         }
//         while(a<m){
//             cout<<"*";
//             a++;
//         }
//         cout<<"\n";
//     }  
//     return 0;
// }


// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2 
// 1

// #include<iostream>
// using namespace std;
 
// int main(){
//     int n;
//     cin>>n;
//     for(int i=n;i;i--){
//         for(int j=1;j<=i;j++){
//             cout<<j<<" ";
//         }
//     cout<<"\n";
//     }
//     return 0;
// }


// 1
// 0 1
// 1 0 1 
// 0 1 0 1
// 1 0 1 0 1

// #include<iostream>
// using namespace std;
 
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         if(i%2!=0){
//             for(int j=0;j<=i;j++){
//             cout<<"1 ";
//             cout<<"0 ";
//             }
//             cout<<"\n";
//         }
//         if(i%2==0){
//             for(int j=0;j<=i;j++){
//             cout<<"0 ";
//             cout<<"1 ";
//             }
//             cout<<"\n";
//         }
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
 
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             if((j+i)%2==0){
//                 cout<<"1 ";
//             }
//             else{
//                 cout<<"0 ";
//             }   
//         }
//     cout<<"\n";
//     }
//     return 0;
// }


//     * * * * *
//    * * * * *
//   * * * * *
//  * * * * *
// * * * * *


// #include<iostream>
// using namespace std;
 
// int main(){
//     int n;
//     cin>>n;
//     for(int i=n;i;i--){
//         for(int j=i;j;j--){
//             cout<<" ";
//         }
//             for(int k=1;k<=n;k++){
//                 cout<<"* ";
//             }
//         cout<<"\n";
//     }
//     return 0;
// }


//     1
//    1 2
//   1 2 3
//  1 2 3 4
// 1 2 3 4 5

// #include<iostream>
// using namespace std;
 
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int k=1;k<=n-i;k++){
//             cout<<" ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<j<<" ";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
 
// int main(){
//     int n;
//     cin>>n;
//     for (int i=1;i<=n;i++){    
//         for (int j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         for(int k=i;k;k--){
//             cout<<k;
//         }
//         for(int l=2;l<=i;l++){
//             cout<<l;
//         }
//     cout<<"\n";
//     }
//     return 0;
// }



// #include<iostream>
// using namespace std;
 
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         for(int k=i;k;k--){
//             cout<<"*";
//         }
//         for(int l=2;l<=i;l++){
//             cout<<"*";
//         }
//         cout<<"\n";
//     }
//     for(int i=n;i;i--){
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         for(int k=i;k;k--){
//             cout<<"*";
//         }
//         for(int l=2;l<=i;l++){
//             cout<<"*";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }

//   *   *
//  * * * *
// *   *   *

// #include<iostream>
// using namespace std;
 
// int main(){
//     int n;
//     cin>>n;
//     int b=1;
//     int a=3;
//     int c=2;
//     for(int i=1;i<=3;i++){
//         for(int j=1;j<=n;j++){
//             if(i==1 && j==a){
//                 cout<<"*";
//                 a+=4;
//             }
//             else{
//                 cout<<" ";
//             }
//             if(i==2 && j==c){
//                 cout<<"*";
//                 c+=2;
//             }
//             else{
//                 cout<<" ";
//             }
//             if(i==3 && j==b){
//                 cout<<"*";
//                 b+=4;
//             }
//             else{
//                 cout<<" ";
//             }
//         }       
//     cout<<"\n";
//     }
//     return 0;
// }