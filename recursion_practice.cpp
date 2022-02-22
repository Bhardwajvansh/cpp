// check if array sorted or not

// #include<iostream>
// using namespace std;
// bool sorted(int arr[],int n){
//     if(n==1){
//         return 1;
//     }
//     if(arr[0]<=arr[1]){
//         sorted(arr+1,n-1);
//     }
//     else{
//         return 0;
//     }
// }
// int main(){
//     int arr[]={1,2,3,4,111002020,909090909,99999999,0};
//     cout<<sorted(arr,8);
//     return 0;
// }


// printing numbers till n (decreasing)

// #include<iostream>
// using namespace std;
// void print(int n){
//     if(n==0){
//         cout<<n<<" ";
//         return;
//     }
//     int a=n;
//     cout<<n<<" ";
//     print(--a);
// }
// int main(){
//     print(10);
//     return 0;
// }

// decreasing


// #include<iostream>
// using namespace std;
// void print(int n){
//     if(n==0){
//         cout<<n<<" ";
//         return;
//     }
//     int a=n;
//     print(--a);
//     cout<<n<<" ";
// }
// int main(){
//     print(10);
//     return 0;
// }

// to find the first occurance of a number in an array

// #include<iostream>
// using namespace std;
// void occur(int arr[],int n,int index,int cha){
//     if(n==0){
//         cout<<"no occurance";
//         return;
//     }
//     if(arr[0]==cha){
//         cout<<index;
//         return;
//     }
//     occur(arr+1,n-1,index+1,cha);
// }
// int main(){
//     int arr[]={2,3,3,4,2,2};
//     occur(arr,6,0,5);
//     return 0;
// }


// last occurance

// #include<iostream>
// using namespace std;
// int occur(int arr[],int n,int index,int cha){
//     if(index==n){
//         return -1;
//     }
//     int result=occur(arr,n,index+1,cha);
//     if(result!=-1){
//         return result;
//     }
//     if(arr[index]==cha){
//         return index;
//     }
//     return -1;
// }
// int main(){
//     int arr[]={2,3,3,4,2,2};
//     cout<<occur(arr,6,0,3);
//     return 0;
// }


// reverse a string


// #include<iostream>
// #include<string>
// using namespace std;
// void reverse(string n){
//     if(n.size()==0){
//         return;
//     }
//     reverse(n.substr(1));
//     cout<<n[0];
// }
// int main(){
//     string s="vansh";
//     reverse(s);
//     return 0;
// }


// change pi to 3.14

// #include<iostream>
// #include<string>
// using namespace std;
// void pi(string s){
//     if(s.size()==0){
//         return;
//     }
//     if(s[0]=='p' && s[1]=='i'){
//         cout<<3.14;
//         pi(s.substr(2));
//     }
//     else{
//         cout<<s[0];
//         pi(s.substr(1));
//     }
// }
// int main(){
//     string s="piiiipipipiiiip";
//     pi(s);
//     return 0;
// }

// tower of hanoi

// #include<iostream>
// using namespace std;
// void tower(char start,char destination,char helper,int n){
//     if(n==0){
//         return;
//     }
//     tower(start,helper,destination,n-1);
//     cout<<"put one form "<<start<<" to "<<helper<<endl;
//     tower(helper,destination,start,n-1);
// }
// int main(){
//     tower('A','C','B',3);
//     return 0;
// }


// to remove deuplicated from a string

// #include<iostream>
// #include<string>
// using namespace std;
// void duplicate(string s){
//     if(s.size()==0){
//         return;
//     }
//     if(s[0]==s[1]){
//         s.erase(1,1);
//         duplicate(s);
//     }
//     else{
//         cout<<s[0];
//         duplicate(s.substr(1));
//     }
// }
// int main(){
//     string s="vvansssh";
//     duplicate(s);
//     return 0;
// }



// #include<iostream>
// #include<string>
// using namespace std;
// string duplicate(string s){
//     if(s.size()==0){
//         return "";
//     }
//     char c=s[0];
//     string ans=duplicate(s.substr(1));
//     if(c==ans[0]){
//         return ans;
//     }
//     else{
//         return c+ans;
//     }
// }
// int main(){
//     string s="vvvaaashh";
//     cout<<duplicate(s);
//     return 0;
// }


// moave all x


// #include<iostream>
// #include<string>
// using namespace std;
// string movex(string s){
//     if(s.size()==0){
//         return "";
//     }
//     char c=s[0];
//     string ans=movex(s.substr(1));
//     if(c=='x'){
//         return ans+'x';
//     }
//     else{
//         return c+ans;
//     }
// }
// int main(){
//     string a="vaxxnsxhx";
//     cout<<movex(a);

//     return 0;
// }


// generate all substr

// #include<iostream>
// #include<string>
// using namespace std;
// void subs(string s,string ans){
//     if(s.size()==0){
//         cout<<ans<<endl;
//         return;
//     }
//     char c=s[0];
//     string ros=s.substr(1);
//     subs(ros,ans);
//     subs(ros,ans+c);
// }
// int main(){
//     string s="VANSH";
//     subs(s,"");
//     return 0;
// }

// generate substr with ascii values

// #include<iostream>
// #include<string>
// using namespace std;
// void subs(string s,string ans){
//     if(s.size()==0){
//         cout<<ans<<endl;
//         return;
//     }
//     char c=s[0];
//     int code=c;
//     string ros=s.substr(1);
//     subs(ros,ans);
//     subs(ros,ans+c);
//     subs(ros,ans+to_string(code));
// }
// int main(){
//     string s="AB";
//     subs(s,"");
//     return 0;
// }


// keypad problem

// #include<iostream>
// using namespace std;
// string keypadarr[]={"abc","def","ijk","lmn","opq","rst","uvw","xyz"};
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
//     keypad("23","");
//     return 0;
// }


// print all the permutations of a string


// #include<iostream>
// #include<string>
// using namespace std;
// void permutations(string s,string ans){
//     if(s.size()==0){
//         cout<<ans<<endl;
//         return;
//     }
//     for(int i=0;i<s.size();i++){
//         char c=s[i];
//         string ros=s.substr(0,i)+s.substr(i+1);
//         permutations(ros,ans+c);
//     }    
// }

// int main(){
//     permutations("ABC","");
//     return 0;
// }


// number of ways from start to end in a 1D board game


// #include<iostream>
// using namespace std;
// int count(int start,int end){
//     if(start==end){
//         return 1;
//     }
//     if(start>end){
//         return 0;
//     }
//     int coun=0;
//     for(int i=1;i<=6;i++){
//         coun+=count(start+i,end);
//     }
//     return coun;
// }
// int main(){
//     cout<<count(1,4);
//     return 0;
// }


// number of ways in 2D maze

// #include<iostream>
// using namespace std;
// int maze(int n,int i,int j){
//     if(i==n-1 && j==n-1){
//         return 1; 
//     }
//     if(i>n || j>n){
//         return 0;
//     }
//     return maze(n,i+1,j)+maze(n,i,j+1);
// }
// int main(){
//     cout<<maze(3,0,0);
//     return 0;
// }