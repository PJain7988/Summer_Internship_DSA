/*Time complexity = 0(n*m)
  Space complexity = 0(n*m)
  for square matrix transpose space complexity = 0(1)
*/

//  #include<bits/stdc++.h>
// using namespace std;
// int main() {
// 	int n,m;
// 	cin>>n>>m;
// 	int a[n][m];
// 	for(int i=0;i<n;i++){
// 		for(int j=0;j<m;j++){
// 			cin>>a[i][j];
// 		}
// 	}
//     int top=0,bottom=n-1,left=0,right=m-1;
//     int direction = 0;
//     while(top<=bottom && left<=right){
//         if(direction == 0){
//             for(int i=top;i<=bottom;i++){
//                 cout<<a[i][left]<<", ";
//             }
//             left++;
//         }
//         else if(direction == 1){
//             for(int i=bottom;i>=0;i--){
//                 cout<<a[i][left]<<", ";
//             }
//             left++;
//         }
//         else if(direction == 2){
//             for(int i=top;i<=bottom;i++){
//                 cout<<a[i][left]<<", ";
//             }
//             left++;
//         }
//         else if(direction == 3){
//             for(int i=bottom;i>=0;i--){
//                 cout<<a[i][left]<<", ";
//             }
//             left++;
//         }
//         direction=(direction+1)%4;
//     }
// 	return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,m;
// 	cin>>n>>m;
// 	int a[n][m];
// 	for(int i=0;i<n;i++){
// 		for(int j=0;j<m;j++){
// 			cin>>a[i][j];
// 		}
// 	}
//     for(int i=0;i<m;i++){
//         if(i%2==0){
//         for(int j=0;j<n;j++){
//             cout<<a[j][i]<<" ";
//         }
//         }
//         else{
//             for(int j=n-1;j>=0;j--){
//             cout<<a[j][i]<<" ";
//         }
//         }
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,m,sum,d=0;
// 	cin>>n>>m;
// 	int a[n][m],index;
// 	for(int i=0;i<n;i++){
// 		for(int j=0;j<m;j++){
// 			cin>>a[i][j];
// 		}
// 	}
//     for(int i=0;i<n;i++){
//         sum=0;
// 		for(int j=0;j<m;j++){
// 			sum+=a[i][j];
// 		}
//         if(d<sum){
//             d=sum;
//             index=i;
//         }
// 	}
//     cout<<index<<endl;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,m;
// 	cin>>n>>m;
// 	int a[n][m];
// 	for(int i=0;i<n;i++){
// 		for(int j=0;j<m;j++){
// 			cin>>a[i][j];
// 		}
// 	}
//     for(int i=0;i<m;i++){
// 		for(int j=0;j<n;j++){
// 			cout<<a[j][i]<<" ";
// 		}
//         cout<<endl;
// 	}
//     return 0;
// }

/*transpose of Square matrix*/
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
// 	cin>>n;
// 	int a[n][n];
// 	for(int i=0;i<n;i++){
// 		for(int j=0;j<n;j++){
// 			cin>>a[i][j];
// 		}
// 	}
//     cout<<"Before transpose: "<<endl;
//     for(int i=0;i<n;i++){
// 		for(int j=0;j<n;j++){
// 			cout<<a[i][j]<<"\t";
// 		}
//         cout<<endl;
// 	}
//     for(int i=0;i<n;i++){
// 		for(int j=0;j<i;j++){
// 			swap(a[i][j],a[j][i]);
// 		}
// 	}
//     cout<<"After transpose: "<<endl;
//     for(int i=0;i<n;i++){
// 		for(int j=0;j<n;j++){
// 			cout<<a[i][j]<<"\t";
// 		}
//         cout<<endl;
// 	}
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main() {
// 	int n;
// 	cin>>n;
// 	int a[n][n];
// 	for(int i=0;i<n;i++){
// 		for(int j=0;j<n;j++){
// 			cin>>a[i][j];
// 		}
// 	}
// 	for(int i=0;i<n;i++){
//         for(int j=0;j<i;j++){
//             swap(a[i][j],a[j][i]);
//         }
//     }
//     int left =0 , right=n-1;
//     while(left<=right){
//     for(int i=0;i<n;i++){
//         swap(a[i][left],a[i][right]);
//     }
//     left++;
//     right--;
// }
//     for(int i=0;i<n;i++){
// 		for(int j=0;j<n;j++){
// 			cout<<a[i][j]<<" ";
// 		}
//         cout<<endl;
// 	}
// 	return 0;
// }

/**********************************************************************************************/
                                    // spiral (clockwise)
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//   int n,m;
//   cin>>n>>m;
//   int arr[n][m];
//   for(int i=0;i<n;i++){
//     for(int j=0;j<m;j++){
//       cin>>arr[i][j];
//     }
//   }
//   int left = 0, right= m-1;
//   int top = 0, bottom = n-1;
//   int move =0;
//   while(left<=right && top<=bottom){
//       for(int i=left;i<=right;i++){
//         cout<<arr[top][i]<<" ";
//       }
//       top++;
//       if(top>bottom) break;
//       for(int i=top;i<=bottom;i++){
//         cout<<arr[i][right]<<" ";
//       }right--;
//       if(left>right) break;
//       for(int i=right;i>=left;i--){
//         cout<<arr[bottom][i]<<" ";
//       }
//       bottom--;
//       if(top>bottom) break;
//       for(int i=bottom;i>=top;i--){
//         cout<<arr[i][left]<<" ";
//       }
//       left++;
//   }
//   return 0;
// }

                        // Spiral(anti-clockwise)
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//   int n,m;
//   cin>>n>>m;
//   int arr[n][m];
//   for(int i=0;i<n;i++){
//     for(int j=0;j<m;j++){
//       cin>>arr[i][j];
//     }
//   }
//   int left = 0, right= m-1;
//   int top = 0, bottom = n-1;
//   int move =0;
//   while(left<=right && top<=bottom){
//       for(int i=top;i<=bottom;i++){
//         cout<<arr[i][left]<<" ";
//       }left++;
//       if(left>right) break;
//        for(int i=left;i<=right;i++){
//         cout<<arr[bottom][i]<<" ";
//       }
//       bottom--;
//       if(top>bottom) break;
//       for(int i=bottom;i>=top;i--){
//         cout<<arr[i][right]<<" ";
//       }
//       right--;
//       if(left>right) break;
//       for(int i=right;i>=left;i--){
//         cout<<arr[top][i]<<" ";
//       }
//       bottom--;   
//   }
//   return 0;
// }

                      // Set_matrix_zeroes
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//   int n,m;
//   cin>>n>>m;
//   int arr[n][m];
//   for(int i=0;i<n;i++){
//     for(int j=0;j<m;j++){
//       cin>>arr[i][j];
//     }
//   }
//   for(int i=0;i<n;i++){
//     for(int j=0;j<m;j++){
//       if(arr[i][j]==0){
//         for(int k=j-1;k>=0;k--){
//           if(arr[i][k]!=0)
//           arr[i][k]=-1;
//         }
//         for(int k=j+1;k<m;k++){
//           if(arr[i][k]!=0)
//           arr[i][k]=-1;
//         }
//         for(int k=i-1;k>=0;k--){
//           if(arr[k][j]!=0)
//           arr[k][j]=-1;
//         }
//         for(int k=i+1;k<n;k++){
//           if(arr[k][j]!=0)
//           arr[k][j]=-1;
//         }
//       }
//     }
//   }
//   for(int i=0;i<n;i++){
//     for(int j=0;j<m;j++){
//       if(arr[i][j]==-1)
//       arr[i][j]=0;
//     }
//   }
//   for(int i=0;i<n;i++){
//     for(int j=0;j<m;j++){
//       cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
//   }
//   return 0;
// }