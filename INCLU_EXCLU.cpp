// number of elements divisible between 1 to n buy 7 and 5


// #include<iostream>
// using namespace std;
 
// int main(){
//     int n;
//     cin>>n;
//     int a=n/5;
//     int b=n/7;
//     int ab=n/(5*7);
//     cout<<b<<endl;
//     cout<<a<<endl;
//     cout<<ab<<endl;
//     cout<<a+b-ab;
//     return 0;
// }


// euclifd algorith to find Greatest Common Devisor
// 42 and 24
//42 - 24 = 18 ( GCD of 42 and 24 will be same as that of 24 and 18)  
//24 - 18 = 6 ( GCD of 24 and 18 will be same as that of 18 and 6)
//18 - 6 = 12 ( GCD of 18 and 6 will be same as that of 6 and 12)
//12 - 6 = 6 ( GCD of 6 and 12 will be same as that of 6 and 6)
// therefore GCD of 24 and 42 is 6

// same can be done by doing 42 % 24 = 18 , 24 % 18 = 6 ..............

 
// #include<iostream>
// using namespace std;
// int GCD(int a,int b){
//     while(b!=0){
//         int rem=a%b;
//         a=b;
//         b=rem;
//     }
//     return a;
// }
// int main(){
//     int a;
//     int b;
//     cin>>a>>b;
//     cout<<GCD(a,b);
//     return 0;
// }