// stack



// #include<bits/stdc++.h>
// using namespace std;
// #define n 100
// class Stack{
//     int* arr;
//     int top;
//     public:
//     Stack(){
//         arr=new int[n];
//         top=-1;
//     }
//     bool empty(){
//         return top==-1;
//     }
//     void push(int x){
//         if(top==n-1){
//             cout<<"stack overflow"<<endl;
//             return;
//         }
//         else{
//             top++;
//             arr[top]=x;
//             return;
//         }
//     }
//     void pop(){
//         if(top==-1){
//             cout<<"no element to pop"<<endl;
//             return;
//         }
//         top--;
//     }
//     int Top(){
//         if(top==-1){
//             cout<<"nor element in stack"<<endl;
//             return -1;
//         }
//         return arr[top];
//     }
// };
// int main(){

//     Stack st;
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     cout<<st.Top()<<endl;
//     st.pop();
//     st.pop();
//     st.pop();
//     cout<<st.Top()<<endl;
//     return 0;
// }


// to reverse a sentence using stack

// #include<bits/stdc++.h>
// #include<stack>
// using namespace std;
// void reverse(string s){
//     stack<string> st;
//     for(int i=0;i<s.length();i++){
//         string x=" ";
//         while(s[i]!=' ' && i<s.size()){
//             x+=s[i];
//             i++;
//         }
//         st.push(x);
//     }
//     while(!st.empty()){
//         cout<<st.top()<<"";
//         st.pop();
//     }
//     cout<<endl;
// }
// int main(){
//     string s="hello I am vansh";
//     reverse(s);
//     return 0;
// }

// to reverse a stack using recursion

// #include<bits/stdc++.h>
// #include<stack>
// using namespace std;
// void insertatbottom(stack <int> &st,int x){
//     if(st.empty()){
//         st.push(x);
//         return;
//     }
//     int topx=st.top();
//     st.pop();
//     insertatbottom(st,x);
//     st.push(topx);
// }
// void reverse(stack <int> &st){
//     if(st.empty()){
//         return;
//     }
//     int x=st.top();
//     st.pop();
//     reverse(st);
//     insertatbottom(st,x);
// }
// int main(){
//     stack < int > st;    
//     st.push(1);
//     st.push(2);
//     reverse(st);
//     while(!st.empty()){
//         cout<<st.top()<<endl;
//         st.pop();
//     }
//     return 0;
// }



// infix expression - when we use binary operation

// prefix expression evaluation

// #include<bits/stdc++.h>
// #include<stack>
// using namespace std;
// int prefix(string s){
//     stack <int> st;
//     for(int i=s.size()-1;i>=0;i--){
//         if(s[i]>='0' && s[i]<='9'){
//             st.push(s[i]-'0');
//         }
//         else{
//             int op1=st.top();
//             st.pop();
//             int op2=st.top();
//             st.pop();
//             switch (s[i])
//             {
//             case '+':
//                 st.push(op1+op2);
//                 break;
//             case '-':
//                 st.push(op1-op2);
//                 break;
//             case '*':
//                 st.push(op1*op2);
//                 break;
//             case '/':
//                 st.push(op1/op2);
//                 break;
//             case '^':
//                 st.push(pow(op1,op2));
//                 break;
//             }
//         }
//     }
//     return st.top();
// }
// int main(){
//     string s="-+7*45+20";
//     cout<<prefix(s);
//     return 0;
// }


// postfix expression



// #include<bits/stdc++.h>
// using namespace std;
// int postfix(string s){
//     stack <int> st;
//     for(int i=0;i<s.size();i++){
//         if(s[i]>='0' && s[i]<='9'){
//             st.push(s[i]-'0');
//         }
//         else{
//             int op2=st.top();
//             st.pop();
//             int op1=st.top();
//             st.pop();
//             switch (s[i])
//             {
//             case '+':
//                 st.push(op1+op2);
//                 break;
//             case '-':
//                 st.push(op1-op2);
//                 break;
//             case '*':
//                 st.push(op1*op2);
//                 break;
//             case '/':
//                 st.push(op1/op2);
//                 break;
//             case '^':
//                 st.push(pow(op1,op2));
//                 break;            
//             }
//         }
//     }

//     return st.top();
// }
// int main(){
//     string s="46+2/5*7+";    
//     cout<<postfix(s);
//     return 0;
// }

// infix to postfix

// #include<bits/stdc++.h>
// using namespace std;
// int prec(char c){
//     if(c=='^'){
//         return 3;
//     }
//     else if(c=='*' || c=='/'){
//         return 2;
//     }
//     else if(c=='+' || c=='-'){
//         return 1;
//     }
//     else return -1;
// }
// void postfix(string s){
//     stack <char> st;
//     for(int i=0;i<s.size();i++){
//         if((s[i]>='a' && s[i]<='z') || (s[i]>='Z' && s[i]<='Z')){
//             cout<<s[i];
//         }
//         else if(s[i]=='('){
//             st.push(s[i]);
//         }
//         else if(s[i]==')'){
//             while(!st.empty() && st.top()!='('){
//                 cout<<st.top();
//                 st.pop();
//             }
//             if(!st.empty()){
//                 st.pop();
//             }
//         }
//         else {
//             while(!st.empty() && prec(st.top())>prec(s[i])){
//                 cout<<st.top();
//                 st.pop();
//             }
//             st.push(s[i]);
//         }   
//     }
//     while(!st.empty()){
//         cout<<st.top();
//         st.pop();
//     }
// }
// int main(){
//     string s="(a-b/c)*(a/k-l)";
//     postfix(s);
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int pres(char c){
//     if(c=='^'){
//         return 3;
//     }
//     else if(c=='/' || c=='*'){
//         return 2;
//     }
//     else if(c=='+' || c=='-'){
//         return 1;
//     }
//     else return -1;
// }
// void postfix(string s){
//     stack<char> st;
//     for(int i=0;i<s.size();i++){
//         if(s[i]>='a' && s[i]<='z'){
//             cout<<s[i];
//         }
//         else if(s[i]=='('){
//             st.push(s[i]);
//         }
//         else if(s[i]==')'){
//             while(!st.empty() && st.top()!='('){
//                 cout<<st.top();
//                 st.pop();
//             }
//             if(!st.empty()){
//                 st.pop();
//             }
//         }
//         else {
//             while(!st.empty() && pres(st.top())>pres(s[i])){
//                 cout<<st.top();
//                 st.pop();
//             }
//             st.push(s[i]);
//         }
//     }
//     while(!st.empty()){
//         cout<<st.top();
//         st.pop();
//     }
// }
// int main(){
//     string s="(a-b/c)*(a/k-l)";
//     postfix(s);
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// string reverse(string s){
//     string ans="";
//     for(int i=s.size()-1;i>=0;i--){
//         if(s[i]==')')
//             ans+='(';
//         else if(s[i]=='(')
//             ans+=')';
//         else
//             ans+=s[i];
//     }
//     return ans;
// }
// int pres(char c){
//     if(c=='^'){
//         return 3;
//     }
//     else if(c=='/' || c=='*'){
//         return 2;
//     }
//     else if(c=='+' || c=='-'){
//         return 1;
//     }
//     else return -1;
// }
// string prefix(string s){
//     stack <char> st;
//     string ans="";
//     for(int i=0;i<s.size();i++){
//         if(s[i]>='a' && s[i]<='z'){
//             ans+=s[i];
//         }
//         else if(s[i]=='('){
//             st.push(s[i]);
//         }
//         else if(s[i]==')'){
//             while(!st.empty() && st.top()!='('){
//                 ans+=st.top();
//                 st.pop();
//             }
//             if(!st.empty()){
//                 st.pop();
//             }
//         }
//         else{
//             while(!st.empty() && pres(st.top())>pres(s[i])){
//                 ans+=st.top();
//                 st.pop();
//             }
//             st.push(s[i]);
//         }
//     }
//     while(!st.empty()){
//         ans+=st.top();
//         st.pop();
//     }
//     return ans;
// }
// int main(){
//     string s="(a-b/c)*(a/k-l)";
//     s=reverse(s);   
//     cout<<reverse(prefix(s));    
//     return 0;
// }


// balanced paranthesis

// #include<bits/stdc++.h>
// using namespace std;
// void check(string s){
//     stack <char> st;
//     int i=0;
//     for(i=0;i<s.size();i++){
//         if(s[i]=='}'){
//             if(st.top()=='{'){
//                 st.pop();
//             }
//             else break;
//         }
//         else if(s[i]==']'){
//             if(st.top()=='['){
//                 st.pop();
//             }
//             else break;
//         }
//         else if(s[i]==')'){
//             if(st.top()=='('){
//                 st.pop();
//             }
//             else break;
//         }
//         else st.push(s[i]);
//     }
//     if(i==(s.size())){
//         cout<<"YES";
//     }
//     else cout<<"NO";
// }
// int main(){
//     string s="{([]}}";
//     check(s);
//     return 0;
// }