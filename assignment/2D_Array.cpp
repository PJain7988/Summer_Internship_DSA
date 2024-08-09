/**************************Arrays-Wave Print Row Wise **********************/
// #include<bits/stdc++.h>
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
// 	for(int i=0;i<n;i++){
// 		if(i%2==0){
// 		for(int j=0;j<m;j++){
// 			cout<<a[i][j]<<", ";
// 		}
// 	} else {
// 		for(int j=m-1;j>=0;j--){
// 			cout<<a[i][j]<<", ";
// 		}
// 	}
// 	}
//     cout<<"END";
// 	return 0;
// }

/**************************Arrays-Spiral Print Anticlockwise **********************/
// #include<bits/stdc++.h>
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
//     int top = 0, bottom = n - 1, left = 0, right = m - 1;
//     int direction = 0;

//     while (top <= bottom && left <= right) {
//         if (direction == 0) {
//             for (int i = top; i <= bottom; i++) {
//                 cout << a[i][left] << ", ";
//             }
//             left++;
//         } else if (direction == 1) {
//             for (int i = left; i <= right; i++) {
//                 cout << a[bottom][i] << ", ";
//             }
//             bottom--;
//         } else if (direction == 2) {
//             for (int i = bottom; i >= top; i--) {
//                 cout << a[i][right] << ", ";
//             }
//             right--;
//         } else if (direction == 3) {
//             for (int i = right; i >= left; i--) {
//                 cout << a[top][i] << ", ";
//             }
//             top++;
//         }
//         direction = (direction + 1) % 4;
//     }
//     cout<<"END";
// 	return 0;
// }

/************Arrays-Wave print Column Wise ***************/
// #include<bits/stdc++.h>
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
//     cout<<"END";
// 	return 0;
// }

/********************* Matrix Search ****************/
// #include<bits/stdc++.h>
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
//     int x;
//     cin>>x;
//     int row = 0;
//     int col = m - 1;
//     bool search = false;
//     while (row < n && col >= 0) {
//         if (a[row][col] == x) {
//             search = true;
//             break;
//         } else if (a[row][col] > x) {
//             col--;
//         } else {
//             row++;
//         }
//     }
//     if(search==true)
//     cout<<true<<endl;
//     else
//     cout<<false<<endl;
// 	return 0;
// }

/********************* Arrays-Spiral Print Clockwise ****************/
// #include<bits/stdc++.h>
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
//     int top = 0, bottom = n - 1, left = 0, right = m - 1;
//     int direction = 0;

//     while (top <= bottom && left <= right) {
//         if (direction == 0) {
//             for (int i = left; i <= right; i++) {
//                 cout << a[top][i] << ", ";
//             }
//             top++;
//         } else if (direction == 1) {
//             for (int i = top; i <= bottom; i++) {
//                 cout << a[i][right] << ", ";
//             }
//             right--;
//         } else if (direction == 2) {
//             for (int i = right; i >= left; i--) {
//                 cout << a[bottom][i] << ", ";
//             }
//             bottom--;
//         } else if (direction == 3) {
//             for (int i = bottom; i >= top; i--) {
//                 cout << a[i][left] << ", ";
//             }
//             left++;
//         }
//         direction = (direction + 1) % 4;
//     }
//     cout<<"END";
// 	return 0;
// }

/*********************** Rotate Image! ***************/
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
//     int left =0 , right=n-1;
//     while(left<=right){
//     for(int i=0;i<n;i++){
//         swap(a[i][left],a[i][right]);
//     }
//     left++;
//     right--;
// }
// 	int top=0,left=0;
// 	while(top<n && left<n){
// 		for(int i=left;i<n;i++){
// 			swap(a[i][top],a[top][i]);
// 		}
// 		left++;
// 		top++;
// 	}
//     for(int i=0;i<n;i++){
// 		for(int j=0;j<n;j++){
// 			cout<<a[i][j]<<" ";
// 		}
//         cout<<endl;
// 	}
// 	return 0;
// }

/***********************Transpose of a square matrix **************/
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
// 	int top=0,left=0;
// 	while(top<n && left<n){
// 		for(int i=left;i<n;i++){
// 			swap(a[i][top],a[top][i]);
// 		}
// 		left++;
// 		top++;
// 	}
// 	for(int i=0;i<n;i++){
// 		for(int j=0;j<n;j++){
// 			cout<<a[i][j]<<" ";
// 		}
// 		cout<<endl;
// 	}
// 	return 0;
// }

/****************Rowwise sort matrix *****************/
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	int n,m;
// 	cin>>n>>m;
// 	int a[n][m];
// 	for(int i=0;i<n;i++){
// 		for(int j=0;j<m;j++){
// 			cin>>a[i][j];
// 		}
// 	}
// 	for(int i=0;i<n;i++){
// 		for(int j=0;j<m;j++){
// 					for(int k=0;k<m-1;k++){
// 			if(a[i][k]>a[i][k+1]){
// 				swap(a[i][k],a[i][k+1]);
// 			}
// 		}
// 		}
// 	}
// 	for(int i=0;i<n;i++){
// 		for(int j=0;j<m;j++){
// 			cout<<a[i][j]<<" ";
// 		}
// 		cout<<endl;
// 	}
// 	return 0;
// }

/***************** Mummy's motivational speech *****************/
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int N;
//     cin >> N;
//     int matrix[100][100];
//     for (int i = 0; i < N; ++i) {
//         for (int j = 0; j < N; ++j) {
//             cin >> matrix[i][j];
//         }
//     }
//     bool isLowerTriangular = true;
//     for (int i = 0; i < N; ++i) {
//         for (int j = i + 1; j < N; ++j) {
//             if (matrix[i][j] != 0) {
//                 isLowerTriangular = false;
//                 break;
//             }
//         }
//         if (!isLowerTriangular) {
//             break;
//         }
//     }
//     if (isLowerTriangular) {
//        cout << "true";
//     } else {
//         cout << "false";
//     }

//     return 0;
// }

/*****************Find square root ********/
// #include<bits/stdc++.h>
// using namespace std;
// int square_root(int n){
//         long long result=0;
//         long long left = 1,right=n;
//         while(left<=right){
//                 long long mid = (left+right)/2;
//                 if(n==mid*mid)
//                 return mid;
//                 else if(n>mid*mid){
//                         left=mid+1;
//                         result=mid;
//                 }
//                 else{
//                         right=mid-1;
//                 }
//         }
//         return result;
// }

// int main(){
//     int m;
//     cin>>m;
//     int ans = square_root(m);
//     cout<<ans<<endl;
// }

/**********************Print Upper Triangular matrix **************/
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	int n,c=0;
// 	cin>>n;
// 	int arr[n][n],b[n][n];
// 	for(int i=0;i<n;i++){
// 		for(int j=0;j<n;j++){
// 			cin>>b[i][j];
// 		}
// 	}
// 	for(int i=0;i<n;i++){
//         for(int j=0;j<i;j++){
// 			arr[i][j]=0;
//             cout<<arr[i][j]<<" ";
// 		}
// 		for(int j=i;j<n;j++){
//             arr[i][j] = b[i][j];
// 			cout<<arr[i][j]<<" ";
// 		 }
//         cout<<endl;
// 	}
// 	return 0;
// }

/********************** A Boolean Matrix **************/
// #include<bits/stdc++.h>
// using namespace std;
// const int MAX_M = 1000;

// int main() {
//     int m, n;
//     cin>>m>>n;
//     int mat[m][n];
//     bool rowMark[MAX_M] = {false};
//     bool colMark[MAX_M] = {false};
//         for (int i = 0; i < m; ++i) {
//         for (int j = 0; j < n; ++j) {
//             cin >> mat[i][j];
//             if (mat[i][j] == 1) {
//                 rowMark[i] = true;
//                 colMark[j] = true;
//             }
//         }
//     }
//         for (int i = 0; i < m; ++i) {
//         for (int j = 0; j < n; ++j) {
//             if (rowMark[i] || colMark[j]) {
//                 mat[i][j] = 1;
//             }
//         }
//     }
//         for (int i = 0; i < m; ++i) {
//         for (int j = 0; j < n; ++j) {
//             cout << mat[i][j] << " ";
//         }
//         cout << endl;
//     }
    
//     return 0;
// }

/************************Column with maximum sum in a Matrix *********/
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int arr[n][n],sum=0,max=0,col;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             sum+=arr[j][i];
//         }
//         if(sum>max){
//             max=sum;
//             col=i+1;
//         }
//         sum=0;
//     }
//     cout<<col<<" "<<max<<endl;
// }

/*****************************Trip in a bus **************/
// #include <bits/stdc++.h>
// using namespace std;

// int Trip(int arr[], long long t,int n) {
//     long long low = 1;
//     long long high = INT_MAX;
//     long long minTime = high;
//     while (low <= high) {
//         long long mid = low + (high - low) / 2;
        
//         long long totalTrips = 0;
//         for (int i = 0; i < n; ++i) {
//             totalTrips += mid / arr[i];
//             if (totalTrips >= t)
//                 break;
//         }
        
//         if (totalTrips >= t) {
//             minTime = mid;
//             high = mid - 1;
//         } else {
//             low = mid + 1;
//         }
//     }
    
//     return minTime;
// }

// int main() {
//     int n;
//     cin >> n;
    
//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     long long t;
//     cin >> t;
//     int result = Trip(arr, t,n);
//     cout << result << endl;
//     return 0;
// }

/**************************Piyush and Magical Park *********/
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int N, M, K, S;
//     cin >> N >> M >> K >> S;

//     char park[N][M];
//     for (int i = 0; i < N; ++i) {
//         for (int j = 0; j < M; ++j) {
//             cin >> park[i][j];
//         }
//     }

//     bool canEscape = true;
//     for (int i = 0; i < N; ++i) {
//         for (int j = 0; j < M; ++j) {
//             if (S < K) {
//                 canEscape = false;
//                 break;
//             }
//             if (park[i][j] == '.') {
//                 S -= 2;
//             } else if (park[i][j] == '*') {
//                 S += 5;
//             } else if (park[i][j] == '#') {
//                 break;
//             }
//             if (j < M - 1) {
//                 S--;
//             }
//         }
//         if (S < K) {
//             canEscape = false;
//             break;
//         }
//     }

//     if (S >= K) {
//         cout << "Yes" << endl;
//         cout << S << endl;
//     } else {
//         cout << "No" << endl;
//     }

//     return 0;
// }

/************************* KTH ROOT **************************/
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int T;
//     cin >> T;

//     for (int t = 0; t < T; ++t) {
//         long long n;
//         int k;
//         cin >> n >> k;
//         long long low = 1, high = n;
//         long long result = 0;

//         while (low <= high) {
//             long long mid = low + (high - low) / 2;
//             long long power = 1;
//             bool overflow = false;
//             for (int i = 0; i < k; ++i) {
//                 if (power > n / mid) {
//                     overflow = true;
//                     break;
//                 }
//                 power *= mid;
//             }
//             if (!overflow && power <= n) {
//                 result = mid;
//                 low = mid + 1;
//             } else {
//                 high = mid - 1;
//             }
//         }

//         cout << result << endl;
//     }

//     return 0;
// }

/******************************** Murthal Parantha **********************/
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int P;
//     cin >> P;
    
//     int L;
//     cin >> L;
    
//     int ranks[L];
//     for (int i = 0; i < L; i++) {
//         cin >> ranks[i];
//     }

//     int low = 0, high = 100000000, mid, answer = high;

//     while (low <= high) {
//         mid = (low + high) / 2;

//         int paranthas_cooked = 0;
//         for (int i = 0; i < L; i++) {
//             int time = 0, j = 1;
//             while (true) {
//                 time += j * ranks[i];
//                 if (time > mid) break;
//                 paranthas_cooked++;
//                 j++;
//             }
//         }

//         if (paranthas_cooked >= P) {
//             answer = mid;
//             high = mid - 1;
//         } else {
//             low = mid + 1;
//         }
//     }

//     cout << answer << endl;
    
//     return 0;
// }

/********************** Painter's Partition Problem Java ********************/
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int K;
//     int N;
//     cin >> K >> N;
//     int boards[N];
//     for (int i = 0; i < N; ++i) {
//         cin >> boards[i];
//     }
//         auto isPossible = [&](int maxTime) {
//         int painters = 1;
//         int timeSpent = 0;
//         for (int i = 0; i < N; ++i) {
//             if (timeSpent + boards[i] <= maxTime) {
//                 timeSpent += boards[i];
//             } else {
//                 ++painters;
//                 timeSpent = boards[i];
//                 if (painters > K) {
//                     return false;
//                 }
//             }
//         }
//         return true;
//     };
//     int low = *max_element(boards, boards + N);
//     int high = 0;
//     for (int i = 0; i < N; ++i) {
//         high += boards[i];
//     }
//     int result = high;
//     while (low <= high) {
//         int mid = low + (high - low) / 2;
        
//         if (isPossible(mid)) {
//             result = mid;
//             high = mid - 1;
//         } else {
//             low = mid + 1;
//         }
//     }
//     cout << result << endl;
//     return 0;
// }
/********************* Book Allocation Problem ****************/
// #include <bits/stdc++.h>

// using namespace std;
// bool isPossible(int books[], int n, int m, int maxPages) {
//     int studentCount = 1;
//     int currentPages = 0;

//     for (int i = 0; i < n; i++) {
//         if (books[i] > maxPages) {
//             return false;
//         }

//         if (currentPages + books[i] > maxPages) {
//             studentCount++;
//             currentPages = books[i];

//             if (studentCount > m) {
//                 return false;
//             }
//         } else {
//             currentPages += books[i];
//         }
//     }
//     return true;
// }

// int findPages(int books[], int n, int m) {
//     int sum = 0;

//     if (n < m) {
//         return -1;
//     }

//     for (int i = 0; i < n; i++) {
//         sum += books[i];
//     }

//     int start = 0;
//     int end = sum;
//     int result = INT_MAX;

//     while (start <= end) {
//         int mid = (start + end) / 2;

//         if (isPossible(books, n, m, mid)) {
//             result = min(result, mid);
//             end = mid - 1;
//         } else {
//             start = mid + 1;
//         }
//     }
//     return result;
// }

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n, m;
//         cin >> n >> m;
//         int books[n];
//         for (int i = 0; i < n; i++) {
//             cin >> books[i];
//         }
//         cout << findPages(books, n, m) << endl;
//     }
//     return 0;
// }


/********************* Aggressive Cows ****************/
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int N, C;
//     cin >> N >> C;
//     int stalls[100000];
//     for (int i = 0; i < N; i++) {
//         cin >> stalls[i];
//     }
//     sort(stalls, stalls + N);

//     int left = 0;
//     int right = stalls[N - 1] - stalls[0];
//     int best = 0;
    
//     while (left <= right) {
//         int mid = (left + right) / 2;
//         int count = 1;
//         int last_position = stalls[0];
//         for (int i = 1; i < N; i++) {
//             if (stalls[i] - last_position >= mid) {
//                 count++;
//                 last_position = stalls[i];
//                 if (count == C) break;
//             }
//         }
//         if (count >= C) {
//             best = mid;
//             left = mid + 1;
//         } else {
//             right = mid - 1;
//         }
//     }
//     cout << best << endl;
//     return 0;
// }