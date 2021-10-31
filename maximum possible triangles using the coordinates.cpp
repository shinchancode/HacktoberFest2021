#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pi (3.141592653589)
#define mod 1000000007
#define int long long
#define float double
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define rrep(i, n) for(int i=n-1;i>=0;i--)
#define rep(i,n) for(int i=0;i<n;i++)
#define array_input(n,arr) for(int i=0;i<n;i++) cin>>arr[i] 
#define array_output(n,arr) for(int i=0;i<n;i++) cout<<arr[i]<<
#define debug1(x) cout<<x<<endl 
#define debug2(x,y) cout<<x<<y<<endl  
#define debug3(x,y,z) cout<<x<<y<<z<<endl 
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
struct Point
{
   int x, y;
}p;
// Returns determinant value of three points in 2D
int det(int x1, int y1, int x2, int y2, int x3, int y3)
{
   return x1*(y2 - y3) - y1*(x2 - x3) + 1*(x2*y3 - y2*x3);
}
 
// Returns count of possible triangles with given array
// of points in 2D.
int countPoints(Point arr[], int n)
{
    int result = 0;  // Initialize result
 
    // Consider all triplets of points given in inputs
    // Increment the result when determinant of a triplet
    // is not 0.
    for (int i=0; i<n; i++)
        for (int j=i+1; j<n; j++)
            for (int k=j+1; k<n; k++)
                if (det(arr[i].x, arr[i].y, arr[j].x,
                        arr[j].y, arr[k].x, arr[k].y))
                    result++;
 
    return result;
}
int32_t main(){
fast
int n;
cin>>n;
Point arr[n];
//lineseg myline;
for(int i=0;i<n;i++)
{
    cin>>arr[i].x;
    cin>>arr[i].y;
}
int a=countPoints(arr,n);
cout<<a<<endl;
return 0;
}
