// constructors
// its like a function
//automatically runs(envocked) when the class is called
// its a special member function with same name as of the class 
// used to set the value of variables in the class;


// should be declared in public:
// they are envocked whenever the object is created
// cannot return values 
// can have default arguments
// cannot refer to its address


// #include<bits/stdc++.h>
// using namespace std;
// class comp{
//     int a,b;
//     public:
//     comp(int x=0,int y=0){
//         a=x;
//         b=y;
//         cout<<"hello"<<endl;
//     }
//     void printdata(){
//         cout<<a<<" "<<b<<endl;
//     }
// }; 

// int main(){
//     comp c1(10,0);
//     c1.printdata();
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// class point{
//     int x,y;
//     public:
//     point(int a,int b){
//         x=a;
//         y=b;
//     }
//     void disp(){
//         cout<<x<<endl;
//         cout<<y<<endl;
//     }
// };
// int main(){
//     point o1(21,21),o2(32,23);
//     o1.disp();
//     o2.disp();
//     return 0;
// }


// constructor overloading
// maing multiple constructors with different numbers of arguments

// #include<bits/stdc++.h>
// using namespace std;
// class Complex{
//     int a,b;
//     public:
//     Complex(int x){
//         a=x;
//         b=0;
//     }
//     Complex(int x,int y){
//         a=x;
//         b=y;
//     }
//     Complex(){
//         a=0;
//         b=0;
//     }
//     void disp(){
//         cout<<a<<" "<<b<<endl;
//     }
// };
// int main(){
//     Complex c1(12,10);
//     c1.disp();

//     Complex c2(18);
//     c2.disp();
//     return 0;
// }


// defining constructor during run time

// #include<bits/stdc++.h>
// using namespace std;
// class bankdepo{
//     int principal;
//     int time;
//     float rate;
//     float value;
//     public:
//     bankdepo(){}         // this empty constructor is important for dynamic invocation of constructors
//     bankdepo(int p,int y,int r);
//     bankdepo(int p,int y,float r);
//     void show(){
//         cout<<"return value is "<<value;
//     }
// };
// bankdepo::bankdepo(int p,int y,int r){
//     principal=p;
//     time=y;
//     rate=float(r)/100;
//     value=principal;
//     for(int i=0;i<y;i++){
//         value=value*(1+r);
//     }
// }
// bankdepo::bankdepo(int p,int y,float r){
//     principal=p;
//     time=y;
//     rate=r;
//     value=principal;
//     for(int i=0;i<y;i++){
//         value=value*(1+r);
//     }
// }
// int main(){
//     bankdepo b1;
//     int p,y,r;
//     cin>>p>>y>>r;
//     b1=bankdepo(p,y,r);
//     b1.show();    
//     return 0;
// }




// copy constructor

// when o copy conetructor is found compiler supplies a default copy constructor by itself


// #include<bits/stdc++.h>
// using namespace std;
// class number{
//     int a;
//     public:
//     number(){
//         a=0;
//     }
//     number(int num){
//         a=num;
//     }
//     number(number &o){
//         a=o.a;                   // copy constructor 
//     }
//     void display(){
//         cout<<a<<endl;
//     }
// };
// int main(){
//     number x(10),y,z;
//     x.display();
//     y.display();

//     number x1(x);
//     x1.display();    
//     return 0;
// }


// destructor - never takes argument and dose not return value;

// #include<bits/stdc++.h>
// using namespace std;
// class num{
//     public:
//     int count=0;
//     num(){
//         count++;
//         cout<<count<<endl;
//     }
//     ~num(){
//         cout<<"destructor is called"<<endl;
//         count--;
//     }
// };
// int main(){
//     num c1;
//     {
//         num c2,c3;
//     }
//     return 0;
// }