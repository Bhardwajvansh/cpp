// character arrays

//1) we need to know the size beforehand
//2) large size required for performing the operations like append and concatination
//3) no terminating character


// strings

//1) no need to know the size beforehand
//2) performing those tasks are easier
//3) a terminating character is at the end '\0'

// #include<iostream>
// #include<string>
// using namespace std;
 
// int main(){
//     string s;
//     //cin>>s;    // it will not take values 1st space after the space
//     //cout<<s;

//     string s1(5,'v'); 
//     cout<<s1<<endl;

//     string s2="vanshbhardwaj";
//     cout<<s2<<endl;

//     // input with spaces
//     string s3;
//     getline(cin,s3);
//     cout<<s3<<endl;
    
//     return 0;
// }


// different functions of strings

// s1.append(s2)- joins the s2 string to s1 . it changes the value of s1.

// #include<iostream>
// #include<string>
// using namespace std;
 
// int main(){
//     string s1="vansh";
//     string s2="bhardwaj";
//     s1.append(s2);
//     cout<<s1<<endl;
//     return 0;
// }


// "+" for strings . it dose not changes the value of s1

// #include<iostream>
// #include<string>
// using namespace std;
 
// int main(){
//     string s1="vansh";
//     string s2="bhardwaj";
//     cout<<s1+s2<<endl;
//     return 0;
// }


// accessing an element of the string

// #include<iostream>
// #include<string>
// using namespace std;
 
// int main(){
//     string s1="vanshbhardwaj";
//     cout<<s1<<endl;

//     cout<<s1[10]<<endl;

//     cout<<s1[0]<<endl;
//     return 0;
// }

// clear()- to delete all the elements of the string

// #include<iostream>
// #include<string>
// using namespace std;
 
// int main(){
//     string s1="vansh bhardwaj";
//     s1.clear();
//     cout<<s1<<endl;
//     return 0;
// }


// comparing two strings
//  s1.compare(s2)- this will compare the s1 string to the s2 string
// if the ASCII values of all characters are same then it will show 0 if the ASCII values of characters are unequal it will show +-.

// #include<iostream>
// #include<string>
// using namespace std;
 
// int main(){
//     string s1="vansh";
//     string s2="vansh bhardwaj";

//     cout<<s1.compare(s2)<<endl;

//     cout<<s2.compare(s1)<<endl;

//     cout<<s2.compare(s2)<<endl;
//     return 0;
// }


// s1.empty() - to check if the string is empty

// #include<iostream>
// #include<string>
// using namespace std;
 
// int main(){
//     string s="vansh";
//     s.clear();
//     if(s.empty()){
//         cout<<"empty";
//     }
//     else{
//         cout<<"non empty";

//     }
//     return 0;
// }

// s1.erase(index_from_which_you_want_to_del , number_of_characters )- it will erase the elements between the characters and join the string.


// #include<iostream>
// #include<string>
// using namespace std;
 
// int main(){
//     string s="vanshbhardwaj is good boy";
//     s.erase(5,8);
//     cout<<s;
    
//     return 0;
// }


// s1.find("part of the string")- it will search the part of the string and return the index of the starting element of the part of the string

// #include<iostream>
// #include<string>
// using namespace std;
 
// int main(){
//     string s="vanshbhardwaj is good boy";
//     cout<<s.find("a")<< endl;    
//     //cout<<s.find("sgoo");    // if not found it will return a garbage value
//     return 0;
// }


// s1.insert(index ," string ")

// #include<iostream>
// #include<string>
// using namespace std;
 
// int main(){
//     string s="vanshis good boy";
//     cout<<s.insert(5," bhardwaj ")<< endl;    
//     return 0;
// }


// s1.size() or s1.length()


// #include<iostream>
// #include<string>
// using namespace std;
 
// int main(){
//     string s="vanshis good boy";
//     cout<<s.size()<< endl;    
//     cout<<s.length()<< endl;    
//     return 0;
// }


// s1.substr( initial_index , total_number_of_elements)- will print the part including the initial index element


// #include<iostream>
// #include<string>
// using namespace std;
 
// int main(){
//     string s="vanshis good boy";
//     string s1=s.substr(7,4);
//     cout<<s1;
//     return 0;
// }

// stoi(s1)- to change an string including numbers to an integers 

// #include<iostream>
// #include<string>
// using namespace std;
 
// int main(){
//     string s="12a34b";// this will take the integers untill the 1st character is encountered
//     cout<<stoi(s);
//     return 0;
// }


//to_string(s1)- is used to convert an integer to a string

// #include<iostream>
// #include<string>
// using namespace std;
 
// int main(){
//     int s=1234;
//     cout<<to_string(s)+"2"+'2';
//     return 0;
// }


// to sort a stirng
// sort(s1.begin(),s1.end())-will return the sorted string

// #include<iostream>
// #include<string>
// #include<algorithm>

// using namespace std;
 
// int main(){
//     string s1="vansh is good";
//     sort(s1.begin(),s1.end());
//     cout<<s1;
//     return 0;
// }