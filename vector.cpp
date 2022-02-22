// vectors are like dynamic arrays


// #include<iostream>
// #include<vector>
// using namespace std;
 
// int main(){
//     vector<int> v;

//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3);

//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<endl;
//     }

//     // iterator
//     vector<int>::iterator it;
//     for(it=v.begin();it!=v.end();it++){
//         cout<<*it<<endl;
//     }

//     for(auto element:v){
//         cout<<element<<endl;
//     }

//     v.pop_back(); // will take away 2

//     vector<int> v2(3,50);        // contain the value 50 50 50
//     for(auto ele:v2){
//         cout<<ele<<endl;
//     }

//     // to swap the value of v and v2
//     swap(v,v2);
//     for(auto ele:v){
//         cout<<ele<<endl;
//     }
//     for(auto ele:v2){
//         cout<<ele<<endl;
//     }


//     return 0;
// }


// pair

// #include<iostream>
// using namespace std;
 
// int main(){
//     pair <int,char> p;
//     p.first=4;
//     p.second='s';
//     cout<<p.first<<" "<<p.second;
//     return 0;
// }



// ******************

// #include<bits/stdc++.h>
// #include<vector>
// using namespace std;
// bool mycompare(pair<int ,int> p1,pair<int,int>p2){
//     return p1.first<p2.first;
// }
// int main(){
//     int arr[]={10,16,7,14,5,3,2,9};
//     vector< pair<int ,int> >v;
//     for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++){
//         v.push_back(make_pair(arr[i],i));
//     }
//     sort(v.begin(),v.end(),mycompare);
//     for(int i=0;i<v.size();i++){
//         arr[v[i].second]=i;
//     }
//     for(int i=0;i<v.size();i++){
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// void disp(vector<int> &v){
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
// } 
// int main(){
//     vector<int> v1;
//     for(int i=0;i<4;i++){
//         int n;
//         cin>>n;
//         v1.push_back(n);
//     }
//     disp(v1);
//     return 0;
// }


// v.pop_back() to remove last ele


// #include<iostream>
// #include<vector>
// using namespace std;
// void disp(vector<int> &v){
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
// } 
// int main(){
//     vector<int> v1;
//     for(int i=0;i<4;i++){
//         int n;
//         cin>>n;
//         v1.push_back(n);
//     }
//     v1.pop_back();
//     disp(v1);
//     return 0;
// }

// v.pop_back()


// #include<iostream>
// #include<vector>
// using namespace std;
// void disp(vector<int> &v){
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<endl;
//     }
// } 
// int main(){
//     vector<int> v1;
//     vector<int> v2;
//     for(int i=0;i<4;i++){
//         v1.push_back(i);
//     }
//     for(int i=0;i<4;i++){
//         v2.push_back(i);
//     }
//     vector<int>::iterator it=v1.begin();
//     v1.insert(it+1,56);
//     disp(v1);
//     disp(v2);
//     return 0;
// }


