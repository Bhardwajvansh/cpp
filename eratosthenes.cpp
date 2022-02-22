// sieve of eratosthenes is used to print prime numbers in a range

// we will mark the multiples of every prime numbers

// the unmarked numbers left in the range will be our prime numbers


// to print prime numbers from 2 to n


// #include<iostream>
// using namespace std;
// void prime(int n){
//     int prime[n+1]={0};
//     for(int i=2;i<n;i++){
//         if(prime[i]==0){
//             for(int j=i*i;j<=n;j+=i){
//                 prime[j]=1;
//             }
//         }
//     }
//     for(int i=2;i<n;i++){
//         if(prime[i]==0){
//             cout<<i<<" \n";
//         }
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     prime(n);
//     return 0;
// }


// prime factorisation using sieve
// devide the products with smallest prime factors untill we get 1 in product

// #include<iostream>
// using namespace std;
 
// void primefactor(int n){
//     int spf[n+1]={0};
//     for(int i=2;i<=n;i++){
//         spf[i]=i;
//     }
//     for(int i=2;i<=n;i++){
//         if(spf[i]==i){
//             for(int j=i*i;j<=n;j+=i){
//                 if(spf[j]==j){
//                     spf[j]=i;
//                 }
//             }
//         }
//     }
//     while(n!=1){
//         cout<<spf[n]<<" ";
//         n=n/spf[n];
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     primefactor(n);
//     return 0;
// }