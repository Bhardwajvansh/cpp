// when a fucntion calls itself to make the problem smaller

// sum of all integers till n
// sum till n = n + sum till (n-1)
// sum till n-1 = (n-1) + sum till (n-2)
// .................... till the breaking condition is achived


// #include<iostream>
// using namespace std;
// int sum(int n){
//     if(n==0){
//         return 0; 
//     }
//     return n+sum(n-1);
// }
// int main(){
//     int n=5;
//     cout<<sum(10);
//     return 0;
// }


// to find the power of that number 


// #include<iostream>
// using namespace std;
// int power(int n,int p){
//     if(p==0){
//         return 1;
//     }
//     return n*power(n,p-1);
// }
// int main(){
//     cout<<power(2,4);
//     return 0;
// }


// factorial till n 

// #include<iostream>
// using namespace std;
// int factorial(int n){
//     if(n==0){
//         return 1;
//     }
//     return n*factorial(n-1);
// }
// int main(){
//     cout<<factorial(5);
//     return 0;
// }


//  to print nth fibonacci number

// #include<iostream>
// using namespace std;
// int fibo(int n){
//     if(n==1){
//         return 0;
//     }
//     if(n==2){
//         return 1;
//     }
//     return fibo(n-1)+fibo(n-2);
// }
// int main(){
//     cout<<fibo(8);
//     return 0;
// }


// check if the array is sorted or not

// #include<iostream>
// using namespace std;
// bool ifsorted(int arr[],int n){
//     if(n==1){
//         return true;
//     }
//     bool restarr=ifsorted(arr+1,n-1);
//     return (arr[0]<arr[1] && restarr);
// }
// int main(){
//     int arr[]={1,3,2,4};
//     cout<<ifsorted(arr,4);
//     return 0;
// }


// print numbers till n 
// 1. in decreasing order 
// 2. in increasing order 


// #include<iostream>
// using namespace std;
// void dec(int n){
//     if(n==0){
//         return;
//     }
//     cout<<n<<endl; 
//     dec(n-1);
// }
// int main(){
//     dec(20);
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int x=1;
// void inc(int n){
//     if(x==n+1){
//         return;
//     }
//     cout<<x<<endl; 
//     x++;
//     inc(n);
// }
// int main(){
//     inc(20);
//     return 0;
// }


// #include<iostream>
// using namespace std;
// void dec(int n){
//     if(n==1){
//         cout<<1<<endl;
//         return;
//     }
//     dec(n-1);
//     cout<<n<<endl; 
// }
// int main(){
//     dec(20);
//     return 0;
// }


// occurance of an element in an array
// 1.first occurance
// 2.last occurance

// #include<iostream>
// using namespace std;
// int first(int arr[],int len,int n, int i){
//     if(i==len){
//         return -1;
//     }
//     if(arr[0]==n){
//         return i; 
//     }
//     return first(arr+1,len,n,i+1);
// }
// int main(){
//     int arr[]={4,3,1,2,5,2,7};
//     cout<<first(arr,7,2,0);
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int first(int arr[],int len,int n, int i){
//     if(i==len){
//         return -1;
//     }
//     if(arr[len-i]==n){
//         return len-i; 
//     }
//     return first(arr,len,n,i+1);
// }
// int main(){
//     int arr[]={4,3,1,2,5,2,7};
//     cout<<first(arr,7,2,0);
//     return 0;
// }

// recursion in string


// #include<iostream>
// #include<string>
// using namespace std;
// void rev(string n){
//     if(n==""){
//         return;
//     }
//     string r=n.substr(1);
//     rev(r);
//     cout<<n[0];
// }
// int main(){
//     string s="vansh";
//     rev(s);
//     return 0;
// }


// replace "pi" with "3.14" in a string using a recursion

// #include<iostream>
// #include<string>
// using namespace std;
// void replace(string s){
//     if(s.find("pi")==(-1)){
//         return;
//     }
//     int n=s.find("pi");
//     s.erase(n,2);
//     s.insert(n,"3.14");
//     replace(s);
//     cout<<s<<endl;
// }
// int main(){
//     string s="pinsfkjfipisdknpiipipipiiip";
//     replace(s);
//     return 0;
// }



// #include<iostream>
// #include<string>
// using namespace std;
// void replace(string s){
//     if(s==""){
//         return;
//     }
//     if(s[0]=='p' && s[1]=='i'){
//         cout<<"3.14";
//         replace(s.substr(2));
//     }
//     else{
//         cout<<s[0];
//         replace(s.substr(1));
//     }
// }
// int main(){
//     string s="pinsfkjfipisdknpiipipipiiip";
//     replace(s);
//     return 0;
// }


//                                                                  tower of hanoi

// #include<iostream>
// using namespace std;
// void tower(int n,char start,char desti,char help){
//     if(n==0){
//         return;
//     }
//     tower(n-1,start,help,desti);
//     cout<<"move from "<<start<<" to "<<desti<<endl;
//     tower(n-1,help,desti,start);
// }
// int main(){
//     int n=1;
//     tower(n,'A','C','B');
//     return 0;
// }


// to remove all the duplicates from the string

// #include<iostream>
// #include<string>
// using namespace std;
// string duplicate(string n){
//     if(n.size()==0){
//         return "";
//     }
//     char a=n[0];
//     string ans=duplicate(n.substr(1));
//     if(a==ans[0]){
//         return ans;
//     }
//     else{
//         return a+ans;
//     }
// }
// int main(){  
//     string n="vvaaajjjkkkss";
//     cout<<duplicate(n);
//     return 0;
// }


// #include<iostream>
// #include<string>
// using namespace std;
// string remove(string n){
//     if(n.size()==0){
//         return "";
//     }
//     char x=n[0];
//     string ans=remove(n.substr(1));
//     if(x==ans[0]){
//         return ans;
//     }
//     else{
//         return x+ans;
//     }
// }
// int main(){
//     string n="vvaaahaaaah";
//     cout<<remove(n);
//     return 0;
// }


// move all " x " to the end of the string


// #include<iostream>
// #include<string>
// using namespace std;
// string place(string n){
//     if(n.size()==0){
//         return "";
//     }
//     char x=n[0];
//     string ans=place(n.substr(1));
//     if(x=='x'){
//         return ans+x;
//     }
//     else{
//         return x+ans;
//     }
// }
// int main(){
//     string s="vanxshxxxh";
//     cout<<place(s);
//     return 0;
// }


// generate all possible sunstrings

// #include<iostream>
// #include<string>
// using namespace std;
// void sub(string n,string ans){
//     if(n.size()==0){
//         cout<<ans<<endl;
//         return;
//     }
//     char z=n[0];
//     string ros=n.substr(1);
//     sub(ros,ans);
//     sub(ros,ans+z);

// }
// int main(){
    // string n="ABC";
    // sub(n,"");
//     return 0;
// }


// #include<iostream>
// #include<string>
// using namespace std;
// void sub(string s,string ans){
//     if(s.length()==0){
//         cout<<ans<<endl;
//         return;
//     }
//     char ch=s[0];
//     string ros=s.substr(1);
//     sub(ros,ans);
//     sub(ros,ans+ch);
// }
// int main(){
//     string n="ABC";
//     sub(n,"");
//     return 0;
// }


// to print the substr and their ASCII values 


// #include<iostream>
// using namespace std;
// void subascii(string s,string ans){
//     if(s.size()==0){
//         cout<<ans<<endl;
//         return;
//     }
//     char ch=s[0];
//     int c=ch;
//     string ros=s.substr(1);
//     subascii(ros,ans);
//     subascii(ros,ans+ch);
//     subascii(ros,ans+to_string(c));
// }
// int main(){
//     string n="AB";
//     subascii(n,"");
//     return 0;
// }


// #include<iostream>
// #include<string>
// using namespace std;
// void sub(string s,string ans){
//     if(s.size ()==0){
//         cout<<ans<<endl;
//         return;
//     }
//     char c=s[0];
//     int code=c;
//     string ros=s.substr(1);

//     sub(ros,ans);
//     sub(ros,ans+c);
//     sub(ros,ans+to_string(code));
// }
// int main(){
//     string n="AB";
//     sub(n,"");
    
//     return 0;
// }


// making all possible combinations of the kepad of the old generation kepad phone



// #include<iostream>
// #include<string>
// using namespace std;
// string keypadarr[]={"abc","efg","hij","klm","nop","qrs","uvw","xyz"};
// void keypad(string s,string ans){
//     if(s.size()==0){
//         cout<<ans<<endl;
//         return;
//     }
//     char n=s[0];
//     string code=keypadarr[n-'0'];
//     string ros=s.substr(1);
//     for(int i=0;i<code.size();i++){
//         keypad(ros,ans+code[i]);
//     }
// }
// int main(){
//     string s="23";
//     keypad(s,"");    
//     return 0;
// }


// #include<iostream>
// #include<string>
// using namespace std;
// string keypadarr[]={"abc","efg","hij","klm","nop","qrs","uvw","xyz"};
// void keypad(string s,string ans){
//     if(s.size()==0){
//         cout<<ans<<endl;
//         return;
//     }
//     char c=s[0];
//     string code=keypadarr[c-'0'];
//     string ros=s.substr(1);
//     for(int i=0;i<code.size();i++){
//         keypad(ros,ans+code[i]);
//     }
// }
// int main(){    
//     string s="23";
//     keypad(s,"");    
//     return 0;
// }


// #include<iostream>
// #include<string>
// using namespace std;
// string arr[]={"AB","E"};
// void matches(string s,string ans){
//     if(s.size()==0){
//         cout<<ans<<endl;
//         return;
//     }
//     char c=s[0];
//     string ele=arr[c-'0'];
//     string rest=s.substr(1);
//     for(int i=0;i<ele.size();i++){
//         matches(rest,ans+ele[i]);
//     }
// }
// int main(){
//     string n="01";
//     matches(n,"");
//     return 0;
// }



// print all the possible permutations of the string


// #include<iostream>
// #include<string>
// using namespace std;
// void permutation(string s,string ans){
//     if(s.size()==0){
//         cout<<ans<<endl;
//         return;
//     }
//     for(int i=0;i<s.size();i++){
//         char ch=s[i];
//         string ros=s.substr(0,i)+s.substr(i+1);
//         permutation(ros,ans+ch);
//     }
// }
// int main(){
//     string s;
//     s="AB";
//     permutation(s,"");
//     return 0;
// }


// board game problem


// #include<iostream>
// using namespace std;
// int path(int s,int e){
//     if(s==e){
//         return 1;
//     }
//     if(s>e){
//         return 0;
//     }
//     int count=0;
//     for(int i=1;i<=6;i++){
//         count+=path(s+i,e);
//     }
//     return count;
// }
// int main(){
//     cout<<path(1,4);
//     return 0;
// }


// count the number of paths possible in a maze of NxN maze by only moving in right or down


// #include<iostream>
// using namespace std;
// int path(int n,int i,int j){
//     if(i==n-1 && j==n-1){
//         return 1;
//     }
//     if(i>=n || j>=n){
//         return 0;
//     }
//     return path(n,i+1,j)+path(n,i,j+1);
// }
// int main(){
//     cout<<path(3,0,0);
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int path(int n,int i,int j){
//     if(i==n-1&&j==n-1){
//         return 1;
//     }
//     if(i>n||j>n){
//         return 0;
//     }
//     return path(n,i+1,j)+path(n,i,j+1);
// }
// int main(){
//     cout<<path(2,0,0);
//     return 0;
// }



// tiling problem  board of 2*n to be filled by tile of 2*1

// #include<iostream>
// using namespace std;
// int tile(int n){
//     if(n==0){
//         return 0;
//     }
//     if(n==1){
//         return 1;
//     }
//     return tile(n-1)+tile(n-2);
// }
// int main(){
//     cout<<tile(4)<<endl;
//     return 0;
// }


// number of ways friends can be paired up or remain single

// #include<iostream>
// using namespace std;
// int par(int n){
//     if(n==0){
//         return 0;
//     }
//     if(n==1||n==2){
//         return n;
//     }
//     return par(n-1)+par(n-2)*(n-1); 
// }
// int main(){
//     cout<<par(4);
//     return 0;
// }


// knapsacking problem

#include<iostream>
using namespace std;
int knapsack(int value[],int wt[],int n,int W){
    if(n==0||W==0){
        return 0;
    }
    if(wt[n-1]>W){
        return knapsack(value,wt,n-1,W);
    }
    max(knapsack(value,wt,n-1,W-wt[n-1])+value[n-1],knapsack(value,wt,n-1,W));
}
int main(){
    int wt[]={10,20,30};
    int value[]={100,50,150};
    int W=50;
    cout<<knapsack(value,wt,3,W);
    return 0;
}






















// binary to decimal

// #include<iostream>
// using namespace std;
// int binary(int n){
//     int a=1;
//     int ans=0;
//     while(n!=0){
//         int dig=n%10;
//         if(dig==1){
//             ans=ans+a;
//         }
//         a*=2;
//         n=n/10;
//     }
//     return ans;
// }
// int main(){
//     int n=111;
//     cout<<binary(n);
//     return 0;
// }

// octal to decimal

// #include<iostream>
// using namespace std;
// int octal(int n){
//     int a=1;
//     int ans=0;
//     while(n!=0){
//         int dig=n%10;
//         ans+=dig*a;
//         a*=8;
//         n=n/10;
//     }
//     return ans;
// }
// int main(){
//     int n=144;
//     cout<<octal(n);
//     return 0;
// }


//  hexadecimal to decimal

// #include<iostream>
// #include<string>
// using namespace std;
// int hexa(string n){
//     int ans=0;
//     int x=1;
//     int s=n.size();
//     for(int i=s-1;i>=0;i--){
//         if(n[i]>='0' && n[i]<='9'){
//             ans+=x*(n[i]-'0');
//         }
//         else if(n[i]>='A' && n[i]<='F'){
//             ans+=x*(n[i]-'A'+10);
//         }
//         x*=16;
//     }
//     return ans;
// }
// int main(){
//     string s;
//     cin>>s;
//     cout<<hexa(s);
//     return 0;
// }


// #include<iostream>
// #include<string>
// using namespace std;
// int hexa(string n){
//     int ans=0;
//     int x=1;
//     for(int i=(n.size()-1);i>=0;i--){
//         if(n[i]>='0'&&n[i]<='9'){
//             ans+=x*(n[i]-'0');
//         }
//         else if(n[i]>='A' && n[i]<='Z'){
//             ans+=x*(n[i]-'A'+10);

//         }
//         x*=16;
//     }
//     return ans;
// }
// int main(){
//     string n="1CF";
//     cout<<hexa(n);
//     return 0;
// }


// decimal to binary

// #include<iostream>
// using namespace std;
// long int decimal(int n){
//     int a=1;
//     long int ans=0;
//     while(a<=n){
//         a*=2;
//     }
//     a=a/2;
//     while(a>0){
//         int last=n/a;
//         n-=last*a;
//         a/=2;
//         ans=ans*10+last;
//     }
//     return ans;


// }
// int main(){
//     int n=104;
//     cout<<decimal(n);
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int decimal(int n){
//     int ans=0;
//     int x=1;
//     while(x<=n){
//         x*=2;
//     }
//     x=x/2;
//     while(x!=0){
//         int last=n/x;
//         n=n-last*x;
//         x/=2;
//         ans=ans*10+last;
//     }
//     return ans;
// }
// int main(){
//     int n=1023;
//     cout<<decimal(n);
//     return 0;
// }


// decimal to octal

// #include<iostream>
// using namespace std;
// int decimal(int n){
//     int ans=0;
//     int m=1;
//     while(m<n){
//         m*=8;
//     }
//     m=m/8;
//     while(m!=0){
//         int last=n/m;
//         n=n-last*m;
//         m=m/8;
//         ans=ans*10+last;
//     }
//     return ans;
// }
// int main(){
//     int n=100;
//     cout<<decimal(n);
//     return 0;
// }


// decimal to hexadecimal


// #include<iostream>
// #include<string>
// using namespace std;
// string decimal(int n){
//     string ans="";
//     int x=1;
//     while(x<n){
//         x*=16;
//     }
//     x=x/16;
//     while(x!=0){
//         int dig=n/x;
//         n=n-dig*x;
//         x=x/16;
//         if(dig<=9){
//             ans=ans+to_string(dig);
//         }
//         else{
//             char c='A'+dig-10;
//             ans.push_back(c);
//         }
//     }
//     return ans;
// }
// int main(){
//     int n=100;
//     cout<<decimal(n);
//     return 0;
// }