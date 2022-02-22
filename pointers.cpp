// #include<iostream>
// using namespace std;
 
// int main(){
//     int a=10;
//     int *ptr=&a;

//     cout<<ptr<<" ";
    
//     cout<<*ptr<<" ";

//     cout<<&a<<" ";

//     cout<<a<<" ";
//     return 0;
// }


// arithematic operations on pointers
// these are limited including 
// ++
// +
// --
// -

// for integer and float, pointer will increase by 4 byte and for a character it will increase by 1 byte

// #include<iostream>
// using namespace std;
 
// int main(){
//     int a=10;
//     int *ptr=&a;
//     cout<<ptr<<endl;
//     ptr++;
//     cout<<ptr<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
 
// int main(){
//     int arr[]={10,20,30};
//     int *ptr=arr;
//     cout<<*arr<<" "; // print arr[0]
//     cout<<arr<<" ";  // print address of arr[0]
//     for(int i=0;i<3;i++){
        
//         cout<<*(ptr+i)<<" ";  // print the elements of the array
//         //ptr++;
//     }
//     return 0;
// }


// pointer to pointer

// #include<iostream>
// using namespace std;
 
// int main(){
//     int a=10;
//     int*p=&a;
//     int **ptr=&p;
//     cout<<*ptr<<endl;  // this will print the value of p
//     cout<<**ptr<<endl; // this will prin the value of a
//     cout<<ptr<<endl; // this will prin the value of ptr
//     return 0;
// }

// swap using pointers

// #include<iostream>
// using namespace std;
// void swap(int *p1,int *p2){
//     int temp;
//     temp=*p1;
//     *p1=*p2;
//     *p2=temp;
//     cout<<*p1<<" "<<*p2;

// }
// int main(){
//     int a=10,b=12;
//     int *p1=&a;
//     int *p2=&b;
//     swap(&a,&b);
//     cout<<endl<<*p1<<" "<<*p2;
//     return 0;
// }