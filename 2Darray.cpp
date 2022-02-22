// #include<iostream>
// using namespace std;
 
// int main(){
//     int arr[3][4];
//     for(int i=0;i<3;i++){
//         for(int j=0;j<4;j++){
//             cin>>arr[i][j];
//         }
//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<4;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }

// to print 2d array in spiral manner

// #include<iostream>
// using namespace std; 
// int main(){
//     int arr[3][3];
//     int colstr=0,colend=2,rowstr=0,rowend=2; 
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cin>>arr[i][j];
//         }
//     }
//     while(rowstr<rowend && colstr<colend){
//         for(int col=colstr;col<=colend;col++){
//             cout<<arr[rowstr][col]<<" ";
//         }
//         rowstr++;
//         for(int col=rowstr;col<=rowend;col++){
//             cout<<arr[col][colend]<<" ";
//         }
//         colend--;
//         for(int col=colend;col>=colstr;col--){
//             cout<<arr[rowend][col]<<" ";
//         }
//         rowend--;
//         for(int col=rowend;col>=rowstr;col--){
//             cout<<arr[col][colstr]<<" ";
//         }
//         colstr++;
//     }
//     return 0;
// }


// transpose of a matrix

// #include<iostream>
// using namespace std;
 
// int main(){
//     int n;
//     cin>>n;
//     int arr[n][n];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//         }        
//     }
//     int a[n][n];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             a[i][j]=0;
//         }        
//     }

//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             a[i][j]=arr[j][i];
//         }
//     }
    
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<a[i][j]<<" ";
//         }        
//         cout<<"\n";
//     }
//     return 0;
// }


// matrix multiplication

// #include<iostream>
// using namespace std;
 
// int main(){
//     int arr[3][4]={{2,4,1,2},{8,4,3,6},{1,7,9,5}};
//     int ARR[4][3]={{1,2,3},{4,5,6},{7,8,9},{4,5,6}};
//     int ans[3][3];
//     for(int i=0;i<3;i++){
//         int sum=0;
//         for(int j=0;j<3;j++){
//             sum=sum+arr[i][j]*ARR[j][i];
//         }
//         for(int k=0;k<3;k++){
//             for(int j=0;j<3;j++){
//                 ans[k][j]=sum;
//                 break;        
//             }
//             break;
//         }
//     }    
//     for(int k=0;k<3;k++){
//         for(int j=0;j<3;j++){
//             cout<<arr[k][j]<<" ";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }

// multiplication of matrices

// #include<iostream>
// using namespace std;
 
// int main(){
//     int arr[3][4]={{2,4,1,2},{8,4,3,6},{1,7,9,5}};
//     int ARR[4][3]={{1,2,3},{4,5,6},{7,8,9},{4,5,6}};
//     int ans[3][3]={{0,0,0},{0,0,0},{0,0,0}};
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             for(int k=0;k<4;k++){
//                 ans[i][j]+=arr[i][k]+ARR[k][j];
//             }

//         }

//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<ans[i][j]<<" ";

//         }
//         cout<<"\n";
//     }
//     return 0;
// }


//to find an element in a sorted 2d array

// #include<iostream>
// using namespace std;
 
// int main(){
//     int n,m,match;
//     cin>>n>>m>>match;
//     int arr[n][m];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//         }
//     }
//     int c=m-1,r=0;
//     bool x=true;
//     while(r<n && c>=0){
//         if(arr[r][c]==match){
//         cout<<r<<" "<<c;
//             x=false;
//             break;
//         }
//         else if(arr[r][c]>match){
//             c--;
//         }
//         else if(arr[r][c]<match){
//             r++;
//         }
//     }
//     if(x!=false){
//         cout<<"element not found";
//     }
//     return 0;
// }