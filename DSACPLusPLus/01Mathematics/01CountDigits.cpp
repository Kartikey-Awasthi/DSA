#include<iostream>
using namespace std;

int CountDigits(int x)
{
    int res = 0 ;
    while(x>0)
    {
        x=x/10;
        res ++ ;
    }
    
    return res;

}



int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
    cout<<CountDigits(n)<<endl;
    }
    return 0;
}