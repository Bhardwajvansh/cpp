// class it can protect our data and code and we can make functions inside of it which we cannot do in structures

// the value of private data types can be changed by call function

// #include<iostream>
// #include<string>
// using namespace std;
// typedef class student{
//     public:
//     string name;
//     int roll;
//     float fees;
//     void setdata(int a1,int b1,int c1){
//         a=a1;
//         b=b1;
//         c=c1;
//     }
//     void getdata(){
//         cout<<a<<endl;
//         cout<<b<<endl;
//         cout<<c<<endl;
//     }
//     void display(){
//         cout<<name<<endl;
//         cout<<roll<<endl;
//         cout<<fees<<endl;
//     }
//     private:
//     int a,b,c;
// }st;
// int main(){
//     st s1;
//     s1.name="vansh";
//     s1.roll=234;
//     s1.fees=22000.1;
//     s1.display();
//     s1.setdata(11,23,34);
//     s1.getdata();

//     return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;
// class binary
// {
//     string s;

// public:
//     void read(void);
//     void chk_bin(void);
//     void once(void);
//     void display(void);
// };
// void binary::read(void)
// {
//     cin >> s;
// }
// void binary::chk_bin(void)
// {
//     for (int i = 0; i < s.size(); i++)
//     {
//         if (s.at(i) != '0' && s.at(i) != '1')
//         {
//             cout << "incorrect" << endl;
//             exit(0);
//         }
//     }
// }
// void binary::once(void)
// {
//     chk_bin();              // nesting of member functions
//     for (int i = 0; i < s.size(); i++)
//     {
//         if (s.at(i) == '0')
//         {
//             s.at(i)='1';
//         }
//         else{
//             s.at(i)='0';
//         }
//     }
// }
// void binary::display(void){
//     cout<<s<<endl;
// }
// int main()
// {
//     binary v;
//     // v.s="vansh"; will not work as s is private by default
//     v.read();
//     //v.chk_bin();       nested above
//     v.once();
//     v.display();
//     return 0;
// }




// memory alloctaion


// #include<bits/stdc++.h>
// using namespace std;
// class shop{
//     int itemid[100];
//     int itemprice[100];
//     int counter;
//     public:
//     void intcounter(void){counter=0;}
//     void setprice(void);
//     void dispprice(void);

// };
// void shop :: setprice(void){
//     cout<<"enter id of item"<<endl;
//     cin>>itemid[counter];
//     cout<<"enter price of item"<<endl;
//     cin>>itemprice[counter];
//     counter++;
// }
// void shop::dispprice(void){
//     for(int i=0;i<counter;i++){
//         cout<<itemid[i]<<" "<<itemprice[i]<<endl;
//     }
// }
// int main(){
//     shop dukan;
//     dukan.intcounter();
//     dukan.setprice();
//     dukan.setprice();
//     dukan.dispprice();
//     return 0;
// }



// #include<iostream>
// using namespace std;
// class student{
//     int roll[100];
//     int admission[100];
//     int counter=0;
//     public:
//     void setcounter(void){counter=0;};
//     void set(void);
//     void show(void);
// };
// void student::set(void){
//     cout<<"enter roll";
//     cin>>roll[counter];
//     cout<<"enter admission";
//     cin>>admission[counter];
//     counter++;
// }
// void student::show(void){
//     for(int i=0;i<counter;i++){
//         cout<<roll[i]<<" "<<admission[i]<<endl;
//     }
// }
// int main(){
//     student a7;
//     a7.setcounter();
//     a7.set();
//     a7.set();
//     a7.show();
//     return 0;
// }


// #include<iostream>
// using namespace std;
// class classroom{
//     private:
//     int roll[100];
//     int admission[100];
//     int counter=0;
//     public:
//     void set(){
//         cin>>roll[counter];
//         cin>>admission[counter];
//         counter++;
//     }
//     void show(){
//         for(int i=0;i<counter;i++){
//             cout<<roll[i]<<" "<<admission[i]<<endl;
//         }
//     }
// };
// int main(){
//     classroom a;
//     a.set();
//     a.set();
//     a.show();
//     return 0;
// }


// #include<iostream>
// using namespace std;
// class empolyee{
//     int id;
//     static int count;       // static variables consist the value 0 by default
//     public:
//     void setdata(void){
//         cin>>id;
//         count++;
//     }
//     void show(void){
//         cout<<"the id is "<<id<<" with number of employee "<<count<<endl;
//     }
//     static void getcount(void){   // static variables can only access other static variblea and static functibos.
//         // cout<<id;       this will create an error
//         cout<<count<<endl;
//     }
// };
// int empolyee::count;  // defaulr value can only be changed in here
// int main(){
//     empolyee vansh,rohit,himanshu;
//     vansh.setdata();
//     vansh.show();
//     empolyee::getcount();

//     rohit.setdata();
//     rohit.show();
//     empolyee::getcount();

//     himanshu.setdata();
//     himanshu.show();
//     empolyee::getcount();
//     return 0;
// }


// #include<iostream>
// using namespace std;
// class employee{
//     int id;
//     int salary;
//     public:
//     void getid(void){
//         salary=1200;
//         cin>>id;
//     }
//     void setid(){
//         cout<<"the id is "<<id<<endl;
//     }
// };
// int main(){
//     employee fb[100];
//     for(int i=0;i<3;i++){
//         fb[i].getid();
//         fb[i].setid();
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// class complex{
//     int a;
//     int b;
//     public:
//     void setdata(int v1,int v2){
//         a=v1;
//         b=v2;
//     }
//     void setdatabysum(complex o1,complex o2){
//         a=o1.a+o2.a;
//         b=o1.b+o2.b;
//     }
//     void display(){
//         cout<<a<<" "<<b<<endl;
//     }
// };
// int main(){
//     complex n,m,o;
//     n.setdata(1,2);   
//     m.setdata(3,4);   
//     o.setdatabysum(n,m);
//     o.display();
//     return 0;
// }


// #include<iostream>
// using namespace std;
// class vector{
//     int x;
//     int y;
//     public:
//     void get(int a,int b){
//         x=a;
//         y=b;
//     }
//     void add(vector a,vector b){
//         x=a.x+b.x;
//         y=a.y+b.y;
//     }
//     void display(){
//         cout<<x<<" "<<y<<endl;
//     }
// };
// int main(){
//     vector v1,v2,v3;
//     v1.get(1,2);  
//     v2.get(1,2);  
//     v3.add(v1,v2);
//     v3.display();
//     return 0;
// }

// friend functions

// properties:
// 1) not in the scope of class
// 2) as not in the scope of class, c1.sumcomplex() is invalid 
// 3) ususlly conatins objects as arguments
// 4) can be declare in public or private section
// 5) cannot access the members by names and needs object_name.member_name to access any member.

// #include<iostream>
// using namespace std;
// class complex{
//     int a;
//     int b;
//     public:
//     void setnum(int n1,int n2){
//         a=n1;
//         b=n2;

//     }
//     // below line means that it is allowed to use private members
//     friend complex sumcomplex(complex o1,complex o2); // this helps a functions to access private variables
//     void print(){
//         cout<<"number is "<<a<<" "<<b<<endl;
//     }
// };
// complex sumcomplex(complex c1,complex c2){
//     complex c3;
//     c3.setnum((c1.a+c2.a),(c1.b+c2.b));
//     return c3;
// }
// int main(){
//     complex c1,c2,c3;
//     c1.setnum(1,4);
//     c2.setnum(2,4);
//     c1.print();
//     c2.print();
//     // c1.sumcomplex(c3,c2); // invalid as sumcomplex() is not in the scope of class
//     c3=sumcomplex(c1,c2);
//     c3.print();
//     return 0;
// }


// #include<iostream>
// using namespace std;
// class complex;
// class calculator{
//     public:
//     int add(int a,int b){
//         return (a+b);
//     }
//     int addcomplexreal(complex c1,complex c2);  // cannot define the function as the class which we will use is not yet defined
// };

// class complex{
//     // friend int calculator::addcomplexreal(complex c1,complex c2);
//     friend class calculator;  // wil make the whole class as a friend
//     int a;
//     int b;
//     public:
//     void setnum(int n1,int n2){
//         a=n1;
//         b=n2;

//     }
//     void print(){
//         cout<<"number is "<<a<<" "<<b<<endl;
//     }
// };

// int calculator :: addcomplexreal(complex c1,complex c2){
//     return (c1.a+c2.a);
// }

// int main(){
//     complex c1,c2;
//     c1.setnum(1,2);
//     c2.setnum(2,4);
//     c1.print();
//     c2.print();
//     calculator cal;
//     int sum=cal.addcomplexreal(c1,c2);
//     cout<<"the sum of real parts is "<<sum<<endl;
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;
// class y;  // forward decleration is done to make it awair of the upcomming class
// class x{
//     friend void add(x o1,y o2);
//     int data;
//     public:
//     void set(int value){
//         data =value;
//     }
// };
// class y{
//     friend void add(x o1,y o2);
//     int num;
//     public:
//     void set(int value){
//         num =value;
//     }
// };
// void add(x o1,y o2){
//     cout<<"sum is "<<(o1.data+o2.num)<<endl;
// }
// int main(){
//     x o1;
//     y o2;
//     o1.set(10);
//     o2.set(11);
//     add(o1,o2);
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// class v2;
// class v1{
//     int val1;
//     public:
//     void set(int x){
//         val1=x;
//     }
//     void disp(void){
//         cout<<val1<<endl;
//     }
//     friend void swap(v1 &, v2 &);
// };
// class v2{
//     int val2;
//     public:
//     void set(int x){
//         val2=x;
//     }
//     void disp(void){
//         cout<<val2<<endl;
//     }
//     friend void swap(v1 &o1, v2 &o2);
// };

// void swap(v1 &o1,v2 &o2){
//     int temp=o1.val1;
//     o1.val1=o2.val2;
//     o2.val2=temp;
// }

// int main(){
//     v1 o1;
//     v2 o2;
//     o1.set(10);
//     o2.set(12);
//     swap(o1,o2);
//     cout<<"after exchange"<<endl;
//     o1.disp();
//     o2.disp();
//     return 0;
// }


