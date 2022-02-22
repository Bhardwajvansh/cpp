// rat in a maze

// input

// 1 0 1 0 1
// 1 1 1 1 1
// 0 1 0 1 0
// 1 0 0 1 1
// 1 1 1 0 1

// #include<iostream>
// using namespace std;
// bool issafe(int** arr,int x,int y,int n){
//     if(x<n&&y<n&&arr[x][y]==1){
//         return true;
//     }
//     return false;
// }
// bool ratinmaze(int** arr,int x,int y,int n,int** solnarr){
//     if(x==n-1&&y==n-1){
//         return true;
//     }
//     if(issafe(arr,x,y,n)){
//         solnarr[x][y]=1;
//         if(ratinmaze(arr,x+1,y,n,solnarr)){
//             return true;
//         }
//         if(ratinmaze(arr,x,y+1,n,solnarr)){
//             return true;
//         }
//         solnarr[x][y]=0;
//         return false;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     int** arr=new int*[n];
//     for(int i=0;i<n;i++){
//         arr[i]=new int [n];
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//         }
//     }
//     int** solnarr=new int*[n];
//     for(int i=0;i<n;i++){
//         solnarr[i]=new int[n];
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             solnarr[i][j]=0;
//         }
//     }
//     // {{1,0,1,0,1},{1,1,1,1,1},{0,1,0,1,0},{1,0,0,1,1},{1,1,1,0,1}};
//     if(ratinmaze(arr,0,0,n,solnarr)){
//         for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++){
//                 cout<<solnarr[i][j]<<" ";
//             }
//         cout<<endl;
//         }
        
//     }
//     return 0;
// }



// N queen problem
// to place N number of queen in an NxN board which will not kill eachother
// by using recursion and backtracking 

// 0 0 0 0
// 0 0 0 0
// 0 0 0 0
// 0 0 0 0

// #include<iostream>
// using namespace std;
// bool issafe(int** arr,int x,int y,int n){
//     for(int row=0;row<x;row++){
//         if(arr[row][y]==1){
//             return false;
//         }
//     }    
//     int row=x;
//     int col=y;
//     while(row>=0 && col>=0 ){
//         if(arr[row][col]==1){
//             return false;
//         }
//         row--;
//         col--;
//     }
//     row=x;
//     col=y;
//     while(row>=0 && col<n){
//         if(arr[row][col]==1){
//             return false;
//         }
//         row--;
//         col++;
//     }
//     return true;
// }
// bool nqueen(int** arr,int x,int n){
//     if(x>=n){
//         return true;
//     }
//     for(int col=0;col<x;col++){
//         if(issafe(arr,x,col,n)){
//             arr[x][col]=1;
//             if(nqueen(arr,x+1,n)){
//                 return true;
//             }   
//             arr[x][col]=0;  // backtracikng
//         }
//     }
//     return false;
// }
// int main(){
//     int n;
//     cin>>n;
//     int** arr=new int*[n];
//     for(int i=0;i<n;i++){
//         arr[i]=new int[n];
//         for(int j=0;j<n;j++){
//             arr[i][j]=0;
//         }
//     }
//     cout<<nqueen(arr,0,n)<<endl;
//         for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++){
//                 cout<<arr[i][j]<<" ";
//             }cout<<endl;
//         }
//     return 0;
// }