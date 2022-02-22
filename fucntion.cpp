// sum of numbers

// #include<iostream>
// using namespace std;
// int sum(int n){
//     int sum=0;
//     for(int i=1;i<=n;i++){
//         sum=sum+i;
//     }
//     return sum;
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<sum(n);
//     return 0;
// }


//pythagorian triplet

// #include<iostream>
// #include<cmath>
// using namespace std;
// void triplet(int h,int a, int b){
//     if(pow(h,2)==pow(a,2)+pow(b,2)){
//         cout<<"triplet";
//     }
//     else{
//         cout<<"not a triplet";
//     }
// }
// int main(){
//     int h,a,b;
//     //cout<<"enter h,a,b";
//     cin>>h>>a>>b;
//     triplet(h,a,b);
//     return 0;
// }



//decimal to binary
// #include<iostream>
// #include<cmath>
// using namespace std;
// int btod(int n){
//     int c=0,a=0,b=1;
//     while(n>0){
//         a=n%10;
//         c=c+a*b;
//         n=n/10;
//         b=b*2;
//     }
//     return c;
// }
// int main(){
//     int n,a;
//     cin>>n;
//     cout<<btod(n);
//     return 0;
// }

// octal to decimal

// #include<iostream>
// using namespace std;
// void otod(int n){
//     int a=0,b=1;
//     while(n>0){
//         int c=n%10;
//         a=a+c*b;
//         n=n/10;
//         b*=8;
//     }
//     cout<<a;
// }
// int main(){
//     int n;
//     cin>>n;
//     otod(n);   
//     return 0;
// }


// decimal to binary

// #include<iostream>
// using namespace std;
// void dtob(int n){
//     int a=0,b=1,x=0;
//     while(b<=n){
//         b*=2;
//     }
//     b=b/2;
//     while(b>0){
//         int last=n/b;
//         n=n-last*b;
//         b=b/2;
//         x=x*10+last;
//     }
//     cout<<x;
// }
// int main(){
//     int n;
//     cin>>n;
//     dtob(n);
//     return 0;
// }


//decimal to octal

// #include<iostream>
// using namespace std;
// void dtob(int n){
//     int a=0,b=1,x=0;
//     while(b<=n){
//         b*=8;
//     }
//     b=b/8;
//     while(b>0){
//         int last=n/b;
//         n=n-last*b;
//         b=b/8;
//         x=x*10+last;
//     }
//     cout<<x;
// }
// int main(){
//     int n;
//     cin>>n;
//     dtob(n);
//     return 0;
// }



// decimal to hexadecimal

// learn after array


// adding two binary numbers

// #include<iostream>
// using namespace std;
// int rev10(int n){
//     int a=0;
//     while(n>0){
//         a=a*10+n%10;
//         n=n/10;
//     }
//     return a*10;
// }
// int rev(int n){
//     int a=0;
//     while(n>0){
//         a=a*10+n%10;
//         n=n/10;
//     }
//     return a;
// }
// int badd(int i,int j){
//     int a=0,b=0,sum=0;
//     int carry=0;
//     int x=i;
//     int z=j;
//     while(i>0 || j>0){
//         a=i%10;
//         b=j%10;
//         i=i/10;
//         j=j/10;
//         if(a==0 && b==0){
//             if(carry==0){
//                 sum=sum*10+0;
//             }
//             else{
//                 sum=sum*10+1;
//             }
//             carry=0;
//         }
//         else if((a==1 && b==0) || (b==1 && a==0)){
//             if(carry==0){
//                 sum=sum*10+1;
//             }
//             else{
//                 sum=sum*10+0;
//                 carry=1;
//             }
//         }
//         else{
//             if(carry==0){
//                 sum=sum*10+0;
//                 carry=1;
//             }
//             else{
//                 sum=sum*10+1;
//                 carry=1;
//             }
//         }

//     }
//     if(carry==1){
//         sum=sum*10+1;
//     }
//     if(x%2==0 && z%2==0){
//     return rev10(sum);
//     }
//     else{
//     return rev(sum);
//     }
// }
// int main(){
//     int i,j;
//     cin>>i>>j;
//     cout<<badd(i,j);
//     //cout<<rev(1234);
//     return 0;
// }



