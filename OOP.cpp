///// OOP

// encapsulation

// to use public and private

// #include<bits/stdc++.h>
// using namespace std;
// class number{
//     public:
//     void pub(){
//         cout<<"hello"<<endl;
//     }
//     private:
//     void pri(){
//         cout<<"hello"<<endl;
//     }
//     protected:
//     void pro(){
//         cout<<"hello"<<endl;
//     }

// };
// int main(){
//     number o;
//     o.pub(); 
//     // o.pri(); 
//     // o.pro(); 
//     return 0;
// }


// inheritence;

// single inheritance
// multiple inheritance
// multi level inheritance
// hybrid inheritance
// heirarchial inheritance

// single inheritance

// #include<bits/stdc++.h>
// using namespace std;
// class A{
//     public:
//     void pub(){
//         cout<<"hello"<<endl;
//     }
// };
// class B : public A{};
// int main(){
//     B o;
//     o.pub();
//     return 0;
// }

// multiple

// #include<bits/stdc++.h>
// using namespace std;
// class A{
//     public:
//     void pub(){
//         cout<<"hello A"<<endl;
//     }
// };
// class B{
//     public:
//     void dis(){
//         cout<<"hello B";
//     }
// };
// class C:public A,public B{
//     public:
//     void di(){
//         cout<<"hello";
//     }
// };

// int main(){
//     C o;
//     o.pub();
//     o.dis();
//     return 0;
// }


// multi level;

// #include<bits/stdc++.h>
// using namespace std;
// class A{
//     public:
//     void pub(){
//         cout<<"hello A"<<endl;
//     }
// };
// class B:public A{
//     public:
//     void dis(){
//         cout<<"hello B";
//     }
// };
// class C:public B{
//     public:
//     void di(){
//         cout<<"hello";
//     }
// };

// int main(){
//     C o;
//     o.pub();
//     o.dis();
//     return 0;
// }

// hybrid inheritance 

// for eg class D has inherited class C and class B and B has inherited class A



// polymorphism many form of a sunle element

// compile time polymorphism
//     function overloading and operator overloading
// run time
//     virtual functions

// functions overloading

// #include<bits/stdc++.h>
// using namespace std;
// class number
// {
// public:
//     void fun(){
//         cout<<"no arguments"<<endl;
//     }
//     void fun(int a){
//         cout<<"one argument"<<endl;
//     }
//     void fun(double a){
//         cout<<"double argument"<<endl;
//     }

// };

// int main(){
//     number o1;
//     o1.fun();    
//     o1.fun(10);    
//     o1.fun(12.3);    
//     return 0;
// }


// operator overloading

// #include<bits/stdc++.h>
// using namespace std;
// class Complex{
//     private:
//     int real;
//     int image;
//     public:
//     Complex(){}
//     Complex(int r,int i){
//         real=r;
//         image=i;
//     }
//     Complex operator + (Complex const &o){
//         Complex res;
//         res.real=real+o.real;
//         res.image=image+o.image;
//         return res;
//     }
//     void display(){
//         cout<<real<<" + i"<<image;
//     }
// };
// int main(){
//     Complex i1(1,2),i2(1,2);
//     Complex i3=i1+i2;
//     i3.display();
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// class number{
//     int a;
//     public:
//     number(){}
//     number(int n){
//         a=n;
//     }
//     number operator + (number &o){
//         number ans;
//         ans.a=a+o.a;
//         return ans;
//     }
//     void display(){
//         cout<<a<<endl;
//     }
// };
// int main(){
//     number n1(10),n2(12);
//     number n3=n1+n2;
//     n3.display();
//     return 0;
// }


// virtual functions

// #include<bits/stdc++.h>
// using namespace std;
// class base{
//     public:
//     virtual void print(){
//         cout<<"this is base class print"<<endl;
//     }
//     void disp(){
//         cout<<"ths is base class disp"<<endl;
//     }   
// };
// class derived:public base{
//     public:
//     void print(){
//         cout<<"this is derived class print"<<endl;
//     }
//     void disp(){
//         cout<<"ths is derived class disp"<<endl;
//     }   
// };
// int main(){
//     base *baseptr;
//     derived d;
//     baseptr=&d;

//     baseptr->print();
//     baseptr->disp();
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// class a{
//     public:
//     virtual void print(){
//         cout<<"hello"<<endl;
//     }
//     virtual void disp(){
//         cout<<"hello 2"<<endl;
//     }
// };
// class b:public a{
//     public:
//     virtual void print(){
//         cout<<"hello 3"<<endl;
//     }
//     virtual void disp(){
//         cout<<"hello 4"<<endl;
//     }
// };
// int main(){
//     a *ptr;
//     b o1;
//     ptr=&o1;
//     ptr->print();
//     ptr->disp();
//     return 0;
// }