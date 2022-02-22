// stack follows a strict order which cannot be changed
// stcak overflow can happen if the function call is not stopped while doing a recursion queston

// by *HEAP* we can manually allocate or de-allocate the memory


// heap

// #include<iostream>
// using namespace std;
 
// int main(){
//     int a=10;             // stored in stack
    
//     int *p=new int();     // allocate memory in heap
//     *p=a;
//     delete(p);            // deallocate memory

//     p=new int[a];         // creating a array in the heap of size a
//                           // used to create an array of variable size
//     delete[]p;            // to delete the array in the heap
    
//     p=NULL;               // to delete the pointer so that it prevents memory leak(waistage og memory)
//     return 0;
// }  
