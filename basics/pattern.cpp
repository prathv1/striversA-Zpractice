//output

// 4444444
// 4333334
// 4322234
// 4321234
// 4322234
// 4333334
// 4444444


#include <iostream>

using namespace std;

int main()
{
    int n = 4;
    
    int r = 2*n - 1;
    
    int mid = r/2;
    
    //mid index will be (mid,mid)
    
    for(int i = 0;i<r;i++){
        for(int j = 0;j<r;j++){
            int  k = max(abs(mid-i),abs(mid-j))+1;
            cout<<k;
        }
        cout<<"\n";
    }
    
    return 0;
}
