// to convert all the elements into uppercase or lowercase

// #include<iostream>
// #include<string>
// using namespace std;
 
// int main(){
//     string s1="vanshfjalkgjagarlg";
//     cout<<'a'-'A'<<endl;

//     for(int i=0;i<s1.length();i++){
//         s1[i]-=32;
//     }
//     cout<<s1<<endl;
//     return 0;
// }


// convert to lower case


// #include<iostream>
// #include<string>
// using namespace std;

 
// int main(){
//     string s1="HJDHBLFWLF";
//     for(int i=0;i<s1.length();i++){
//         if(s1[i]>'A' && s1[i]<'Z'){

//         s1[i]+=32;
//     }
//     }
//     cout<<s1<<endl;
//     return 0;
// }


// inbuilt function for upper lower case conversion

// transform(s1.begin(),s1.end(),s1.begin(),::toupper)
// the first two s1.begin() and s1.end()signify the entry of full string into the function
// the next s1.begin() signifies the starting element of the string
// the ::toupper signifies that the elements will be conerted to upper case

// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;

// int main(){
//     string s1="HJDHBLFWLF";
//     transform(s1.begin(),s1.end(),s1.begin(),::tolower);
//     cout<<s1<<endl;
//     transform(s1.begin(),s1.end(),s1.begin(),::toupper);
//     cout<<s1<<endl;
//     return 0;
// }


// find the biggest number in the numeric string

// #include<iostream>
// #include<string>
// #include<algorithm>

// using namespace std;
 
// int main(){
//     string s1="380140";
//     sort(s1.begin(),s1.end());
//     for(int i=s1.size()-1;i>=0;i--){
//         cout<<s1[i];
//     }
//     return 0;
// }


// #include<bits/stdc++.h>
// #include<string>
// using namespace std;
 
// int main(){
//     string s="vansaaah";
//     string arr[10];
//     int mx=INT_MIN;
//     for(int i=0;i<s.size();i++){
//         int sum=0;
//         for(int j=0;j<s.size();j++){
//             if(s[i]==s[j]){
//                 sum+=1;
//             }
//             mx=max(mx,sum);
//         }
        
//     }
//     cout<<mx;
//     return 0;
// }


// to return the maximum repeating character

// #include<bits/stdc++.h>
// #include<string>
// using namespace std;
 
// int main(){
//     string s="vanashaajdzzzzzzzzzzzzzz";
//     int arr[26];
//     for(int i=0;i<26;i++){
//         arr[i]=0;
//     }
//     for(int i=0;i<s.size();i++){
//         arr[s[i]-'a']++;
//     }
//     int ans=0;
//     char c;
//     for(int i=0;i<26;i++){
//         if(arr[i]>ans){
//             ans=arr[i];
//             c='a'+i;
//         }
//     }
//     cout<<ans<<endl;
//     cout<<c;
    
//     return 0;
// }