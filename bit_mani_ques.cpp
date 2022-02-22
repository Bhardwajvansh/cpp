// devisor of 2 or not

// #include<iostream>
// using namespace std;
 
// int main(){
//     int n;
//     cin>>n;
//     if(~(n&1)){
//         cout<<"yes";
//     }
//     else
//         cout<<"no";

//     return 0;
// }


// swap two numbers

// #include<iostream>
// using namespace std;
 
// int main(){
//     int a;
//     cin>>a;
//     int b;
//     cin>>b;
//     int temp=a^b;
//     b=b^temp;
//     a=a^temp;
//     cout<<a<<endl;
//     cout<<b<<endl;
//     return 0;
// }


// to find how many bits to be flipped to get the number
// basic idea is to take the XOR of the two numbers and count the number of set bits

// #include<iostream>
// using namespace std;
// bool getbit(int n,int pos){
//     return (n&(1<<pos))!=0;
// }

// int main(){
//     int n;
//     cin>>n;
//     int m;
//     cin>>m;
//     int xo=n^m;
//     int sum=0;
//     while(xo){
//         if(getbit(xo,0)){
//             sum++;
//         }
//         xo=xo>>1;
//     }
//     cout<<sum;

//     return 0;
// }



// to count its set bits

// #include<iostream>
// using namespace std;
// bool getbit(int n,int pos){
//     return (n&(1<<pos))!=0;
// }
// int main(){
//     int n;
//     cin>>n;
//     int sum=0;
//     while(n){
//         if(getbit(n,0)){
//             sum++;
//         }
//         n=n>>1;
//     }
//     cout<<sum<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
 
// int main(){
//     int n;
//     cin>>n;
//     int sum=0;
//     while(n){
//         n=n&(n-1);  
//         sum++;
//     }
//     cout<<sum<<endl;
//     return 0;
// }


// round up to the next power of two;

// #include<iostream>
// using namespace std;
// int next(int n){
//     int a=0;
//     while(n){
//         a=n;
//         n=n&(n-1);
//     }
//     return a<<1;
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<next(n);
//     return 0;
// }


// total number of 1s in binary

// #include<iostream>
// using namespace std;
 
// int main(){
//     int n;
//     cin>>n;
//     int sum=0;
//     while(n){
//         if(n&1){
//             sum++;
//         }
//         n=n>>1;

//     }
//     cout<<sum;
//     return 0;
// }



//  swapping two integers using bit manu

// #include<iostream>
// using namespace std;
 
// int main(){
//     int a=10;
//     int b=11;
//     int temp=a^b;
//     a=a^temp;
//     b=b^temp;
//     cout<<a<<" "<<b;
//     return 0;
// }


// if multiple of 4 using bits

// #include<iostream>
// using namespace std;
 
// int main(){
//     int n;
//     cin>>n;
//     if(~(n&(n-1)) && n%3==1){
//         cout<<"yes";
//     }
//     else
//         cout<<"no";
//     return 0;
// }


// swapping two bits in a binary 

// Swap two bits at a given position in an integer

#include<iostream>
using namespace std;
bool getbit(int n,int pos){
    return (n&(1<<pos))!=0;
}
int main(){
    int n;
    cin>>n;
    int p1;
    cin>>p1;
    int p2;
    cin>>p2;
    bool bit1=getbit(n,p1);
    bool bit2=getbit(n,p2);
    if(bit1==bit2){
        cout<<"already same";
    }
    else{
        if(bit1==true && bit2==false){
            // updatebit(n,p1,0);
            // updatebit(n,p2,1);
        }
        else if(bit2==true && bit1==false){
            // updatebit(n,p1,1);
            // updatebit(n,p2,0);
        }
    }
    cout<<n;
    return 0;
}