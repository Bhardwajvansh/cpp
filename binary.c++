// PRIME OR not

// #include<iostream>
// using namespace std;
 
// int main(){
//     int n;
//     cin>>n;
//     int a;
//     for(int i=2;i<n;i++){
//         a=i;
//         if(n%i==0){
//             cout<<"non prime\n";
//             break;
//         }
//     }
//     if(a==n-1){
//         cout<<"prime\n";
//     }    
//     return 0;
// }


// reversing a number

// #include<iostream>
// using namespace std;
 
// int main(){
//     int n,a;
//     cin>>n;
//     a=0;
//     while(n!=0){
//         a=a*10+n%10;
//         n=n/10;
//     }
//     cout<<a;
//     return 0;
// }

// amstrong or not
// #include<iostream>
// #include<cmath>
// using namespace std;
 
// int main(){
//     float a=0,sum=0;
//     int n;
//     cin>>n;
//     int b=n;
//     while(n!=0){
//         a=n%10;
//         sum=sum+pow(a,3);
//         n=n/10;
//     }
//     cout<<sum<<"\n";
//     if(b==sum){
//         cout<<"amstrong\n";
//     }
//     else{
//         cout<<"not";
//     }
//     return 0;
// }


//fibonacci series ypto n numebrs

// #include<iostream>
// using namespace std;
 
// void fibo(int n){
//     int c,a=0,b=1;
//     cout<<a<<","<<b;
//     for(int i=1;i<=n-2;i++){
//         c=a+b;
//         a=b;
//         b=c;
//         cout<<","<<b;
//     }
// } 
// int main(){
//     int n;
//     cin>>n;
//     fibo(n);
//     return 0;
// }

// factorial 

// #include<iostream>
// using namespace std;
// int factorial(int n){
//     int x=1;
//     for(int i=1;i<=n;i++){
//         x*=i;
//     }
//     return x;
// }
// int main(){
//     int n,r;
//     cout<<"enter the value of n\n";
//     cin>>n;
//     cout<<"enter the value of r\n";
//     cin>>r;
//     int a=factorial(n);
//     int b=factorial(r);
//     int c=factorial(n-r);
//     int d=a/(b*c);
//     cout<<"the nCr is"<<d;
//     return 0;
// }


//                                             pascal triangle

// #include<iostream>
// using namespace std;
// int factorial(int n){
//     if(n==0){
//         return 1;
//     }
//     else{
//         int a=1;
//         for(int i=1;i<=n;i++){
//             a*=i;
//         }
//         return a;
//     }
// }
// int ncr(int n,int r){
//     int a;
//     a=factorial(n)/(factorial(r)*factorial(n-r));
//     return a;
// }
// int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             cout<<ncr(i,j)<<" ";
//         }   
//         cout<<"\n";
//     }
//     return 0;
// }