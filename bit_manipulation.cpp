
// *getbit* - to check if the bit at the position is 1 or 0
// make a bit by using (1<<pos) upto the position
// and it with the original value to get the value of bit

// #include<iostream>
// using namespace std;
// int getbit(int n,int pos){
//     return ((n&(1<<pos))!=0);
// }
// int main(){
//     cout<<getbit(5,2);
//     return 0;
// }

// *setbit* to set the value 1 at the given position 
// make a bit by using (1<<pos) upto the position where we want to put 1
// | it with the original value

// #include<iostream>
// using namespace std;
// int setbit(int n,int pos){
//     return (n|(1<<pos));
// }
// int main(){
//     cout<<setbit(13,1);
//     return 0;
// }

// *clear bit* to set thve value of 0 to the position
// make a bit by using (1<<pos) upto the position where we want to put 0
// take its ~ (compliment ) and & it with the original value 

// #include<iostream>
// using namespace std;
// int setbit(int n,int pos){
//     return (n&(~(1<<pos)));
// }
// int main(){
//     cout<<setbit(13,3);
//     return 0;
// }


// updatebit() this is basically clearbit() then setbit()

// #include<iostream>
// using namespace std;
// int updatebit(int n,int pos,int val){
//     int m=~(1<<pos);
//     int o=m&n;
//     return (o|(val<<pos));
// }
// int main(){
//     cout<<updatebit(7,1,0);
    
//     return 0;
// }