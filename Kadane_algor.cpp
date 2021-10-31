#include <bits/stdc++.h>
using namespace std;
#define debug3(x,y,z) cout<<x<<y<<z<<endl 
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
//TAKING NUMBER OF TEST CASES
int t=1;
cin>>t;
while(t--){
    int n;
    //SIZE OF ARRAY
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }
    int maximum=0,current=0;
    for(int i=0;i<n;i++)
    {
        current=current+arr[i];
        if(current>maximum)
        maximum=current;
        if(current<0)
        current=0;
    }
    //SUM OF MAXIMUM CONTINUOUS SUBARRAY
    cout<<maximum<<endl;
}
return 0;
}
//SAMPLE_TEST_CASE
//INPUT
//1
//8
//-2 -3 4 -1 -2 1 5 3
//OUTPUT=10
