/********************************Nobita Scored Good Marks******************************* */
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, x;
//         cin >> x >> n;
//         int remainder = x%n;
//         int take = n- remainder;
//         int ans = min(remainder,take);
//         cout << ans << endl;
//     }
//     return 0;
// }           

/********************************Help Ramu**************************************** */
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
// 	int t;
// 	cin>>t;
// 	while(t--){
// 		int c1,c2,c3,c4;
// 		cin>>c1>>c2>>c3>>c4;
// 		int n , m,sumR =0,sumC = 0;
// 		cin>>n>>m;
// 		int r[n],c[m];
// 		for(int i=0;i<n;i++)
// 		cin>>r[i];
// 		for(int i=0;i<m;i++)
// 		cin>>c[i];
// 		for(int i=0;i<n;i++){
// 			sumR+=min(r[i]*c1,c2);
// 	}
// 		int TotalCost_R = min(sumR,c3);
// 		for(int i=0;i<m;i++){
// 			sumC+=min(c[i]*c1,c2);
// 		}
// 		int TotalCost_C = min(sumC,c3);
// 		int TotalCost = min((TotalCost_R + TotalCost_C),c4);
// 		cout<<TotalCost<<endl;
// 	}
// 	return 0;
// }

/**********************************Alex Shopping********************** */
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
// 	int n;
// 	cin>>n;
// 	int a[n];
// 	for(int i=0;i<n;i++)
// 	cin>>a[i];
// 	int t;
// 	cin>>t;
// 	while(t--){
// 		int A,K,c=0;
// 		cin>>A>>K;
// 		for(int i=0;i<n;i++){
// 			int j=0;
// 			if(A==a[i])
// 			c++;
// 			else if(A==a[i]+a[j])
// 			c++;
// 			else
// 			j++;
// 		}
// 		if(c==K)
// 		cout<<"Yes"<<endl;
// 		else
// 		cout<<"No"<<endl;
// 	}
// 	return 0;
// }


/***************************Calculate the sum********************* */
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
// 	int n,sum=0;
// 	cin>>n;
// 	int a[n],b[n];
// 	for(int i=0;i<n;i++){
// 		cin>>a[i];
// 	}
// 	int t;
// 	while(t--){
// 		int x;
// 		cin>>x;
// 		if(x==0){
// 			for(int i=0;i<n;i++){
// 				b[i]=a[i]+a[i];
//                 cout<<b[i]<<endl;
// 			}
// 		}
// 		else{
// 		int c=a[0] , d=a[n-1];
// 		for(int i=0;i<n;i++){
// 			b[i]= c+d;
// 			c=a[i+1];
// 			d=a[i];
// 			a[i]=b[i];
// 		}
// 		}
// 	}
// 	for(int i=0;i<n;i++){
// 		sum+=b[i];
// 	}
// 	int result = sum%(10*9+7);
// 	cout<<result<<endl;
// 	return 0;
// }

/************************* Trapping Rainwater******************** */

// #include<bits/stdc++.h>
// using  namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int heights[n];
//         for(int i=0;i<n;i++){
//             cin>>heights[i];
//         }

//         int leftmax[n];
//         int rightmax[n];
//         leftmax[0]=heights[0];
//         for(int i=1;i<n;i++){
//             leftmax[i]=max(leftmax[i-1],heights[i]);
//         }
//         rightmax[n-1]=heights[n-1];
//         for(int i=n-2;i>=0;i--){
//             rightmax[i]=max(rightmax[i+1],heights[i]);
//         }
//         int ans=0;
//         for(int i=0;i<n;i++){
//             int height=min(leftmax[i],rightmax[i])-heights[i];
//             if(height>0){
//                 ans=ans+height*1;
//             }
//         }
//         cout<<ans<<endl;
//     }
//    return 0;
// }

/*******************************Majority Element*********************** */
// #include<bits/stdc++.h>
// using namespace std;
// int main () {
// 	int n,c=0;
// 	cin>>n;
// 	int a[n],f[n];
// 	for(int i=0;i<n;i++){
// 		cin>>a[i];
// 		f[i]=0;
// 	}
// 	for(int i=0;i<n;i++){
// 		if(f[i]==0){
// 			c=0;
// 		for(int j=0;j<n;j++){
// 			if(a[i]==a[j]){
// 				c++;
// 				f[j]=1;
// 			}
// 		}
// 		if(c>n/2)
// 		cout<<a[i]<<endl;
// 		}
// 	}
// 	return 0;
// }