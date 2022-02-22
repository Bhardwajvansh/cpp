// to combine elements of  multiple data types


// #include<iostream>
// using namespace std;
// typedef struct employee{
//     int eid;
//     char favchar;
//     float salary;
// }hello;
// int main(){
//     struct employee vansh;
//     hello rohit;
//     hello shashank;
//     vansh.eid=1;
//     rohit.eid=1;
//     shashank.eid=1;
//     vansh.favchar='v';
//     vansh.salary=1234;  
//     cout<<vansh.salary<<endl;
//     cout<<vansh.favchar<<endl;
//     cout<<vansh.eid<<endl;

//     return 0;
// }

// the upper structure will allocate 4 + 1 + 4 = 9 bits for the program

// but the union will allocate the maximum required like 4 bit in the example below as it will allow the use of only one at a time of rice car and pound for money

// unions
// provides better memory management

// #include<iostream>
// using namespace std;
// union money{
//     int rice;
//     char car;
//     float pounds;
// };
// int main(){
//     union money m1;
//     m1.rice=34;
//     m1.car='c';
//     cout<<m1.rice<<endl; // this will give garbage value as car is being used in the last line
//     cout<<m1.car<<endl;
//     return 0;
// }


// enum can store the values starting from 0,1,2,3,........

// #include<iostream>
// using namespace std;
// enum meal{breakfast,dinner,lunch};
// int main(){
//     meal m2=breakfast;
//     meal m1=lunch;
//     cout<<m1<<endl;
//     cout<<m2<<endl;
//     // cout<<breakfast<<endl;  
//     // cout<<lunch<<endl;  
//     // cout<<dinner<<endl;  
//     return 0;
// }